## Mostrar Menú

**ID:** 001   
**Breve descripción:** El sistema muestra al usuario las diversas funcionalidades del sistema.


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a.

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

1. Una vez haya finalizado sin error alguno todo el proceso de introdución de datos por parte del usuario, se mostrará un mensaje por pantalla para verificar que el alumno ha sido introducido correctamente


**Flujo alternativo:**    

2.a. En caso haber algun tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menu inicio del programa donde se estará mostrando las funcionalidades del sistema.



*********************************************************************************************************************************************************************************************************************************


## Guardar Datos

**ID:** 003   
**Breve descripción:** Funcionalidad del sistema que nos permite guardar todos los datos introducidos.


**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a. (Creo que en este caso no hay actores secundarios, segun creo solo seria el usuario el actor)

**Precondiciones:**

1. Anteriormente al uso de la función guardar datos, debe haber datos introcidos en el sistema, es decir, alumnos introducimos en el sistema, bien introducidos a mano o habiendo cargado un fichero anteriormente.



**Flujo principal:**

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Añadir alumno".
2. El sistema va mostrando uno a uno los campos de dicho nuevo alumno a rellenar por el usuario, y va recogiendo los datos introducidos por teclado por el usuario y los va almacenando en cada uno de dichos campos del alumno.


**Postcondiciones:**

1. Una vez haya finalizado sin error alguno todo el proceso de introdución de datos por parte del usuario, se mostrará un mensaje por pantalla para verificar que el alumno ha sido introducido correctamente


**Flujo alternativo:**    

2.a. En caso haber algun tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redigiría automáticamente al menu inicio del programa donde se estará mostrando las funcionalidades del sistema.