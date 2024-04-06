#pragma once

#include "Evento.hpp"

class EvConcierto: public Evento {
    private:
        string generoMusical;
    public:
        EvConcierto(string nombre, int duracion, string ubicacion, string genero);
        string getGenero();
        void setGenero(string genero);
        void ver();
        string getAtributo();
};