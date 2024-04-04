#pragma once
#include "Asistente.hpp"
#include <iostream>
#include <list>

using namespace std;

class Evento{
    private:
        string nombreEvento;
        int duracion;       // En minutos
        string ubicacion;
        list<Asistente*> asistentes;

    public:
        Evento(string nombre, int duracion, string ubicacion);
        string getNombre();
        int getDuracion();
        string getUbicacion();
        void setNombre(string nombre);
        void setDuracion(int time);
        void setUbicacion(string ubi);
        void addAsistente(Asistente* asistente);
        void verAsistentes();
        int edadPromedio();

        virtual void ver();
};