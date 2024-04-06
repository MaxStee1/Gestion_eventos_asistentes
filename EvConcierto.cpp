#include "EvConcierto.hpp"

EvConcierto::EvConcierto(string nombre, int duracion, string ubicacion, string genero) : Evento(nombre,duracion,ubicacion){
    this -> generoMusical = genero;
    cout<<"Concierto creado"<<endl;
}

void EvConcierto::setGenero(string genero){
    this -> generoMusical = genero;
}

string EvConcierto::getGenero(){
    return this -> generoMusical;
}

void EvConcierto:: ver(){
    Evento::ver();
    cout<<" | Genero musical: " << this->generoMusical;
    cout<<"\nTipo: Concierto"<<endl;
}

string EvConcierto::getAtributo()
{
    return getGenero();
}
