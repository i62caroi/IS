## Explicación del diagrama de clases

En este diagrama de clase tenemos los siguientes objetos:
* Clase Alumno  
* Clase Profesor  
* Clase Agenda  

Cada uno con sus variables y métodos propios, que se explicarán a continuación:

### Clase Alumno

**La clase alumno tiene las siguientes variables:**
 
* nombre_ : Almacenará el nombre del alumno.  
* apellidos_ : Almacenará los apellidos del alumno.  
* email_: Contendrá el email del alumno.  
* direccion_ : Almacenará la dirección del alumno.  
* dni_ : Almacenará el DNI del alumno.  
* curso_ : Almacenará el curso más alto en el que está matriculado el alumno.  
* fecha_ : Almacenará la fecha de nacimiento del alumno (DD-MM-AA).  
* telefono_ : Almacenará el teléfono del alumno.  
* grupo_ : Almacenará el grupo en el que se encuentra el alumno.  
* lider_ : Almacenará si el alumno es líder o no.  


**Métodos de la clase Alumno:**

* getNombre() : Para que podamos obtener el valor de la variable *nombre_*.  
* setNombre() : Para que podamos modificar el valor de la variable *nombre_*. Se le debe pasar un parámetro de tipo char*.  
* getApellidos() : Para que podamos obtener el valor de la variable *apellidos_*.  
* setApellidos() : Para que podamos modificar el valor de la variable *apellidos_*. Se le debe pasar un parámetro de tipo char*.   
* getEmail() : Para que podamos obtener el valor de la variable *email_*.  
* setEmail() : Para poder modificar el valor de la variable *email_*. Se le debe pasar un parámetro de tipo char*.  
* getDireccion() : método para poder obtener el valor de la variable *direccion_*.  
* setDireccion() : método para poder cambiar el valor de la variable *direccion_*. Se le debe pasar un parámetro de tipo char*.  
* getDni() : método para poder obtener el valor de la variable *dni_*.  
* setDni() : método para poder cambiar el valor de la variable *dni_*. Se le debe pasar un parámetro de tipo char*.  
* getCurso() : método para poder obtener el valor de la variable *curso_*.  
* setCurso() : método para poder modificar el valor de la variable *curso_*. Se le debe pasar un parámetro de tipo entero.  
* getFechanacimiento() : método para poder obtener el valor de la variable *fecha_*.  
* setFechanacimiento() : método para poder modificar el valor de la variable *fecha_*. Se le debe pasar un parámetro de tipo char*.    
* getTelefono() : método para poder obtener el valor de la variable *telefono_*.  
* setTelefono() : método para poder modificar el valor de la variable *telefono_*. Se le debe pasar un parámetro de tipo entero.  
* getGrupo() : método para poder obtener el valor de la variable *grupo_*.  
* setGrupo() : método para poder modificar la variable *grupo_*. Se le debe pasar un parámetro de tipo entero.  
* getLider() : método para poder obtener el valor de la variable *lider_*.  
* setLider () : método para poder modificar el valor de la variable *lider_*. Se le debe pasar un parámetro de tipo char*.  

**Comentarios:**  
Como podemos observar, los métodos no son más que una manera de acceder o modificar las variables de la clase Alumno debido a que no podemos acceder directamente a ellas por estar en la parte privada (encapsulamiento).

### Clase Profesor

**La clase profesor tiene los siguientes métodos:**

* Cargar_fichero() : método que permite cargar en el sistema un fichero binario con el registro de alumnos en su interior. Se le debe pasar la lista de alumnos.  
* Guardar_fichero() : método que permite guardar en un fichero binario el registro de alumnos que contiene la agenda. Se le debe pasar la lista de alumnos.  
* Cargar_copia_seguridad() : método que permite cargar en el sistema una copia de seguridad. Se le debe pasar la lista de alumnos.  
* Crear_copia_seguridad() : método para realizar una copia de seguridad del sistema. Se le debe pasar la lista de alumnos.  
* Registrar_usuario() : método para registrar a un nuevo usuario en el sistema. Se le debe pasar un parámetro tipo struct Datos_usuario para guardar los datos.  
* Iniciar_sesion() : método para iniciar sesión en el sistema. Se le debe pasar un parámetro tipo struct Datos_usuario para guardar los datos, así como la lista de alumnos.  
  
### Clase Agenda

**La clase Agenda tiene los siguientes métodos:**

* Anadir_alumno() : método para añadir un alumno al sistema. Se le debe pasar la lista de alumnos.   
* Editar_alumno() : método para modificar los datos de un alumno. Se le debe pasar la lista de alumnos.    
* Eliminar_alumno() : método para eliminar un alumno.Se le debe pasar la lista de alumnos.  
* Mostrar_alumno() : método para mostrar la información de un alumno o grupo del sistema. Se le debe pasar la lista de alumnos.  
* Listar_alumnos() : método para mostrar por pantalla la lista de los alumnos registrados.  Se le debe pasar la lista de alumnos.  
* Buscar_apellidos : método llamado a partir de Mostrar, Editar o Eliminar para buscar internamente en el sistema la cantidad de alumnos que tienen los apellidos que se le deben pasar a esta función.  
* Buscar_dni() : método llamado a partir de Añadir, Mostrar, Editar o Eliminar para buscar internamente en el sistema si existe un alumno o no. Se le debe pasar el DNI del alumno.  
* Buscar_grupo() : método llamado a partir de Mostrar para buscar internamente en el sistema si existe el grupo que se le debe pasar como argumento.  
* Buscar_lider() : método llamado a partir de Añadir o Editar para buscar internamente en el sistema si el grupo que se le debe pasar como argumento tiene líder o no.        



