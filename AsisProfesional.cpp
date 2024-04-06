#include "AsisProfesional.hpp"

AsisProfesional::AsisProfesional(string nombre, int edad, string empresa) : Asistente(nombre,edad){
    this->empresa = empresa;
    cout<<"PROFESIONAL CREADO"<<endl;
}

string AsisProfesional::getEmpresa(){
    return this->empresa;
}

void AsisProfesional::ver(){
    cout<<" -[PROFESIONAL] ";
    Asistente::ver();
    cout<<" | Empresa: "<<this->empresa;
}

string AsisProfesional::getAtributo()
{
    return getEmpresa();
}
