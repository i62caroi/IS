## Buscar apellidos  

**ID:** 001  
**Breve descripción:** Función de la agenda que comprueba internamente la existencia de un alumno o la cantidad de ellos que tienen los apellidos indicados.  

**Actores principales:** Agenda.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. Alguna de las funcionalidades "Editar alumno", "Eliminar alumno" o "Mostrar alumno" debe haber sido seleccionada anteriormente por el usuario para que la agenda haga uso de esta función.  



**Flujo principal:**  

1. El caso de uso empieza cuando la agenda necesita comprobar la existencia de un alumno.   
2. La agenda devuelve cuántos alumnos tienen los apellidos buscados. 


**Postcondiciones:**  

* La agenda, en caso de no haber ocurrido ningún problema, devolverá cuántos alumnos tienen los apellidos buscados. Será la funcionalidad que haga uso de esta la que actúe de una forma u otra dependiendo del resultado de la búsqueda.

