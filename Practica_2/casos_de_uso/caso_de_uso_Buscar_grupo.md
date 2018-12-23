## Buscar grupo    

**ID:** 014  
**Breve descripción:** Función de la agenda que comprueba internamente la existencia de un grupo mediante su identificador.  

**Actores principales:** Agenda.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. La funcionalidad "Mostrar alumno" y, dentro de ella, la función "Mostrar grupo" deben haber sido seleccionadas anteriormente por el usuario para que la agenda haga uso de esta función.  



**Flujo principal:**  

1. El caso de uso empieza cuando la agenda necesita comprobar la existencia de un grupo.   
2. La agenda devuelve si el grupo existe o no. 


**Postcondiciones:**  

* La agenda, en caso de no haber ocurrido ningún problema, devolverá si el grupo existe o no. Será la funcionalidad que haga uso de esta la que actúe de una forma u otra dependiendo del resultado de la búsqueda.

