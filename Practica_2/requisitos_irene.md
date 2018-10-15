
# Partes interesadas  
Las partes que intervienen son los profesores (usuario del sistema) y los alumnos, de quienes será la mayoría de la información tratada.  

# Datos que almacena la aplicación  
### Profesor:  
  * usuario  
  * contraseña  

### Alumno:  
  * Nombre  
  * Apellidos  
  * DNI  
  * Fecha nacimiento  
  * Teléfono  
  * email  
  * Dirección  
  * Curso más alto en el que está matriculado  
  * Grupo  
  * Si es líder o no  

# Requisitos  

## Funcionales:  
* Gestionar el registro de los alumnos.  
* Gestionar la modificación de datos de los alumnos.  
* Gestionar el borrado de alumnos.  
* Gestionar la búsqueda de alumnos.  
* Gestionar la búsqueda de grupos.  
* Listar los alumnos.  
	
	
## No funcionales:  
* Al iniciar la aplicación se mostrará un menú con las posibles acciones.  
* Se tiene como interfaz obligatoria a la línea de comandos.  
* La información se introducirá, como mínimo, por línea de comandos. Opcionalmente, mediante lenguaje markdown o html.  
* Software lo más sencillo posible.  
* La aplicación debe mostrarse, como mínimo, en español.  
* La aplicación acepta un máximo de 150 alumnos.  
* Un grupo puede no tener líder o solo 1.  
* Toda la información del alumno, excepto su grupo y si es líder o no, es obligatoria en su registro.  
* Debe permitir introducir usuarios mientras no haya dos con el mismo DNI y/o el mismo email.  
* El borrado de alumnos se realizará por apellido. Si hay dos alumnos con el mismo apellido, se pedirá el DNI del alumno que se quiera borrar.  
* El alumno se podrá buscar por DNI, apellido o grupo.  
* Al buscar un alumno por apellido, si hay dos alumnos con ese apellido, se muestran los dos.  
* Al buscar un alumno se indica si es líder o no.  
* Al buscar un grupo se muestran los alumnos que pertenecen a ese grupo y el líder.  
* Deberá guardar o cargar, según quiera el ususario, una copia de seguridad de la base de datos en un fichero binario.  
* Los alumnos se pueden listar de forma ascendente o descendente por nombre, DNI, apellido o curso más alto en el que esté matriculado.  
* Al listar los alumnos se puede mostrar toda su información o una lista reducida.  
	
# Priorización de requisitos  
**1.** Añadir usuario.  
**2.** Guardar datos en fichero binario.  
**3.** Cargar fichero binario.  
**4.** Buscar alumno por DNI o por apellidos.  
**5.** Editar datos de usuario.  
**6.** Eliminar usuario por DNI o apellido.  
**7.** Buscar grupo.  

