## Listar alumnos  

**ID:** 006    
**Breve descripción:** El sistema muestra por pantalla todos los alumnos registrados.


**Actores principales:** Usuario.   
**Actores secundarios:** Alumnos/as.


**Precondiciones:**

1. Deben existir alumnos en la agenda.


**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Listar alumnos".
2. El usuario elige, dentro del submenú de "Listar alumnos", la opción que desee entre "Lista completa" o "Lista reducida".
3. El usuario elige el campo por el cual quiere ordenar la lista: nombre, apellidos, DNI o curso más alto.  
4. El usuario elige entre "Lista ascendente" o "Lista descendente".  
5. El usuario introduce el nombre que quiere para el fichero markdown.  
6. El sistema muestra por pantalla, así como en el fichero markdown, la lista de todos los alumnos de la agenda.


**Postcondiciones:**

* El sistema muestra todos los alumnos de la agenda.


**Flujo alternativo:**

**3.a.** En caso de no existir alumnos registrados, se mostrará un mensaje de error y se redirigirá automáticamente al menú principal del programa donde se muestran las funcionalidades del sistema.  
