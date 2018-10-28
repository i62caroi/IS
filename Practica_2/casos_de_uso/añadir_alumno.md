## Añadir Alumno

**ID:** 002   
**Breve descripción:** Funcionalidad del sistema que nos permite añadir un nuevo alumno.


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a.

**Precondiciones:**

1. El sistema y todas sus funcionalidades deben funcionar correctamente.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Añadir alumno".
2. El sistema va mostrando uno a uno los campos de dicho nuevo alumno a rellenar por el usuario, y va recogiendo los datos introducidos por teclado por el usuario y los va almacenando en cada uno de dichos campos del alumno.


**Postcondiciones:**

1. Una vez haya finalizado sin error alguno todo el proceso de introdución de datos por parte del usuario, se mostrará un mensaje por pantalla para verificar que el alumno ha sido introducido correctamente.


**Flujo alternativo:**    

2.a. En caso haber algún tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  
2.b. En caso de que el usuario introduzca un valor incorrecto con respecto al tipo de variable del campo en cuestión, se mostrará un pequeño mensaje de error y se pedirá al usuario que vuelva a introducir de nuevo dicho campo. Por ejemplo, si la varible a introducir es "edad" (variable de tipo entero) y el usuario introduce "jose" (que se trata de una dato de tipo cadena), es cuando se ejecutaría dicho flujo alternativo y se pediría de nuevo al usuario que introduzca el dato.