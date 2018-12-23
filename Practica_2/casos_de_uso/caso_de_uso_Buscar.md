## Buscar  

**ID:** 001  
**Breve descripción:** Función de la agenda que comprueba internamente la existencia de un alumno o grupo.

**Actores principales:** Agenda.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. Alguna de las funcionalidades "Añadir alumno", "Editar alumno", "Eliminar alumno" o "Mostrar alumno" debe haber sido seleccionada anteriormente por el usuario para que la agenda haga uso de esta función.  



**Flujo principal:**  

1. El caso de uso empieza cuando la agenda necesita comprobar la existencia de un alumno o grupo.  
2. Dependiendo de la funcionalidad que el usuario haya escogido, se hará uso de una función de buscar u otra, según el campo de búsqueda utilizado.  
3. La agenda devuelve si el alumno o grupo existe o no. En el caso de buscar por apellidos, devolverá cuántos alumnos tienen esos apellidos.  


**Postcondiciones:**  

* La agenda, en caso de no haber ocurrido ningún problema, devolverá si el alumno o grupo existe o no, o cuántos alumnos tienen los apellidos buscados. Será la otra funcionalidad la que actúe de una forma u otra dependiendo del resultado de la búsqueda.
