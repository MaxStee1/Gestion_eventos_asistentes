#include "GenerarEventos.hpp"

void GeneradorEventos::llenarEventos(list<Evento *> &eventos){
    Evento* evento;    
    //-----------------------------------------------------------------------
    evento = new EvConcierto("Rocki",180,"Coquimbo","Rock"); 
    evento->addAsistente(new AsisEspecial("Mick Jagger", 53, "Musico"));
    evento->addAsistente(new AsisEspecial("Keith Richards", 59, "Musico"));
    evento->addAsistente(new AsisEspecial("Ronnie Wood", 55, "Musico"));
    evento->addAsistente(new AsisEspecial("Allen Klein", 36, "Manager"));
    evento->addAsistente(new AsisEstudiante("Pedro Cortes", 25, "Derecho"));
    evento->addAsistente(new Asistente("Mateo Garcia", 22));
    evento->addAsistente(new Asistente("Sofia Rodriguez", 30));
    evento->addAsistente(new Asistente("Alejandro Martinez", 25));
    evento->addAsistente(new Asistente("Valentina Lopez", 28));
    evento->addAsistente(new Asistente("Juan Perez", 35));
    evento->addAsistente(new Asistente("Isabella Sanchez", 27));
    evento->addAsistente(new Asistente("Lucas Ramirez", 32));
    evento->addAsistente(new Asistente("Camila Gonzalez", 29));
    evento->addAsistente(new Asistente("Santiago Torres", 31));
    evento->addAsistente(new Asistente("Emma Flores", 26));
    eventos.push_back(evento);
    //--------------------------------------------------------------------------------------------------------
    evento = new EvConcierto("Demon", 200,"La Serena", "Metal");
    evento->addAsistente(new AsisEspecial("Jesus Metal", 25,"Musico"));
    evento->addAsistente(new AsisEspecial("Demon Metal", 25,"Musico"));
    evento->addAsistente(new Asistente("Pedro Diaz", 19));
    evento->addAsistente(new Asistente("Joaquin Carvajal", 22));
    evento->addAsistente(new Asistente("Ian Fernadez", 20));
    evento->addAsistente(new Asistente("Pablo Diaz", 34));
    evento->addAsistente(new Asistente("Pablo Perez", 32));
    evento->addAsistente(new Asistente("Mateo Mardones", 25));
    evento->addAsistente(new Asistente("Alexis Zaldivia", 24));
    evento->addAsistente(new Asistente("Bruno Gutierrez", 21));
    evento->addAsistente(new Asistente("Jordy Thompson", 22));
    eventos.push_back(evento);  
    //--------------------------------------------------------------------------------------------------------
    evento = new EvDeportivo("Splash",60,"Santiago","natacion");
    evento->addAsistente(new AsisProfesional("Isaias Rocco", 43, "Speedo"));
    evento->addAsistente(new AsisEspecial("Michael Phelps",35,"Nadador"));
    evento->addAsistente(new Asistente("Lucas Soto", 20));
    evento->addAsistente(new Asistente("Bastian Guerra",20));
    eventos.push_back(evento);
    //--------------------------------------------------------------------------------------------------------
    evento = new EvDeportivo("Lion League",120,"Santiago","futbol");
    evento->addAsistente(new AsisEspecial("Alexis Sanchez", 35, "Futbolista"));
    evento->addAsistente(new AsisEspecial("Arturo Vidal", 36, "Futbolista"));
    evento->addAsistente(new AsisEspecial("Matias Fernandez", 37, "Futbolista"));
    evento->addAsistente(new AsisEspecial("Claudio Bravo", 40, "Futbolista"));
    evento->addAsistente(new AsisProfesional("Johan Cruiff", 36, "FIFA"));
    evento->addAsistente(new AsisProfesional("Ignacio Cortes", 29, "FIFA"));
    evento->addAsistente(new Asistente("Antonio Rodriguez", 25));
    evento->addAsistente(new Asistente("Alexia Castro", 19));
    evento->addAsistente(new Asistente("Cristian Garin", 20));
    evento->addAsistente(new Asistente("Maxi Gutierrez", 22));
    evento->addAsistente(new Asistente("Oscar Opazo", 22));
    eventos.push_back(evento);
    //-------------------------------------------------------------------------------------------------------
    evento = new EvAcademico("Aventuras Cosmicas", 120, "La Serena", "astronomia");
    evento->addAsistente(new AsisEstudiante("Max Malebran", 20, "Ingenieria en Tecnologias de Informacion"));
    evento->addAsistente(new AsisEstudiante("Ignacio Malebran", 18, "Astronomia"));
    evento->addAsistente(new AsisEstudiante("Nicolas Lobos", 19, "Medicina"));
    evento->addAsistente(new AsisEstudiante("Cristobal Rivera", 21, "Ingenieria en Computacion"));
    evento->addAsistente(new AsisProfesional("Roberto De Luque", 30, "NASA"));
    evento->addAsistente(new AsisEspecial("Juan Garcia",35,"Influencer"));
    eventos.push_back(evento);
    //--------------------------------------------------------------------------------------------------------
}