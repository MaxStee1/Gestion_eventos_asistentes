#include "Evento.hpp"

Evento::Evento(string nombre, int duracion, string ubicacion){
    this->nombreEvento = nombre;
    this->duracion = duracion;
    this->ubicacion = ubicacion;
}

string Evento::getNombre(){ return this->nombreEvento; }

int Evento::getDuracion(){ return this->duracion; }

string Evento::getUbicacion(){return this->ubicacion; }

void Evento::setNombre(string nombre){ this->nombreEvento = nombre; } 

void Evento::setDuracion(int time){this->duracion = time; }

void Evento::setUbicacion(string ubi){this->ubicacion = ubi; }

void Evento::ver(){
    cout<<"Nombre: "<<this->nombreEvento<<" | Duracion: "<<this->duracion<<" m | Ubicacion: "<<this->ubicacion;
}

string Evento::getAtributo()
{
    return "";
}

list<Asistente *> Evento::getAsistentes()
{
    return this->asistentes;
}

Asistente* Evento::asistenteMayor(){
    int min = 0;
    Asistente* mayor;
    for(Asistente* a : this->asistentes){
        if(a->getEdad() > min){
            min = a->getEdad();
            mayor = a;
        }
    }
    return mayor;
}

Asistente* Evento::asistenteMenor(){
    int max = 150;
    Asistente* menor;
    for(Asistente* a : this->asistentes){
        if(a->getEdad() < max){
            max = a->getEdad();
            menor = a;
        }
    }
    return menor;
}


void Evento::addAsistente(Asistente* asistente){
    this->asistentes.push_back(asistente);
}

void Evento::verAsistentes(){
    cout<<" Total de asistentes a '"<< this->nombreEvento << "' : "<< asistentes.size() <<endl;
    for(Asistente* a : this->asistentes){
        a->ver();
        cout<<endl;
    }
}

int Evento::edadPromedio(){
    int edadTotal = 0;
    for(Asistente* a : asistentes){
        edadTotal += a->getEdad();
    }

    int edadPromedio = edadTotal / asistentes.size();
    return edadPromedio; 
          
}
