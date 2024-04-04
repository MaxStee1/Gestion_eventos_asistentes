
#include "Evento.hpp"

class EvAcademico: public Evento{
    private:
        string tema;
    public:
        EvAcademico(string nombre, int duracion, string ubicacion, string tema);
        string getTema();
        void ver();
};