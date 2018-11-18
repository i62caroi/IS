## Realizar copia de seguridad

**ID:** 008
**Breve descripción:** El sistema guarda todos los datos registrados en un fichero binario.


**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.


**Precondiciones:**

1. Deben existir alumnos registrados en la base de datos.


**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Realizar copia de seguridad".
2. Se crea un fichero binario con toda la información guardada en la base de datos (datos de los alumnos).


**Postcondiciones:**

* Se crea la copia de seguridad.


**Flujo alternatio:**

**2.a.** En caso de no existir alumnos en la base de datos, se mostrará un mensaje de error y se redirigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.
