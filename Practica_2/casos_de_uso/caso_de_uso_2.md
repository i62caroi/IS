## Guardar Datos

**ID:** 002   
**Breve descripción:** Funcionalidad del sistema que nos permite guardar todos los datos introducidos.


**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.

**Precondiciones:**

1. Anteriormente al uso de la función "Guardar datos", debe haber datos introducidos en el sistema; es decir, alumnos introducimos previamente a mano o habiendo cargado un fichero.
2. Debe existir el fichero binario en el que se vayan a guardar los datos.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario selecciona la funcionalidad del sistema "Guardar Datos".
2. El usuario introduce el nombre del fichero binario en el que se guardarán los datos y el sistema comprueba si existe.
3. El sistema realiza el guardado de los datos del sistema en un fichero binario.


**Postcondiciones:**

* Una vez haya finalizado sin error alguno todo el proceso, se guardarán los datos en el fichero y se redigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  


**Flujo alternativo:** 

**2.a.** En caso de no existir el fichero, se pedirá de nuevo al usuario que rellene el campo.  
**3.a.** En caso de haber algún tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menú inicio del programa donde se mostrarán las funcionalidades del sistema.   
