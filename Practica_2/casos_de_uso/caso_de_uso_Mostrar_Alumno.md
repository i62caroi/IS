## Mostrar alumno

**ID:** 010
**Breve descripción:** Funcionalidad del sistema que nos permite buscar información sobre un alumno o un grupo.

**Actores principales:** Usuario.
**Actores secundarios:** Alumno/s.

**Precondiciones:**

1. El alumno buscado debe haber sido añadido previamente.
2. En caso de que se busque un grupo, este debe existir; es decir, que haya al menos 1 alumno asignado a ese grupo.  



**Flujo principal:**  

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Mostrar alumno".  
2. El usuario introduce el apellido del alumno que quiere mostrar.
3. El sistema muestra la información de dicho alumno, incluyendo si es líder o no.  


**Postcondiciones:**  

* El sistema, en caso de existir el alumno indicado y de no haber ocurrido ningún problema, mostrará la información del alumno.  


**Flujo alternativo:**  
 
**2.a.** En caso de existir varios alumnos con el mismo apellido, se mostrará la información de todos esos alumnos.  
**2.b.** En caso de querer buscar por DNI, se introducirá el mismo y se mostrará la información del alumno que corresponda.  
**2.c.** En caso de querer buscar un grupo, se introducirá su identificador y se mostrarán los alumnos que pertenezcan al mismo, así como su líder, si es que lo tiene.  
**3.a.** En caso de no existir dicho alumno o grupo en la agenda, se mostrará por pantalla un mensaje de error diciendo que el alumno o grupo en cuestión no existe en la agenda y se redirigirá automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  
