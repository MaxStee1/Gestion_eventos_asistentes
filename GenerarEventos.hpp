#pragma once
#include <list>
#include "Evento.hpp"
#include "EvConcierto.hpp"
#include "EvDeportivo.hpp"
#include "EvAcademico.hpp"
#include "Asistente.hpp"
#include "AsisEspecial.hpp"
#include "AsisEstudiante.hpp"
#include "AsisProfesional.hpp"

class GeneradorEventos {
public:
    void llenarEventos(list<Evento*>& eventos);
};