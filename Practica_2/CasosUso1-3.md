## Mostrar Menú

**ID:** 001   
**Breve descripción:** El sistema muestra al usuario las diversas funcionalidades del sistema.


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a. (Aqui no estoy seguro si es necesario actor secundario alumno)

**Precondiciones:**

1. El sistema y todas sus funcionalidades deben funcionar correctamente.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario inicia el sistema, ya que en el momento que el sistema está inicializado, la primera función que se ejecuta es mostrar el menú con las funcionalidades del sistema.
2. El sistema recoge por teclado la funcion que ha elegido el usuario y la ejecuta (siempre y cuando dicha funcion se encuentre en el sistema).


**Postcondiciones:**

1. El sistema muestra por pantalla un menú con todas las funcionalidades del sistema.


**Flujo alternativo:**    

2.a. En caso de no existir en el sistema la funcionalidad que el usuario ha introducido por teclado, se mostrará un mensaje de error por pantalla y se volverá a mostrar el menú.




*********************************************************************************************************************************************************************************************************************************


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




*********************************************************************************************************************************************************************************************************************************


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

2.b. En caso haber algun tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menu inicio del programa donde se estará mostrando las funcionalidades del sistema.
2.a. En caso de tener lugar un error más concreto, como por ejemplo problemas en la introducción del nombre del fichero, en lugar de redireccionar al menú del sistema, se pedirá de nuevo al usuario que rellene el campo.  
