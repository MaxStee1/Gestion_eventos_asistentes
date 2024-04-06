
# Gestion de eventos y asistentes 

*Max Malebran Cortes  
21553044-2  
max.malebran@alumnos.ucn.cl*  
___
Este programa permite:
 - crear nuevos eventos
 - registrar asistentes a cada evento
 - consultar por los asistentes de cada evento
 - generar informes generales  

*LAS INSTRUCCIONES PARA COMPILAR SE ENCUENTRAN AL FINAL*
___
## Formato

El programa se compone principalmete de eventos y asistentes, y sus diferentes derivaciones. 

### **Eventos**  
*Todos los eventos tienen en comun los siguientes atributos: nombre, duracion, ubicacion*  

##### TIPOS DE EVENTOS
- **Evento Academico**  
  atributo unico: *tema*

- **Concierto**  
  atributo unico: *genero musical*

- **Evento Deportivo**  
  atributo unico: *deporte*

### **Asistentes**  
*Todos los asistentes tienen en comun los siguientes atributos: nombre, edad*

##### TIPOS DE ASISTENTES
- **Especial**  
  atributo unico: *ocupacion*  
    
- **Estudiante**  
  atributo unico: *carrera*  
    
- **Profesional**  
  atributo unico: *empresa*  
    
- **Normal**  
  posee solo los atributos principales (*nombre*,*edad*)  


___
## Objetos creados

Los objetos se cargan desde la clase *GenerarEventos*  

Evento [Concierto]: {nombre:"Rocki";duracion:"180";ubicacion:"Coquimbo";generoMusical:"Rock"}  
| asistente [Especial]: {nombre:"Mick Jagger";edad:"53";ocupacion:"Musico"}  
| asistente [Especial]: {nombre:"Keith Richards";edad:"59";ocupacion:"Musico"}  
| asistente [Especial]: {nombre:"Ronnie Wood";edad:"55";ocupacion:"Musico"}  
| asistente [Especial]: {nombre:"Allen Klein";edad:"36";ocupacion:"Manager"}  
| asistente [Estudiante]: {nombre:"Pedro Cortes";edad:"25";carrera:"Derecho"}  
| asistente [Normal]: {nombre:"Mateo Garcia";edad:"22"}  
| asistente [Normal]: {nombre:"Sofia Rodriguez";edad:"30"}  
| asistente [Normal]: {nombre:"Alejandro Martinez";edad:"25"}  
| asistente [Normal]: {nombre:"Valentina Lopez";edad:"28"}  
| asistente [Normal]: {nombre:"Juan Perez";edad:"35"}  
| asistente [Normal]: {nombre:"Isabella Sanchez";edad:"27"}  
| asistente [Normal]: {nombre:"Lucas Ramirez";edad:"32"}  
| asistente [Normal]: {nombre:"Camila Gonzalez";edad:"29"}  
| asistente [Normal]: {nombre:"Santiago Torres";edad:"31"}  
| asistente [Normal]: {nombre:"Emma Flores";edad:"26"}  

Evento [Concierto]: {nombre:"Demon";duracion:"200";ubicacion:"La Serena";generoMusical:"Metal"}  
| asistente [Especial]: {nombre:"Jesus Metal";edad:"25";ocupacion:"Musico"}  
| asistente [Especial]: {nombre:"Demon Metal";edad:"25";ocupacion:"Musico"}  
| asistente [Normal]: {nombre:"Pedro Diaz";edad:"19"}  
| asistente [Normal]: {nombre:"Joaquin Carvajal";edad:"22"}  
| asistente [Normal]: {nombre:"Ian Fernadez";edad:"20"}  
| asistente [Normal]: {nombre:"Pablo Diaz";edad:"34"}  
| asistente [Normal]: {nombre:"Pablo Perez";edad:"32"}  
| asistente [Normal]: {nombre:"Mateo Mardones";edad:"25"}  
| asistente [Normal]: {nombre:"Alexis Zaldivia";edad:"24"}  
| asistente [Normal]: {nombre:"Bruno Gutierrez";edad:"21"}  
| asistente [Normal]: {nombre:"Jordy Thompson";edad:"22"}  

Evento [Deportivo]: {nombre:"Splash";duracion:"60";ubicacion:"Santiago";deporte:"natacion"}  
| asistente [Profesional]: {nombre:"Isaias Rocco";edad:"43";empresa:"Speedo"}  
| asistente [Especial]: {nombre:"Michael Phelps";edad:"35";ocupacion:"Nadador"}  
| asistente [Normal]: {nombre:"Lucas Soto";edad:"20"}  
| asistente [Normal]: {nombre:"Bastian Guerra";edad:"20"}  

Evento [Deportivo]: {nombre:"Lion League";duracion:"120";ubicacion:"Santiago";deporte:"futbol"}  
| asistente [Especial]: {nombre:"Alexis Sanchez";edad:"35";ocupacion:"Futbolista"}  
| asistente [Especial]: {nombre:"Arturo Vidal";edad:"36";ocupacion:"Futbolista"}  
| asistente [Especial]: {nombre:"Matias Fernandez";edad:"37";ocupacion:"Futbolista"}  
| asistente [Especial]: {nombre:"Claudio Bravo";edad:"40";ocupacion:"Futbolista"}  
| asistente [Profesional]: {nombre:"Johan Cruiff";edad:"36";empresa:"FIFA"}  
| asistente [Profesional]: {nombre:"Ignacio Cortes";edad:"29";empresa:"FIFA"}  
| asistente [Normal]: {nombre:"Antonio Rodriguez";edad:"25"}  
| asistente [Normal]: {nombre:"Alexia Castro";edad:"19"}  
| asistente [Normal]: {nombre:"Cristian Garin";edad:"20"}  
| asistente [Normal]: {nombre:"Maxi Gutierrez";edad:"22"}  
| asistente [Normal]: {nombre:"Oscar Opazo";edad:"22"}  

Evento [Academico]: {nombre:"Aventuras Cosmicas";duracion:"120";ubicacion:"La Serena";tema:"astronomia"}  
| asistente [Estudiante]: {nombre:"Max Malebran";edad:"20";carrera:"Ingenieria en Tecnologias de Informacion"}  
| asistente [Estudiante]: {nombre:"Ignacio Malebran";edad:"18";carrera:"Astronomia"}  
| asistente [Estudiante]: {nombre:"Nicolas Lobos";edad:"19";carrera:"Medicina"}  
| asistente [Estudiante]: {nombre:"Cristobal Rivera";edad:"21";carrera:"Ingenieria en Computacion"}  
| asistente [Profesional]: {nombre:"Roberto De Luque";edad:"30";empresa:"NASA"}  
| asistente [Especial]: {nombre:"Juan Garcia";edad:"35";ocupacion:"Influencer"}  

___
## Carga de datos desde un archivo

La encargada de cargar los datos de un archivo es la clase *GestorEventos*

*el archivo tiene el siguiente formato:*

EVENTO.*TIPO*:*nombre*,*duracion*,*ubicacion*,*atributo unico*  
*numero que indica el total de asistentes*  
ASISTENTE.*TIPO*:*nombre*,*edad*,*atributo unico*  
ASISTENTE.*NORMAL*:*nombre*,*edad* (en caso de que sea de tipo normal)  

EVENTO.*TIPO*:*nombre*,*duracion*,*ubicacion*,*atributo unico*  
*numero que indica el total de asistentes*  
ASISTENTE.*TIPO*:*nombre*,*edad*,*atributo unico*  



___
## Compilacion
### usa el siguiente comando para compilar el programa:

g++ Asistente.cpp Evento.cpp AsisEstudiante.cpp AsisProfesional.cpp AsisEspecial.cpp EvConcierto.cpp EvDeportivo.cpp EvAcademico.cpp main.cpp -o run

### para ejecutarlo utiliza el siguiente:

./run 
