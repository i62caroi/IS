## Listar alumnos  

**ID:** 006    
**Breve descripción:** El sistema muestra por pantalla todos los alumnos registrados.


**Actores principales:** Usuario.   
**Actores secundarios:** Alumnos/as.


**Precondiciones:**

1. Deben existir alumnos en la agenda.


**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Listar alumnos".
2. El usuario elige, dentro del submenú de "Listar alumnos", la opción que desee entre "Lista reducida" o "Lista completa".
3. El usuario elige entre "Lista ascendente" o "Lista descendente", escogiendo si ordena por nombre, DNI, apellido o curso más alto en el que esté matriculado.
4. El sistema muestra por pantalla, así como en un fichero en lenguaje markdown o html, la lista de todos los alumnos de la agenda.


**Postcondiciones:**

* El sistema muestra todos los alumnos del sistema.


**Flujo alternativo:**

**3.a.** En caso de no existir alumnos registrados, se mostrará un mensaje de error y se redirigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.
