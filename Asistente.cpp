#include "Asistente.hpp"

Asistente::Asistente(string nom, int edad){
    this->nombre = nom;
    this->edad = edad;
}

string Asistente::getNombre(){ return this-> nombre; }

int Asistente::getEdad(){ return this->edad; }

void Asistente::setNombre(string nom){ this-> nombre = nom; }

void Asistente::setEdad(int edad){ this->edad = edad; }

void Asistente::ver(){
    cout<<" -Nombre: "<<this->nombre<<" | Edad: "<<this->edad;
}
