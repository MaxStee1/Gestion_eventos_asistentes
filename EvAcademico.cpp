#include "EvAcademico.hpp"

EvAcademico::EvAcademico(string nombre, int duracion, string ubicacion, string tema): Evento(nombre,duracion,ubicacion){
    this->tema = tema;
    cout<<"Evento academico creado"<<endl;
}

string EvAcademico::getTema(){
    return this->tema;
}

void EvAcademico::ver(){
    Evento::ver();
    cout<<" | Tema: "<<this-> tema;
    cout<<"\nTipo: Evento Academico"<<endl;
}