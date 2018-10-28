## Eliminar alumno  

**ID:** 008    
**Breve descripción:** El sistema elimina un alumno de la base de datos.


**Actores principales:** Usuario.    
**Actores secundarios:** Alumno/a.


**Precondiciones:**

1. Se debe poder seleccionar la opción de "eliminar alumno" en el menú principal.
2. Se debe poder buscar a cualquier alumno por su apellido o DNI.


**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Eliminar alumno".
2. El usuario introduce el apellido del usuario que desea eliminar.
3. El sistema elimina al alumno con dicho apellido de la base de datos.


**Postcondiciones:**

1. El sistema, en caso de no haber ocurrido ningun error, eliminará al alumno de la base de datos.


**Flujo alternativo:**

**2.a.** En caso de existir dos alumnos con el mismo apellido, se le pedirá al usuario el DNI del alumno que se desea eliminar para filtrar las coincidencias.  
**2.b.** En caso de no existir el alumno en el sistema, se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestión no existe en el sistema.
