## Buscar alumno  

**ID:** 004  
**Breve descripción:** Funcionalidad del sistema que nos permite buscar información sobre un alumno.  

**Actores principales:** Usuario.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. El sistema y todas sus funcionalidades deben funcionar correctamente.  
2. El alumno buscado debe haber sido añadido previamente.  



**Flujo principal:**  

1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Buscar alumno".  
2. El usuario introduce el DNI o el apellido del alumno que quiere buscar.  
3. El sistema muestra la información de dicho alumno.  


**Postcondiciones:**  

1. El sistema, en caso de existir el alumno indicado y de no haber ocurrido ningún problema, mostrará la información del alumno.  


**Flujo alternativo:**  

**2.a.** En caso de querer buscar los alumnos pertenecientes a un grupo, el usuario introducirá el grupo determinado.  
**3.a** En caso de no existir dicho alumno en el sistema, se mostrará por pantalla un mensaje de error diciendo que el alumno en cuestión no existe en el sistema y se redirigiría automáticamente al menú de inicio del programa donde se muestran las funcionalidades del sistema.  
