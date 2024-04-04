#include "EvDeportivo.hpp"

EvDeportivo::EvDeportivo(string nombre, int duracion, string ubicacion, string deporte): Evento(nombre,duracion,ubicacion){
    this->deporte = deporte;
    cout<<"Evento deportivo creado"<<endl;
}

string EvDeportivo::getDeporte(){
    return this->deporte;
}

void EvDeportivo::ver(){
    Evento::ver();
    cout<<" | Deporte: "<<this-> deporte;
    cout<<"\nTipo: Evento deportivo"<<endl;
}