### Mostrar alumno/s

El profesor informa al sistema de que mostrar la información de un alumno o grupo. El sistema comprueba que hay alumnos en la agenda y le da dos opciones al profesor:  
* Mostrar alumno: el sistema le da opción al profesor de buscar por dos campos:
   * Por apellidos: el sistema le pide al profesor que introduzca los apellidos del alumno que desea mostrar. Tras introducir los apellidos, el sistema comprueba si los apellidos se encuentran registrados: 
      - En caso de coincidir solo con un alumno, el sistema muestra por pantalla los datos de dicho alumno. 
      - En caso de existir varios alumnos con los mismos apellidos, el sistema muestra los datos de todos ellos.
      - En caso de no encontrarse los apellidos registrados, el sistema mostrará un mensaje por pantalla informando al profesor de que el alumno no se encuentra registrado en el sistema.
   * Por DNI: el sistema le pide al profesor que introduzca el DNI del alumno que desea mostrar. Tras introducirlo, el sistema comprueba si el DNI se encuentra en el sistema:
      - En caso afirmativo, muestra por pantalla los datos de dicho alumno. 
      - En caso de no encontrar el DNI, el sistema mostrará un mensaje por pantalla informando al profesor de que el alumno no se encuentra registrado en el sistema.
* Mostrar grupo: el sistema le pide al profesor que introduzca el grupo de alumnos que desea mostrar. Tras introducirlo, el sistema comprueba si existe el grupo; es decir, si hay algún alumno cuyo grupo asignado sea el introducido:
   - En caso de que exista, el sistema muestra por pantalla los alumnos que pertenecen a ese grupo y el líder, si es que lo tiene.
   - En caso de no encontrarlo, el sistema mostrará un mensaje por pantalla informando al profesor de que el grupo no existe.

En caso de no haber alumnos en la agenda, el sistema mostrará un mensaje por pantalla indicando que no hay alumnos registrados en el sistema, por lo que no se pueden buscar.
  

### Añadir alumno

El profesor informa al sistema de que va a añadir un alumno. El sistema comprueba si hay espacio en la agenda, en cuyo caso le pide al profesor el DNI del alumno para comprobar, antes de nada, si el alumno ya está registrado en el sistema: 
  - Si no está registrado en el sistema, le pide los datos del nuevo alumno al profesor (nombre, apellidos, email, ... , etc) y los va guardando uno a uno en el registro (agenda). Al introducir el grupo, comprueba si tiene ya líder, en cuyo caso el nuevo alumno será automáticamanete no líder. Si no tiene líder, el nuevo alumno puede, o no, ser líder.  
  - En caso de existir una coincidencia, el sistema informa al profesor mediante un mensaje de que el alumno que desea insertar ya está registrado en la agenda.

En caso de haber ya 150 alumnos registrados, el sistema informa al profesor mediante un mensaje de que la agenda está completa y no se puede añadir ningún alumno más.

  
### Editar alumno

El profesor informa al sistema de que va a modificar los datos de un alumno. El sistema internamente se prepara y cuando está listo le pide al profesor que introduzca los apellidos del alumno cuyos datos desea modificar. Tras introducir los apellidos, el sistema verifica que los apellidos estén el sistema:  
  - En caso afirmativo, el sistema le pide al profesor los nuevos datos del alumno y los va guardando uno a uno en el registro (agenda). Al introducir el grupo, comprueba si tiene ya líder, en cuyo caso el nuevo alumno será automáticamanete no líder. Si no tiene líder, el nuevo alumno puede, o no, ser líder.  
  - En caso de no encontrar los apellidos, el sistema mostrará un mensaje por pantalla diciendo que el alumno no se encuentra registrado en el sistema.  
  - En caso de que coincidan varias personas con los mismos apellidos, el sistema pedirá al profesor el DNI del alumno que desee modificar. Tras introducirlo, el sistema le pedirá al profesor los nuevos datos del alumno y los irá guardando uno a uno en el registro. Al introducir el grupo, comprueba si tiene ya líder, en cuyo caso el nuevo alumno será automáticamanete no líder. Si no tiene líder, el nuevo alumno puede, o no, ser líder.  
  
  
### Cargar fichero

El profesor informa al sistema de que va a cargar un fichero binario. El sistema internamente se prepara y cuando está listo le pide al profesor que introduzca el nombre del fichero que quiere cargar. Tras introducir el nombre, el sistema verifica que el fichero exista:
  - En caso de que exista, el sistema lo abrirá y comprobará su contenido:
  	- Si contiene datos, los cargará en la agenda.
  	- Si, por el contrario, está vacío, el sistema mostrará un mensaje por pantalla diciendo que el fichero está vacío y no lo cargará.  
  - En caso de que el fichero no exista, el sistema mostrará un mensaje por pantalla diciendo que el fichero indicado no existe.  
  

### Eliminar alumno

El profesor informa al sistema de que va a eliminar un alumno. El sistema internamente se prepara y cuando está listo le pide al profesor que introduzca los apellidos del alumno que desea eliminar. Tras introducir los apellidos, el sistema verifica que los apellidos estén en el sistema: 
  - En caso afirmativo, borra al alumno del registro e informa mediante un mensaje por pantalla de que el alumno ha sido eliminado.  
  - En caso de no encontrar los apellidos, el sistema mostrará un mensaje por pantalla diciendo que el alumno no se encuentra registrado en el sistema. 
  - En caso de que coincidan varias personas con los mismos apellidos, el sistema pedirá al profesor el DNI del alumno que desee eliminar. Tras introducirlo, el sistema borrará al alumno del registro y mostrará un mensaje por pantalla informando de que el alumno ha sido eliminado.
  
  
### Listar alumnos

El profesor informa al sistema de que va a listar a los alumnos. El sistema internamente comprueba si hay alumnos en la agenda y, en caso de que haya, le pide al profesor que escoja entre dos opciones:  
* Lista reducida: en esta opción el sistema mostrará la información mínima de cada alumno. El sistema le pide al profesor que escoja un campo mediante el cual ordenar (*Nombre*, *Dni*, *Apellidos* o *Curso_mas_alto*). Un vez escogido el campo, el sistema le pide al profesor que escoja la forma de listar (ascendente o descendente). Finalmente, el sistema mostrará la información mínima de los alumnos, ordenados por el campo escogido y de la forma indicada, a través de la consola y en un fichero markdown.  
* Lista completa: en esta opción el sistema mostrará toda la información de todos los alumnos. El sistema le pide al profesor que escoja un campo mediante el cual ordenar (*Nombre*, *Dni*, *Apellidos* o *Curso_mas_alto*). Un vez escogido el campo, el sistema le pide al profesor que escoja la forma de listar (ascendente o descendente). Finalmente, el sistema mostrará toda la información de los alumnos, ordenados por el campo escogido y de la forma indicada, a través de la consola y en un fichero markdown.  

En caso de no haber alumnos en la agenda, el sistema mostrará un mensaje por pantalla indicando que no hay alumnos para listar.


### Realizar copia de seguridad

El profesor *coordinador* informa al sistema de que va a crear una copia de seguridad. El sistema comprueba internamente si hay datos en la agenda y, en caso afirmativo, le pide al profesor el nombre del fichero donde se realizará la copia de seguridad. Tras introducir el nombre del fichero, el sistema comprueba si existe el fichero indicado:
  - En caso de que exista, el sistema lo sobreescribirá con los datos que tenía guardados en la agenda y lo comprimirá.  
  - En caso de que el fichero no exista, el sistema creará un fichero nuevo con ese nombre, guardará los datos de la agenda en el mismo y lo comprimirá. 
  - En caso de no haber datos en la agenda, el sistema mostrará un mensaje por pantalla indicando que no existen alumnos en el sistema, por lo que no se puede realizar la copia de seguridad.
  
  
### Registrar usuario

El profesor informa al sistema de que quiere registrarse como nuevo usuario. El sistema le pide al profesor que introduzca el nickname que desee tener. Tras introducirlo, el sistema comprueba en el fichero que contiene las credenciales si ya existe un usuario con ese nickname:  
  - En caso de no existir, el sistema le pide al profesor la contraseña y , tras ser introducida, guarda ambas credenciales en un fichero binario que las contiene todas. Cada nuevo usuario será automáticamente *ayudante*, pues el único profesor *coordinador* admitido ya tiene sus credenciales desde el principio, generadas automáticamente al ejecutar el programa.   
  - En caso de que ya exista, el sistema informa al profesor mediante un mensaje de que ese nickname ya existe.  
  
  
### Iniciar sesión

El profesor informa al sistema de que va a iniciar sesión. El sistema se prepara internamente y le pide al profesor el nickname y la contraseña. Tras introducirlos, el sistema comprueba en el fichero que contiene las credenciales si existen:  
  - En caso de que existan, el sistema debe ver si son correctas.  
    - Si son correctas, el sistema inicia sesión, teniendo en cuenta qué tipo de profesor es.    
    - En caso contrario, el sistema informa mediante un mensaje de que las credenciales no son correctas.  
  - En caso de no existir, el sistema informa mediante un mensaje de que ese usuario no está registrado.  
  
  
### Cargar copia de seguridad  

El profesor *coordinador* informa al sistema de que va a cargar una copia de seguridad. El sistema internamente se prepara y cuando está listo le pide al profesor que introduzca el nombre del fichero que la contiene. Tras introducir el nombre, el sistema verifica que el fichero exista:
  - En caso de que exista, el sistema lo descomprimirá, abrirá y comprobará su contenido:
  	- Si contiene datos, los cargará en la agenda.
  	- Si, por el contrario, está vacío, el sistema mostrará un mensaje por pantalla diciendo que el fichero está vacío y no lo cargará.  
  - En caso de que el fichero no exista, el sistema mostrará un mensaje por pantalla diciendo que el fichero indicado no existe. 
  

### Guardar fichero  

El profesor informa al sistema de que va a guardar los datos en un fichero. El sistema comprueba internamente si hay datos en la agenda y, en caso afirmativo, le pide al profesor el nombre del fichero donde se guardarán los datos. Tras introducir el nombre del fichero, el sistema comprueba si existe el fichero indicado:
  - En caso de que exista, el sistema lo sobreescribirá con los datos que tenía guardados en la agenda.  
  - En caso de que el fichero no exista, el sistema creará un fichero nuevo con ese nombre y guardará los datos de la agenda en el mismo.  
  - En caso de no haber datos en la agenda, el sistema mostrará un mensaje por pantalla indicando que no existen alumnos en el sistema.


### Buscar apellidos  

El profesor escoge alguna de las funcionalidades que necesiten realizar una búsqueda interna de apellidos: "Editar alumno", "Eliminar alumno" o "Mostrar alumno/s". La función escogida le pide al profesor los apellidos y el sistema se los pasa a la agenda, encargada de realizar la búsqueda. Finalmente, la agenda devuelve cuántos alumnos tienen esos apellidos.  


### Buscar DNI  

El profesor escoge alguna de las funcionalidades que necesiten realizar una búsqueda interna de DNI: "Añadir alumno", "Editar alumno", "Eliminar alumno" o "Mostrar alumno/s". La función escogida le pide al profesor el DNI del alumno y el sistema se lo pasa a la agenda, encargada de realizar la búsqueda. Finalmente, la agenda devuelve si existe ese DNI; es decir, si existe el alumno o no.


### Buscar grupo  

El profesor escoge "Mostrar alumno/s" y, dentro de ella, escoge "Mostrar grupo". Esta función le pide al profesor el identificador de grupo y el sistema se lo pasa a la agenda, encargada de realizar la búsqueda. Finalmente, la agenda devuelve si existe ese grupo o no.


### Buscar líder  

El profesor escoge alguna de las funcionalidades que necesiten realizar una búsqueda interna de líder: "Añadir alumno" o "Editar alumno". La función escogida le pide al profesor el grupo del que quiere saber si tiene líder y el sistema se lo pasa a la agenda, encargada de realizar la búsqueda. Finalmente, la agenda devuelve si el grupo indicado tiene líder o no.
