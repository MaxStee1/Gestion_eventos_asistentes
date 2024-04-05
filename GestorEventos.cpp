#include "GestorEventos.hpp"


void llenarAsistentesParaEvento(ifstream& archivo, Evento* ev, string linea) {
    int numAsistentes;
    archivo >> numAsistentes; // Lee el número de asistentes para este evento
    getline(archivo, linea); // Limpia el salto de línea

    for (int i = 0; i < numAsistentes; ++i) {
        string tipoAsistente, nombre, edad, detalle;
        getline(archivo, tipoAsistente, ':'); // Obtiene el tipo de asistente
        cout << tipoAsistente << endl;

        // Crea el asistente correspondiente y agrégalo al evento
        if (tipoAsistente == "ASISTENTE.NORMAL") {
            getline(archivo, nombre, ',');
            getline(archivo, edad);
            ev->addAsistente(new Asistente(nombre, stoi(edad)));
        } else if (tipoAsistente == "ASISTENTE.ESPECIAL") {
            getline(archivo, nombre, ',');
            getline(archivo, edad, ',');
            getline(archivo, detalle);
            stringstream ss(detalle);
            string ocupacion;
            getline(ss, ocupacion, ',');
            ev->addAsistente(new AsisEspecial(nombre, stoi(edad), ocupacion));
        } else if (tipoAsistente == "ASISTENTE.ESTUDIANTE") {
            getline(archivo, nombre, ',');
            getline(archivo, edad, ',');
            getline(archivo, detalle);
            stringstream ss(detalle);
            string carrera;
            getline(ss, carrera, ',');
            ev->addAsistente(new AsisEstudiante(nombre, stoi(edad), carrera));
        } else if (tipoAsistente == "ASISTENTE.PROFESIONAL") {
            getline(archivo, nombre, ',');
            getline(archivo, edad, ',');
            getline(archivo, detalle);
            stringstream ss(detalle);
            string empresa;
            getline(ss, empresa, ',');
            ev->addAsistente(new AsisProfesional(nombre, stoi(edad), empresa));
        }
    }
}

void GestorEventos::llenarEventos(list<Evento*> &eventos){
    ifstream archivo("eventosProgramados.txt");
        if (!archivo.is_open()) {
            cerr << "Error al abrir el archivo." << endl;
            return;
        }
        cout<<"ARCHIVO ABIERTO"<<endl;

        string linea;
        while (getline(archivo, linea)) {
            string nombreEvento,duracionEvento,ubicacionEvento;
            stringstream ss(linea); // Aquí se utiliza std::stringstream
            string tipoEvento;
            getline(ss, tipoEvento, ':');

            if (tipoEvento == "EVENTO.DEPORTIVO") {
                string deporte;
                getline(ss, nombreEvento, ',');
                getline(ss, duracionEvento, ',');
                getline(ss, ubicacionEvento, ',');
                getline(ss, deporte);
                
                Evento* ev = new EvDeportivo(nombreEvento,stoi(duracionEvento),ubicacionEvento,deporte);
                llenarAsistentesParaEvento(archivo, ev, linea);

                eventos.push_back(ev);

            } else if (tipoEvento == "EVENTO.CONCIERTO") {
                string generoMusical;
                getline(ss, nombreEvento, ',');
                getline(ss, duracionEvento, ',');
                getline(ss, ubicacionEvento, ',');
                getline(ss, generoMusical);
                
                Evento* ev = new EvConcierto(nombreEvento,stoi(duracionEvento),ubicacionEvento,generoMusical);               
                llenarAsistentesParaEvento(archivo, ev, linea);

                eventos.push_back(ev);

            }else if (tipoEvento == "EVENTO.ACADEMICO"){
                string tema;
                getline(ss, nombreEvento, ',');
                getline(ss, duracionEvento, ',');
                getline(ss, ubicacionEvento, ',');
                getline(ss, tema);

                Evento* ev = new EvAcademico(nombreEvento,stoi(duracionEvento),ubicacionEvento,tema);
                llenarAsistentesParaEvento(archivo, ev, linea);

                eventos.push_back(ev);
            }
            
        }
        archivo.close();



}
