## Realizar copia de seguridad

**ID:** 008
**Breve descripción:** El sistema guarda todos los datos registrados en un fichero binario.


**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.


**Precondiciones:**

1. Deben existir alumnos registrados en la base de datos.


**Flujo principal:**

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Realizar copia de seguridad".
2. La funcionalidad comprueba si hay datos en el sistema.
3. Se le solicita al usuario el nombre del fichero fichero donde se introducirá la copia de seguridad.
4. Se sobreescribirán los datos en el fichero cuyo nombre es el introducido por el usuario.

**Postcondiciones:**

* Se mostrará un mensaje de que la copia de seguridad ha sido sobreescrita o creada correctamente y se redirigirá al menú de inicio.


**Flujo alternatio:**

**2.a.** En caso de no existir alumnos en el sistema, se mostrará un mensaje de que el sistema no contiene alumnos por lo tanto no se puede realizar copia de seguridad y se redirigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.

**3.a.** En caso de que el fichero binario (con el nombre introducido por el usuario) no exista en el sistema se llevará a cabo la creación de un nuevo fichero y en él se realizará la escritura de datos.  

