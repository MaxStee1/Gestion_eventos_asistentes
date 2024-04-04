#pragma once
#include <iostream>
using namespace std;

class Asistente{
    private:
        string nombre;
        int edad;
    
    public:
        Asistente(string nom, int edad);
        string getNombre();
        int getEdad();
        void setNombre(string nom);
        void setEdad(int edad);
        virtual void ver();

};