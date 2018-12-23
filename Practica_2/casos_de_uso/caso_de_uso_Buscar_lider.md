## Buscar líder    

**ID:** 015  
**Breve descripción:** Función de la agenda que comprueba internamente si un grupo tiene líder.  

**Actores principales:** Agenda.  
**Actores secundarios:** Alumno/a.  

**Precondiciones:**  

1. Alguna de las funcionalidades "Añadir alumno" o "Editar alumno" debe haber sido seleccionada anteriormente por el usuario para que la agenda haga uso de esta función.  



**Flujo principal:**  

1. El caso de uso empieza cuando la agenda necesita comprobar si un grupo tiene líder o no.   
2. La agenda devuelve si el grupo tiene líder o no. 


**Postcondiciones:**  

* La agenda, en caso de no haber ocurrido ningún problema, devolverá si el grupo tiene líder o no. Será la funcionalidad que haga uso de esta la que actúe de una forma u otra dependiendo del resultado de la búsqueda.

