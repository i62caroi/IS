## Eliminar alumno  

**ID:** 008    
**Breve descripción:** El sistema elimina un alumno del sistema

**Actores principales:** Usuario    
**Actores secundarios:** Alumno/a

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

1.a. En el caso de existir un error al seleccion la funcionalidad se mostraria un mensaje de error por la pantalla    
2.a. En caso de existir dos alumnos con el mismo apellido, se le pedira al usuario el dni del alumno que en cuestión se desea eliminar para filtrar las coincidencias 
2.b. En caso de no existir el alumno en el sistema se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestion no existe en el sistema  


## Listar alumnos  

**ID:** 009    
**Breve descripción:** El sistema muestra por pantalla todos los alumnos registrados

**Actores principales:** Usuario   
**Actores secundarios:** Alumnos/as

**Precondiciones:**

1. Se debe poder seleccionar la opcion de "Listar alumnos" en el menu principal
2. Se debe poder seleccionar la opcion "Lista simplificada" o "Lista completa" en el submenú "Listar alumnos"
3. Se debe poder leer todos los alumnos del sistema
4. Se debe poder mostrar por pantalla los alumnos leidos

**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad en el menu principal
2. El usurio elige dentro del submenú de "Listar alumnos" la opcion que desee
3. El sistema muestra por pantalla la lista de todos los alumnos del sistema

**Postcondiciones:**

1. El sistema muestra todos los alumnos del sistema
2. En caso de no haber alumnos en el sistema se mostrará un mensaje de error

**Flujo alternativo:**

1-2.a. En el caso de existir un error al seleccion la funcionalidad se mostraria un mensaje de error por la pantalla .   
3.a. En caso de no existir alumnos registrados se mostrará un mensaje de error


## Realizar copia de seguridad

**ID:** 010    
**Breve descripción:** El sistema guarda todos los datos registrados en un fichero binario

**Actores principales:** Usuario    
**Actores secundarios:** ninguno

**Precondiciones:**

1. Se debe poder seleccionar la funcionalidad "realizar copia de seguridad"
2. Deben existir alumnos registrados en la base de datos

**Flujo principal:**

1. El caso de uso empieza con la seleccion de la funcionalidad en el menú
2. Se crea un fichero binario con toda la informacion guardada en la base de datos (datos de los alumnos)

**Flujo alternatio:**

1.a En el caso de existir un error al seleccionar la funcionalidad en el menú se mostrará un mensaje de error por pantalla
2.a En caso de no existir alumnos en la base de datos se mostrará un mensaje por pantalla indicando la situación al usuario
