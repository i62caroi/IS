## Cargar copia de seguridad

**ID:** 012
**Breve descripción:** Funcionalidad del sistema que nos permite cargar una copia de seguridad.


**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.

**Precondiciones:**

1. La copia de seguridad que se va a cargar debe existir.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Cargar copia de seguridad".
2. El usuario introduce el nombre de la copia de seguridad a cargar.
3. El sistema descomprime y carga la copia de seguridad.


**Postcondiciones:**

* El sistema, en caso de no haber ocurrido ningún error, carga la copia de seguridad indicada.


**Flujo alternativo:**

**2.a.** En caso de que la función no encuentre en el sistema una copia de seguridad con el nombre introducido por el usuario, el sistema mostrará un mensaje de error y se cargará de nuevo el menú principal.  
**3.a.** En caso de haber ocurrido algún tipo de fallo en la funcionalidad del sistema, se mostrará un mensaje de error al usuario y se redigirá automáticamente al menú principal del programa donde se muestran las funcionalidades del sistema.  

