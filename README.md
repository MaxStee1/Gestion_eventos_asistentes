
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

**Eventos**  
*Todos los eventos tienen en comun los siguientes atributos: nombre, duracion, ubicacion*  

#### TIPOS DE EVENTOS
- **Evento Academico**  
  atributo unico: *tema*

- **Concierto**  
  atributo unico: *genero musical*

- **Evento Deportivo**  
  atributo unico: *deporte*

**Asistentes**  
*Todos los asistentes tienen en comun los siguientes atributos: nombre, edad*

#### TIPOS DE ASISTENTES
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
Evento **[Concierto]**: {nombre:"Rocki";duracion:"180";ubicacion:"Coquimbo";generoMusical:"Rock"}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Estudiante]**: {nombre:"";edad:"";carrera:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  

Evento **[Concierto]**: {nombre:"Demon";duracion:"200";ubicacion:"La Serena";generoMusical:"Metal"}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}    
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  

Evento **[Deportivo]**: {nombre:"Splash";duracion:"60";ubicacion:"Santiago";deporte:"natacion"}  
| asistente **[Profesional]**: {nombre:"";edad:"";empresa:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}    
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  

Evento **[Deportivo]**: {nombre:"Lion League";duracion:"120";ubicacion:"Santiago";deporte:"futbol"}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}  
| asistente **[Profesional]**: {nombre:"";edad:"";empresa:""}  
| asistente **[Profesional]**: {nombre:"";edad:"";empresa:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  
| asistente **[Normal]**: {nombre:"";edad:""}  

Evento **[Academico]**: {nombre:"Aventuras Cosmicas";duracion:"120";ubicacion:"La Serena";tema:"astronomia"}  
| asistente **[Estudiante]**: {nombre:"";edad:"";carrera:""}  
| asistente **[Estudiante]**: {nombre:"";edad:"";carrera:""}  
| asistente **[Estudiante]**: {nombre:"";edad:"";carrera:""}  
| asistente **[Estudiante]**: {nombre:"";edad:"";carrera:""}  
| asistente **[Profesional]**: {nombre:"";edad:"";empresa:""}  
| asistente **[Especial]**: {nombre:"";edad:"";ocupacion:""}   



___
## Compilacion
### usa el siguiente comando para compilar el programa:

g++ Asistente.cpp Evento.cpp AsisEstudiante.cpp AsisProfesional.cpp AsisEspecial.cpp EvConcierto.cpp EvDeportivo.cpp EvAcademico.cpp main.cpp -o run

### para ejecutarlo utiliza el siguiente:

./run 
