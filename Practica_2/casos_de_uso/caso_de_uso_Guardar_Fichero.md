## Guardar fichero

**ID:** 011  
**Breve descripción:** Funcionalidad del sistema que nos permite guardar los datos en un fichero binario.  


**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.  


**Precondiciones:**  

1. Deben existir alumnos registrados en la base de datos.  


**Flujo principal:**  

1. El caso de uso empieza cuando se elige la funcionalidad del sistema "Guardar fichero".
2. La funcionalidad comprueba si hay datos en la agenda.
3. Se le solicita al usuario el nombre del fichero donde se guardarán los datos.
4. Se sobreescribirán los datos en el fichero cuyo nombre es introducido por el usuario.

**Postcondiciones:**

* Se mostrará un mensaje de que el fichero ha sido sobreescrito o creado correctamente y se redirigirá al menú de inicio.


**Flujo alternativo:**

**2.a.** En caso de no existir alumnos en la agenda, se mostrará un mensaje de que la agenda no contiene alumnos, por lo que no se pueden guardar sus datos, y se redirigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  
**3.a.** En caso de que el fichero binario (con el nombre introducido por el usuario) no exista en el sistema, se llevará a cabo la creación de un nuevo fichero con ese nombre y en él se realizará la escritura de datos.
