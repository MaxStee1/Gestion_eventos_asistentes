#pragma once
#include "Evento.hpp"
#include <iostream>
using namespace std;

class EvConcierto: public Evento {
    private:
        string generoMusical;
    public:
        EvConcierto(string nombre, int duracion, string ubicacion, string genero);
        string getGenero();
        void setGenero(string genero);
        void ver();
};