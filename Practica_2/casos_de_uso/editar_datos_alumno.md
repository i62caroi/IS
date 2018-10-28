## Editar datos de alumno  

**ID:** 005  
**Beve descripción:** Funcionalidad del sistema que nos permite modificar los datos de un alumno.  


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. El sistema y todas sus funcionalidades deben funcionar correctamente.  
2. El alumno cuyos datos se van a editar debe haber sido añadido previamente.  



**Flujo principal:**  

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Editar alumno".
2. El usuario introduce el DNI o el apellido del alumno cuyos datos se van a modificar para que el sistema pueda buscar su información.  
3. El sistema va mostrando uno a uno los campos de datos de dicho alumno para que el usuario pueda modificar los que vea convenientes.  


**Postcondiciones:**  

1. Una vez haya finalizado sin error alguno todo el proceso de modificación de datos por parte del usuario, se mostrará un mensaje por pantalla para verificar que los datos han sido modificados correctamente.


**Flujo alternativo:**    

**3.a.** En caso haber algún tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  
**3.b.** En caso de que el usuario introduzca un valor incorrecto con respecto al tipo de variable del campo en cuestión, se mostrará un pequeño mensaje de error y se pedirá al usuario que vuelva a introducir de nuevo dicho campo. Por ejemplo, si la varible a introducir es "edad" (variable de tipo entero) y el usuario introduce "jose" (que se trata de una dato de tipo cadena), es cuando se ejecutaría dicho flujo alternativo y se pediría de nuevo al usuario que introduzca el dato.
