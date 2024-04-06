#include "GestorEventos.hpp"

void llenarAsistentesParaEvento(ifstream& archivo, Evento* ev) {
    string linea;

    // Lee la primera línea de asistente para este evento
    while (getline(archivo, linea)) {
        // Si la línea está vacía, hemos llegado al final de los asistentes para este evento
        if (linea.empty() || linea == "|") {
            break;
        }

        string tipoAsistente, nombre, edad, detalle;
        stringstream ss(linea);

        getline(ss, tipoAsistente, ':');
        
        if (tipoAsistente == "ASISTENTE.NORMAL") {
            getline(ss, nombre, ',');
            getline(ss, edad);
            ev->addAsistente(new Asistente(nombre, stoi(edad)));
        } else if (tipoAsistente == "ASISTENTE.ESPECIAL") {
            getline(ss, nombre, ',');
            getline(ss, edad, ',');
            getline(ss, detalle);
            stringstream ss_detalle(detalle);
            string ocupacion;
            getline(ss_detalle, ocupacion, ',');
            ev->addAsistente(new AsisEspecial(nombre, stoi(edad), ocupacion));
        } else if (tipoAsistente == "ASISTENTE.ESTUDIANTE") {
            getline(ss, nombre, ',');
            getline(ss, edad, ',');
            getline(ss, detalle);
            stringstream ss_detalle(detalle);
            string carrera;
            getline(ss_detalle, carrera, ',');
            ev->addAsistente(new AsisEstudiante(nombre, stoi(edad), carrera));
        } else if (tipoAsistente == "ASISTENTE.PROFESIONAL") {
            getline(ss, nombre, ',');
            getline(ss, edad, ',');
            getline(ss, detalle);
            stringstream ss_detalle(detalle);
            string empresa;
            getline(ss_detalle, empresa, ',');
            ev->addAsistente(new AsisProfesional(nombre, stoi(edad), empresa));
        }
    }
}

void GestorEventos::llenarEventos(list<Evento*>& eventos) {
    ifstream archivo("eventosProgramados.txt");
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo." << endl;
        return;
    }
    cout << "ARCHIVO ABIERTO" << endl;

    string linea;
    while (getline(archivo, linea)) {
        if (linea.empty()) {
            continue; // Salta las líneas en blanco
        }

        string nombreEvento, duracionEvento, ubicacionEvento;
        stringstream ss(linea);
        string tipoEvento;
        getline(ss, tipoEvento, ':');

        if (tipoEvento == "EVENTO.DEPORTIVO") {
            string deporte;
            getline(ss, nombreEvento, ',');
            getline(ss, duracionEvento, ',');
            getline(ss, ubicacionEvento, ',');
            getline(ss, deporte);

            Evento* ev = new EvDeportivo(nombreEvento, stoi(duracionEvento), ubicacionEvento, deporte);
            llenarAsistentesParaEvento(archivo, ev); // Llamamos a la función para llenar los asistentes
            eventos.push_back(ev);

        } else if (tipoEvento == "EVENTO.CONCIERTO") {
            string generoMusical;
            getline(ss, nombreEvento, ',');
            getline(ss, duracionEvento, ',');
            getline(ss, ubicacionEvento, ',');
            getline(ss, generoMusical);

            Evento* ev = new EvConcierto(nombreEvento, stoi(duracionEvento), ubicacionEvento, generoMusical);
            llenarAsistentesParaEvento(archivo, ev); // Llamamos a la función para llenar los asistentes
            eventos.push_back(ev);

        } else if (tipoEvento == "EVENTO.ACADEMICO") {
            string tema;
            getline(ss, nombreEvento, ',');
            getline(ss, duracionEvento, ',');
            getline(ss, ubicacionEvento, ',');
            getline(ss, tema);

            Evento* ev = new EvAcademico(nombreEvento, stoi(duracionEvento), ubicacionEvento, tema);
            llenarAsistentesParaEvento(archivo, ev); // Llamamos a la función para llenar los asistentes
            eventos.push_back(ev);
        }
    }
    archivo.close();
}
