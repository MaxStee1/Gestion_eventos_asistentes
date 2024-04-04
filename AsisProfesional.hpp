#pragma once

#include "Asistente.hpp"

class AsisProfesional : public Asistente{
    private:
        string empresa;
    public:
        AsisProfesional(string nombre, int edad, string empresa);
        string getEmpresa();
        void ver();
};