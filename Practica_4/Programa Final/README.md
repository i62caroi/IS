
### Prácticas de Ingeniería del Software: ENTREGA FINAL
- **Grupo:** 24  
- **Participantes:**  
  * Antonio Bogallo Fernández
  * Irene Casares Rodríguez (líder)
  * José Domínguez García
  
En esta carpeta encontrará todos los ficheros que ha de compilar, de la siguiente forma, para obtener el ejecutable de nuestro programa:

~~~
g++ Agenda.cc Alumno.cc Profesor.cc funciones.cc main.cc -o <nombre_ejecutable>
~~~

Una vez ejecute el programa, se creará un fichero binario llamado *credenciales.bin* donde se guardarán automáticamente las credenciales del coordinador (user: *super*; password: *12345*). Es en este fichero donde se irán guardando las credenciales de los nuevos usuarios que se vayan registrando.

En el menú principal se muestran todas las funcionalidades del programa, incluidas las referentes al trabajo con las copias de seguridad. El menú es el mismo para los dos tipos de profesores, pero si los ayudantes intentan acceder a las funciones de las copias de seguridad, no se les permitirá pues no tienen permiso para ello.
