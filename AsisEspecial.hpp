#pragma once

#include "Asistente.hpp"

class AsisEspecial : public Asistente{
    private:
        string ocupacion;

    public:
        AsisEspecial(string nombre, int edad,string ocupacion);
        string getOcupacion();
        void ver();

};