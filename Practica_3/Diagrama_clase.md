## Explicacion del diagrama de clase

En este diagrama de clase tenemos los siguientes objetos:
* Clase Persona
* Clase Alumno
* Clase Profesor

Cada uno con sus variables y metodos propios, que se explicarán a continuación:

### Clase Persona

**La clase persona tiene las siguientes variables:**

* Nombre: Almacenará el nombre de la persona
* Apellidos : Almacenará los apellidos de la persona.
* Email: Contendrá el email de la persona.

**Metodos de la clase persona:**

* getNombre() : Para que podamos obtener el valor de la variable Nombre.
* setNombre() : Para que podamos modificar el valor de la variable Nombre.
* getApellidos() : Para que podamo obtener el valor de la variable Apellidos.
* setApellidos() : Para que podamos modificar el valor de la variable Apellidos.
* getEmail() : Para que podamos obtener el valor de la variable Email.
* setEmail() : Para poder modificar el valor de la variable Email.

**Comentarios:**
Hemos decidido crear una clase de tipo persona para que luego la clase alumno y profesor puedan heredarla ya que ambas clases (alumno y profesor) comparten las variables de nombre, apellidos y email por lo que asi no repetimos variables en el codigo, sino que las "reutilizamos".

### Clase Alumno

**La clase alumno tiene las siguientes variables:**

* Direccion : Almacenará la direccion del alumno.
* Dni : Almacenará el dni del alumno.
* Curso más alto : Almacenará el curso más alto en el que está matriculado el alumno.
* Fecha nacimiento : Almacenará la fecha de nacimiento del alumno (dia/mes/año).
* Telefono : Almacenará el telefono del alumno.
* Grupo : Almacenará el grupo en el que se encuentra el alumno.
* Lider : Almacenará si el alumno en concreto es lider o no.

Ademas de las heredadas por la clase persona (nombre,apellidos,email)

**Metodos de la clase Alumno**

* getDireccion() : metodo para poder obtener el valor de la variable direccion.
* setDireccion() : metodo para poder cambiar el valor de la variable Direccion. Se le debe pasar un parametro de tipo string.
* getDni() : metodo para poder obtener el valor de la variable Dni.
* setDni() : metodo para poder cambiar el valor de la variable Dni. Se le debe pasar un parametro de tipo string.
* getCurso() : metodo para poder obtener el valor de la variable Curso_mas_alto.
* setCurso() : metodo para poder modificar el valor de la variable Curso_mas_alto. se le debe pasar un paramentro de tipo entero.
* getFechanacimiento() : metodo para poder obtener el valor de la variable Fecha_nacimiento.
* setFechanacimiento() : metodo para poder modificar el valor de la variable Fecha_nacimiento. Se le debe pasar un paramentro de tipo string.
* getTelefono() : metodo para poder obtener el valor de la variable Telefono.
* setTelefono() : metodo para poder modificar el valor de la variable Telefono. se debe pasar un parametro de tipo entero.
* getGrupo() : metodo para poder obtener el valor de la variable Grupo
* setGrupo() : metodo para poder modificar la variable Grupo. Se le debe pasar un parametro de tipo entero.
* getLider() : metodo para poder obtener el valor de la variable Lider.
* setLider () : metodo para poder modificar el valor de la variable Lider.

**Comentarios:**
La clase alumno hereda los metodos y variables de la clase persona, de este metodo podemos tener acceso a todas las varibles necesarias, por otro lado, como podemos observar los metodos no son más que una manera de poder acceder o modificar a las variables de la clase alumno debido a que no podriamos acceder directamente a ellas por estar en la parte privada (encapsulamiento)

### Clase Profesor

**La clase profesor tiene las siguientes variables:**

* tipo : variable que contedrá si el profesor es ayudante o gestor.

Ademas de las heredadas por la clase persona (nombre,apellidos,email)

**Métodos de la clase Profesor:**

* Cargar_fichero() : metodo que permite cargar en el sistema un fichero binario con el registro de alumnos en su interior.
* Guardar_fichero() : metodo para guardar el registro de alumno existente en el sistema, en un fichero binario.
* Cargar_copia_seguridad() : metodo para cargar una copia de seguridad en el sistema. Se le debe pasar la variable "tipo" debido a que solo los profesores de tipo gestores pueden cargar copias de seguridad.
* Guardar_copia_seguridad() : metodo para realizar una copia de seguridad del sistema. Se le debe pasar la variable "tipo" debido a que solo los profesores de tipo gestores pueden realizar la copia de seguridad.

**Comentarios:**
La clase Profesor tambien hereda las varibles y los metodos de la clase persona por el mismo motivo que lo hace tambien la clase alumno.


### Clase Agenda

**La clase Agenda tiene las sigueintes variables:**

* Lista_alumno : que contendrá la lista de todos los alumnos en el registro.

**Metodos de la clase Agenda:**

* Añadir_alumno() : metodo para añadir un alumno al sistema.
* Guardar_datos() : metodo para guardar los datos. 
* Eliminar_alumno() : metodo para eliminar un alumno.
* Editar_alumno() : metodo para modoficar los datos de un alumno.
* Buscar_alumno() : metodo para buscar un alumno en el sistema.
* Buscas_grupo() : metodo para buscar un grupo de alumnos
* Listar_alumnos() : metodo para mostrar por pantalla la lista de los alumno registrados

**Comentarios:**
Aqui tenemos las funciones que podrá pedir el profesor al sistema para gestionar los alumnos.


