#pragma once
#include <fstream>
#include <sstream>
#include "Evento.hpp"
#include "EvConcierto.hpp"
#include "EvDeportivo.hpp"
#include "EvAcademico.hpp"
#include "Asistente.hpp"
#include "AsisEstudiante.hpp"
#include "AsisProfesional.hpp"
#include "AsisEspecial.hpp"

class GestorEventos {
public:
    void llenarEventos(list<Evento*>& eventos);
};
