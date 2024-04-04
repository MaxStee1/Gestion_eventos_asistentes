#include "AsisEspecial.hpp"

AsisEspecial::AsisEspecial(string nombre, int edad, string ocupacion) : Asistente(nombre, edad) {
    this->ocupacion = ocupacion;
    cout<<"ASISTENTE ESPECIAL CREADO"<<endl;
}

string AsisEspecial::getOcupacion(){
    return this-> ocupacion;
}

void AsisEspecial::ver(){
    cout<<" -[ASISTENTE ESPECIAL] ";
    Asistente::ver();
    cout<<" | Ocupacion: "<<this->ocupacion;
}