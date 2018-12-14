## Editar datos de alumno  

**ID:** 003  
**Beve descripción:** Funcionalidad del sistema que nos permite modificar los datos de un alumno.  


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  
 
1. El alumno cuyos datos se van a editar debe haber sido añadido previamente.  



**Flujo principal:**  

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Editar alumno".
2. El usuario introduce los apellidos del alumno cuyos datos se van a modificar.
3. El sistema va mostrando uno a uno los campos de datos de dicho alumno para que el usuario pueda modificar los que vea convenientes.  


**Postcondiciones:**  

* Una vez haya finalizado sin error alguno todo el proceso de modificación de datos por parte del usuario, se guardarán los datos modificados en la agenda.


**Flujo alternativo:**    

**2.a.** En caso de existir varios alumnos con los mismos apellidos, se le pedirá al usuario el DNI del alumno que se desea editar.  
**2.b.** En caso de no existir el alumno en la agenda, se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestión no existe en la agenda y se cargará de nuevo la función editar alumno.  
**3.a.** En caso de que el grupo al que finalmente pertenezca ya tenga un líder, el alumno será automáticamente "no líder".
**3.b.** En caso de haber algún tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  

