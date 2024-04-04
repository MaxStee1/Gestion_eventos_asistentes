#pragma onc;

#include "Asistente.hpp"
#include <iostream>
using namespace std;

class AsisEstudiante: public Asistente{
    private:
        string carerra;
    public:
        AsisEstudiante(string nombre, int edad, string carrera);
        string getCarrera();
        void ver();
};