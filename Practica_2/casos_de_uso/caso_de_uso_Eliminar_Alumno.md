## Eliminar alumno  

**ID:** 005    
**Breve descripción:** El sistema elimina un alumno de la base de datos.


**Actores principales:** Usuario.    
**Actores secundarios:** Alumno/a.


**Precondiciones:**

1. El alumno que se quiera eliminar debe existir en el sistema.


**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Eliminar alumno".
2. El usuario introduce los apellidos del usuario que desea eliminar.
3. El sistema elimina al alumno con dicho apellido de la base de datos.


**Postcondiciones:**

* El sistema, en caso de no haber ocurrido ningun error, eliminará al alumno de la base de datos.


**Flujo alternativo:**

**2.a.** En caso de existir varios alumnos con los mismos apellidos, se le pedirá al usuario el DNI del alumno que se desea eliminar.  
**2.b.** En caso de no existir el alumno en la agenda, se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestión no existe en la agenda y se redirigirá automáticamente al menú principal del programa donde se muestran las funcionalidades del sistema.
