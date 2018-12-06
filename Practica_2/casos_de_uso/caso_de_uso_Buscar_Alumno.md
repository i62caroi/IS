## Buscar alumno  

**ID:** 001  
**Breve descripción:** Función de la agenda que comprueba internamente la existencia de un alumno o grupo.

**Actores principales:** Agenda.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. Alguna de las funcionalidades "Añadir alumno", "Editar alumno", "Eliminar alumno", "Mostrar alumno" o "Listar alumnos" debe haber sido seleccionada anteriormente por el usuario para que la agenda haga uso de esta función.  



**Flujo principal:**  

1. El caso de uso empieza cuando la agenda necesita comprobar la existencia de un alumno o grupo.  
2. Dependiendo de la funcionalidad que el usuario haya escogido, esta función hará uso de un campo de búsqueda u otro.
3. La agenda devuelve si el alumno o grupo existe o no.


**Postcondiciones:**  

* La agenda, en caso de no haber ocurrido ningún problema, devolverá si el alumno o grupo existe o no. Será la otra funcionalidad la que actúe de una forma u otra dependiendo del resultado de la búsqueda.
