## Cargar fichero

**ID:** 005  
**Breve descripción:** Funcionalidad del sistema que nos permite cargar un fichero vacío o con datos.  


**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.  

**Precondiciones:**  

1. El fichero que se va a cargar debe existir. 



**Flujo principial:**  

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Cargar fichero".  
2. El usuario introduce el nombre del fichero de datos a cargar.  
3. El sistema carga el fichero.  


**Postcondiciones:**  

1. El sistema, en caso de no haber ocurrido ningún error, carga el fichero indicado.  


**Flujo alternativo:**  

**3.a.** En caso de haber ocurrido algún tipo de fallo en la funcionalidad del sistema, se mostraría un mensaje de error al usuario y se redirigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.
