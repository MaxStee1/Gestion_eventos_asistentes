#include "AsisEstudiante.hpp"

AsisEstudiante::AsisEstudiante(string nombre, int edad, string carrera) : Asistente(nombre,edad){
    this->carerra = carrera;
    cout<<"ESTUDIANTE CREADO"<<endl;
}

string AsisEstudiante::getCarrera(){
    return this->carerra;
}

void AsisEstudiante::ver(){
    cout<<" -[ESTUDIANTE] ";
    Asistente::ver();
    cout<<" | Carrera: "<<this->carerra;
}