#pragma once

#include "Asistente.hpp"

class AsisEstudiante: public Asistente{
    private:
        string carerra;
    public:
        AsisEstudiante(string nombre, int edad, string carrera);
        string getCarrera();
        void ver();
        string getAtributo();
};