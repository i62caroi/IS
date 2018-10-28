## Guardar Datos

**ID:** 003   
**Breve descripción:** Funcionalidad del sistema que nos permite guardar todos los datos introducidos.


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a. (Creo que en este caso no hay actores secundarios, segun creo solo seria el usuario el actor)

**Precondiciones:**

1. Anteriormente al uso de la función guardar datos, debe haber datos introducidos en el sistema, es decir, alumnos introducimos en el sistema, habiendo sido introducidos a mano o habiendo cargado un fichero anteriormente.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario selecciona la funcionalidad del sistema "Guardar Datos".
2. El sistema realiza el guardado de los datos del sistema en un fichero binario. Para poder identificar dicho fichero entre otras cosas para cargarlo en el sistema a través de otra funcionalidad que explicaremos posteriormente, el sistema pedirá al usuario que rellene un campo el cuál será el nombre de dicho fichero.


**Postcondiciones:**

1. Una vez introducido correctamente el nombre y se realice el guardado de datos en el fichero, si todo se ha realizado correctamente, se mostrará un mensaje para que el usuario conozca que todo el proceso se ha llevado a cabo sin error alguno.


**Flujo alternativo:** 

2.a. En caso haber algun tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menu inicio del programa donde se estará mostrando las funcionalidades del sistema.  
2.b. En caso de tener lugar un error más concreto, como por ejemplo problemas en la introducción del nombre del fichero, en lugar de redireccionar al menú del sistema, se pedirá de nuevo al usuario que rellene el campo.  