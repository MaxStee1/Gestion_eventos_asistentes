#pragma once
#include "Evento.hpp"
#include <iostream>
using namespace std;

class EvDeportivo: public Evento{
    private:
        string deporte;
    public:
        EvDeportivo(string nombre, int duracion, string ubicacion, string deporte);
        string getDeporte();
        void ver();
};