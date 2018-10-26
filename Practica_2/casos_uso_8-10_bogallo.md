## Eliminar alumno  

**ID:008**
**Breve descripción: El sistema elimina un alumno del sistema**

**Actores principales:Usuario**
**Actores secundarios:Alumno/a**

**Precondiciones:**

1. Se debe poder seleccionar la opcion de "eliminar alumno" en el menu principal
2. Se debe poder buscar a cualquier alumno por su apellido o dni

**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad en el menu principal
2. El usuario introduce el apellido del usuario que desea eliminar
3. El sistema elimina al alumno con dicho apellido de la base de datos

**Postcondiciones:**

1. El sistema, en caso de no haber ocurrido ningun error, eliminará al alumno de la base de datos

**Flujo alternativo:**

1. En caso de existir dos alumnos con el mismo apellido, se le pedira al usuario el dni del alumno que en cuestión se desea eliminar para filtrar las coincidencias
2. En caso de no existir el alumno en el sistema se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestion no existe en el sistema


## Listar alumnos  

**ID:009**
**Breve descripción: El sistema muestra por pantalla todos los alumnos registrados**

**Actores principales:Usuario**
**Actores secundarios:Alumnos/as**

**Precondiciones:**

1. Se debe poder seleccionar la opcion de "Listar alumnos" en el menu principal
2. Se debe poder leer todos los alumnos del sistema
3. Se debe poder mostrar por pantalla los alumnos leidos

**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad en el menu principal
2. El usuario introduce el apellido del usuario que desea eliminar
3. El sistema elimina al alumno con dicho apellido de la base de datos

**Postcondiciones:**

1. El sistema, en caso de no haber ocurrido ningun error, eliminará al alumno de la base de datos

**Flujo alternativo:**

1. En caso de existir dos alumnos con el mismo apellido, se le pedira al usuario el dni del alumno que en cuestión se desea eliminar para filtrar las coincidencias
2. En caso de no existir el alumno en el sistema se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestion no existe en el sistema
