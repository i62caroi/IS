## Explicación del diagrama de clases

En este diagrama de clase tenemos los siguientes objetos:
* Clase Alumno  
* Clase Profesor  
* Clase FicheroCredenciales  
* Clase Agenda  

Cada uno con sus variables y métodos propios, que se explicarán a continuación:

### Clase Alumno

**La clase alumno tiene las siguientes variables:**
 
* Nombre : Almacenará el nombre del alumno.  
* Apellidos : Almacenará los apellidos del alumno.  
* email: Contendrá el email del alumno.  
* Direccion : Almacenará la dirección del alumno.  
* Dni : Almacenará el DNI del alumno.  
* Curso_mas_alto : Almacenará el curso más alto en el que está matriculado el alumno.  
* Fecha_nacimiento : Almacenará la fecha de nacimiento del alumno (dia/mes/año).  
* Telefono : Almacenará el teléfono del alumno.  
* Grupo : Almacenará el grupo en el que se encuentra el alumno.  
* Lider : Almacenará si el alumno es líder o no.  


**Métodos de la clase Alumno:**

* getNombre() : Para que podamos obtener el valor de la variable *Nombre*.  
* setNombre() : Para que podamos modificar el valor de la variable *Nombre*.  
* getApellidos() : Para que podamos obtener el valor de la variable *Apellidos*.  
* setApellidos() : Para que podamos modificar el valor de la variable *Apellidos*.  
* getEmail() : Para que podamos obtener el valor de la variable *email*.  
* setEmail() : Para poder modificar el valor de la variable *email*.  
* getDireccion() : método para poder obtener el valor de la variable *Direccion*.  
* setDireccion() : método para poder cambiar el valor de la variable *Direccion*. Se le debe pasar un parámetro de tipo string.  
* getDni() : método para poder obtener el valor de la variable *Dni*.  
* setDni() : método para poder cambiar el valor de la variable *Dni*. Se le debe pasar un parámetro de tipo string.  
* getCurso() : método para poder obtener el valor de la variable *Curso_mas_alto*.  
* setCurso() : método para poder modificar el valor de la variable *Curso_mas_alto*. Se le debe pasar un parámetro de tipo entero.  
* getFechanacimiento() : método para poder obtener el valor de la variable *Fecha_nacimiento*.  
* setFechanacimiento() : método para poder modificar el valor de la variable *Fecha_nacimiento*. Se le debe pasar un parámetro de tipo string.  
* getTelefono() : método para poder obtener el valor de la variable *Telefono*.  
* setTelefono() : método para poder modificar el valor de la variable *Telefono*. Se le debe pasar un parámetro de tipo entero.  
* getGrupo() : método para poder obtener el valor de la variable *Grupo*.  
* setGrupo() : método para poder modificar la variable *Grupo*. Se le debe pasar un parámetro de tipo entero.  
* getLider() : método para poder obtener el valor de la variable *Lider*.  
* setLider () : método para poder modificar el valor de la variable *Lider*.  

**Comentarios:**  
Como podemos observar, los métodos no son más que una manera de acceder o modificar las variables de la clase Alumno debido a que no podemos acceder directamente a ellas por estar en la parte privada (encapsulamiento).

### Clase Profesor

**La clase profesor tiene la siguiente variable:**

* puntero_agenda : Un puntero a la agenda que contiene los datos de los alumnos.  


**Métodos de la clase Profesor:**

* Cargar_fichero() : método que permite cargar en el sistema un fichero binario con el registro de alumnos en su interior.
* Guardar_fichero() : método que permite guardar en un fichero binario el registro de alumnos que contiene la agenda.  
* Cargar_copia_de_seguridad() : método que permite cargar en el sistema una copia de seguridad. Se le debe pasar la variable *tipo* debido a que solo los profesores de tipo *<coordinador>* pueden cargar la copia de seguridad.  
* Guardar_copia_seguridad() : método para realizar una copia de seguridad del sistema. Se le debe pasar la variable *tipo* debido a que solo los profesores de tipo *<coordinador>* pueden realizar la copia de seguridad.
* Registrar_usuario() : método para registrar a un nuevo usuario en el sistema.
* Iniciar_sesion() : método para iniciar sesión en el sistema.

### Clase FicheroCredenciales

**La clase FicheroCredenciales tiene las siguientes variables:**

* nickname : contiene el nombre de usuario de cada profesor.  
* password : contiene la contraseña de cada usuario.  
* tipo : contiene el tipo de profesor que es cada usuario.  

**Comentarios:**  
Se han introducido en el sistema unas credenciales de los profesores para distinguir entre profesor *<coordinador>* y *<ayudante>*, ya que el sistema tiene ligadas sus credenciales al tipo correspondiente, permitiendo así solo al coordinador, introducido manualmente por el administrador, realizar o cargar las copias de seguridad. 


### Clase Agenda

**La clase Agenda tiene la siguiente variable:**

* Lista_alumno : que contendrá la lista de todos los alumnos en el registro.

**Métodos de la clase Agenda:**

* Anadir_alumno() : método para añadir un alumno al sistema. 
* Editar_alumno() : método para modificar los datos de un alumno.   
* Eliminar_alumno() : método para eliminar un alumno.
* Mostrar_alumno() : método para mostrar la información de un alumno o grupo del sistema. 
* Listar_alumnos() : método para mostrar por pantalla la lista de los alumnos registrados.  
* Buscar : método llamado a partir de alguno de los anteriores, excepto listar, para buscar internamente en el sistema, ya sea por DNI, apellido o grupo, si el alumno o grupo existe o no.

**Comentarios:**  
Aquí tenemos las funciones que podrá pedir el profesor al sistema para gestionar los alumnos.


