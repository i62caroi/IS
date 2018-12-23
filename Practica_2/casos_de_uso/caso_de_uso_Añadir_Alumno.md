## Añadir Alumno

**ID:** 002   
**Breve descripción:** Funcionalidad del sistema que nos permite añadir un nuevo alumno.


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a.

**Precondiciones:**

1. No deben existir dos alumnos con el mismo DNI o email.
2. No debe haber más de 150 alumnos en el sistema.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Añadir alumno".
2. El usuario introduce el DNI para que la agenda compruebe si ya existe.
3. Si no existe el alumno, el sistema va mostrando uno a uno los campos de dicho nuevo alumno a rellenar por el usuario y va recogiendo los datos introducidos por teclado. Los datos obligatorios son: Nombre, Apellidos, DNI(introducido previamente), Fecha de nacimiento, Teléfono, Dirección, Email y Curso más alto matriculado. Por otro lado, los datos no obligatorios son: Grupo al que pertenece y si es líder o no (no puede serlo de un grupo que ya tenga uno).


**Postcondiciones:**

* Una vez haya finalizado sin error alguno todo el proceso de introducción de datos por parte del usuario, se guardarán los datos en la agenda y se redigirá automáticamente al menú principal del programa donde se muestran las funcionalidades del sistema.  


**Flujo alternativo:**    

**2.a.** En caso de existir ese DNI y, por tanto, ese alumno, el sistema muestra un mensaje diciendo que ya existe ese alumno y se cargaría de nuevo el menú principal del programa donde se muestran las funcionalidades del sistema.    
**3.a.** En caso de que el grupo indicado ya tenga un líder, el alumno será automáticamente "no líder".   
**3.b.** En caso de haber algún tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menú principal del programa donde se muestran las funcionalidades del sistema. 


