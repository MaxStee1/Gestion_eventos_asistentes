#include "GestorEventos.hpp"
#include "GenerarEventos.hpp"

#include <iostream>
#include <list>

using namespace std;

void verEventos(list<Evento*> eventos){
    int cont=1;
    for(Evento* evento : eventos){
        cout<<" ["<<cont<<"] "<<evento->getNombre()<<endl;
        cont++;
    }
}

Evento* buscarEvento(list<Evento*> eventos, int numeroEvento){
    int cont = 1;
    Evento* evento;
    for(Evento* e : eventos){
        if(cont == numeroEvento){
            evento = e;
        }
        cont++;
    }
    return evento;
}

void crearEvento(list<Evento*>& eventos){
    int tipoEvento;
    cout<<"Tipo de evento\n[1]Academico\n[2]Concierto\n[3]Deportivo\n >";
    cin>>tipoEvento;

    string nombre="", ubicacion, tema = "", genero="", deporte="";
    int duracion;
    
    cout<<"creando nuevo evento..."<<endl;
    cout<<"Ingrese el nombre: "; 
    cin.ignore(); // Ignora el salto de línea dejado por la entrada previa antes de getline
    getline(cin, nombre);
    cout<<"Ingrese la duracion: "; 
    cin>>duracion;
    cout<<"Ingrese la ubicacion: "; 
    cin.ignore(); // Ignora el salto de línea dejado por la entrada previa antes de getline
    getline(cin, ubicacion);

    switch (tipoEvento)
    {
    case 1:
        cout<<"tema: ";
        getline(cin, tema); 
        eventos.push_back(new EvAcademico(nombre,duracion,ubicacion,tema));
        break;

    case 2:
        cout<<"genero musical: ";
        getline(cin, genero); 
        eventos.push_back(new EvConcierto(nombre,duracion,ubicacion,genero));
        break;
    
    case 3:
        cout<<"deporte: ";
        getline(cin, deporte);
        eventos.push_back(new EvDeportivo(nombre,duracion,ubicacion,deporte));
        break;

    default:
        cout<<"opcion no disponible!!"<<endl;
        break;
    }
}

void agregar(Evento* evento,int tipoAsistente,string nombre, int edad){

    string ocupacion="",carrera="",empresa="";

    switch (tipoAsistente){
        case 1: // Asistente especial
            cout<<"Ocupacion: ";
            cin.ignore();
            getline(cin, ocupacion); 
            evento->addAsistente(new AsisEspecial(nombre,edad,ocupacion));
            break;
            
        case 2: // Estudiante
            cout<<"Carrera: ";
            cin.ignore(); 
            getline(cin, carrera); 
            evento->addAsistente(new AsisEstudiante(nombre,edad,carrera));
            break;

        case 3: // Profesional
            cout<<"Empresa: ";
            cin.ignore();
            getline(cin, empresa); 
            evento->addAsistente(new AsisProfesional(nombre,edad,empresa));
            break;
            
        case 4: // Normal
            evento->addAsistente(new Asistente(nombre, edad));
            cout<<"Asistente agregado"<<endl;
            break;

        default:
            cout<<"Opcion no valida!!"<<endl;
        break;
    }
}


void registrarAsistentes(list<Evento*>& eventos){
    int opcion;
    cout<<"Seleccione un evento"<<endl;
    verEventos(eventos);
    cout<<" >"; 
    cin>>opcion;
    Evento* evento = buscarEvento(eventos, opcion);

    int tipoAsistente;
    string nombre= ""; 
    int edad;
    char continuar = 'y'; // Inicializamos continuar a 's' para comenzar el bucle

    while (continuar == 'y' || continuar == 'Y') {
        cout<<"Registre el nuevo asistente"<<endl;
        cout<<"Tipo de asistente\n[1] Especial\n[2] Estudiante\n[3] Profesional\n[4] Normal\n >";
        cin>>tipoAsistente;

        cout<<"Nombre: "; 
        cin.ignore(); 
        getline(cin, nombre);

        cout<<"Edad: "; 
        cin>>edad;
        
        agregar(evento,tipoAsistente,nombre,edad);

        cout<<"Desea agregar otro asistente? (Y/N): ";
        cin>>continuar;
    }
    cout<<"Proceso finalizado"<<endl;
}


void listaAsistentes(list<Evento*> eventos){
    int opcion;
    cout<<"seleccione un evento"<<endl;
    verEventos(eventos);
    cout<<" >"; cin>>opcion;
    Evento* evento = buscarEvento(eventos, opcion);

    evento->verAsistentes();
}

void informes(list<Evento*> eventos){
    cout<<"\n*** EVENTOS PROGRAMADOS ***\n"<<endl;
    for(Evento* evento : eventos){
        cout<<"-------------------------------------------------\n"<<endl;
        evento->ver();
        cout<<endl;
        evento->verAsistentes();
        cout<<"\nEdad Pormedio del evento: "<<evento->edadPromedio()<<endl;
        cout<<endl;
    }
}

void menu(list<Evento*>& eventos){
    int opcion;
    cout<<"\n*** MENU ***"<<endl;
    cout<<"[1] crear evento"<<endl;
    cout<<"[2] registrar asistentes"<<endl;
    cout<<"[3] Lista de Asistentes"<<endl;
    cout<<"[4] Informes"<<endl;
    cout<<" >";
    cin>>opcion;

    while(opcion != 0){

        switch (opcion)
        {
        case 1:
            crearEvento(eventos);
            break;
        
        case 2:
            registrarAsistentes(eventos);
            break;

        case 3:
            listaAsistentes(eventos);
            break;

        case 4:
            informes(eventos);
            break;

        default:
            break;
        }

        cout<<"\n*** MENU ***"<<endl;
        cout<<"[1] crear evento"<<endl;
        cout<<"[2] registrar asistentes"<<endl;
        cout<<"[3] Lista de Asistentes"<<endl;
        cout<<"[4] Informes"<<endl;
        cout<<"[0] SALIR"<<endl;
        cout<<" >";
        cin>>opcion;

    }
}

int main(){
    list<Evento*> eventos;
    GestorEventos gestor;
    GeneradorEventos generador;

    generador.llenarEventos(eventos);
    gestor.llenarEventos(eventos);

    menu(eventos);

    return 0;
}