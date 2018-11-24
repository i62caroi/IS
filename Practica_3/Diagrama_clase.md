## Explicación del diagrama de clases

En este diagrama de clase tenemos los siguientes objetos:
* Clase Persona
* Clase Alumno
* Clase Profesor
* Clase Agenda

Cada uno con sus variables y métodos propios, que se explicarán a continuación:

### Clase Persona

**La clase persona tiene las siguientes variables:**

* Nombre: Almacenará el nombre de la persona.
* Apellidos : Almacenará los apellidos de la persona.
* email: Contendrá el email de la persona.

**Métodos de la clase persona:**

* getNombre() : Para que podamos obtener el valor de la variable *Nombre*.
* setNombre() : Para que podamos modificar el valor de la variable *Nombre*.
* getApellidos() : Para que podamos obtener el valor de la variable *Apellidos*.
* setApellidos() : Para que podamos modificar el valor de la variable *Apellidos*.
* getEmail() : Para que podamos obtener el valor de la variable *email*.
* setEmail() : Para poder modificar el valor de la variable *email*.

**Comentarios:**
Hemos decidido crear una clase de tipo persona para que luego la clase alumno y profesor puedan heredar de ella ya que ambas clases (alumno y profesor) comparten las variables de nombre, apellidos y email, por lo que no repetiríamos variables en el código, sino que las "reutilizamos".

### Clase Alumno

**La clase alumno tiene las siguientes variables:**

* Direccion : Almacenará la dirección del alumno.
* Dni : Almacenará el DNI del alumno.
* Curso_mas_alto : Almacenará el curso más alto en el que está matriculado el alumno.
* Fecha_nacimiento : Almacenará la fecha de nacimiento del alumno (dia/mes/año).
* Telefono : Almacenará el teléfono del alumno.
* Grupo : Almacenará el grupo en el que se encuentra el alumno.
* Lider : Almacenará si el alumno es líder o no.

Además de las variables heredadas de la clase persona (*Nombre*, *Apellidos*, *email*).

**Métodos de la clase Alumno**

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
La clase Alumno hereda los métodos y variables de la clase Persona, de este modo podemos tener acceso a todas las variables necesarias. Por otro lado, como podemos observar, los métodos no son más que una manera de acceder o modificar las variables de la clase Alumno debido a que no podemos acceder directamente a ellas por estar en la parte privada (encapsulamiento).

### Clase Profesor

**La clase profesor tiene las siguientes variables:**

* Tipo : variable que contendrá si el profesor es coordinador o ayudante.

Además de las variables heredadas de la clase persona (*Nombre*, *Apellidos*, *email*).

**Métodos de la clase Profesor:**

* Cargar_fichero() : método que permite cargar en el sistema un fichero binario con el registro de alumnos en su interior.
* Guardar_fichero() : étodo para guardar el registro de alumnos existente en el sistema, en un fichero binario.
* Cargar_copia_seguridad() : método para cargar una copia de seguridad en el sistema. Se le debe pasar la variable *tipo* debido a que solo los profesores de tipo *<coordinador>* pueden cargar copias de seguridad.
* Guardar_copia_seguridad() : método para realizar una copia de seguridad del sistema. Se le debe pasar la variable *tipo* debido a que solo los profesores de tipo *<coordinador>* pueden realizar la copia de seguridad.

**Comentarios:**
La clase Profesor también hereda las varibles y los métodos de la clase Persona por el mismo motivo que lo hace también la clase Alumno.


### Clase Agenda

**La clase Agenda tiene las siguientes variables:**

* Lista_alumno : que contendrá la lista de todos los alumnos en el registro.

**Metodos de la clase Agenda:**

* Anadir_alumno() : método para añadir un alumno al sistema.
* Guardar_datos() : método para guardar los datos. 
* Eliminar_alumno() : método para eliminar un alumno.
* Editar_alumno() : método para modificar los datos de un alumno.
* Buscar_alumno() : método para buscar un alumno en el sistema.
* Listar_alumnos() : método para mostrar por pantalla la lista de los alumnos registrados.

**Comentarios:**
Aquí tenemos las funciones que podrá pedir el profesor al sistema para gestionar los alumnos.


