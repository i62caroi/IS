## Realizar copia de seguridad

**ID:010**
**Breve descripción: El sistema guarda todos los datos registrados en un fichero binario**

**Actores principales: Usuario**
**Actores secundarios: Ninguno**

**ID:** 010    
**Breve descripción:** El sistema guarda todos los datos registrados en un fichero binario

**Actores principales:** Usuario    
**Actores secundarios:** Ninguno

**Precondiciones:**

1. Se debe poder seleccionar la funcionalidad "realizar copia de seguridad"
2. Deben existir alumnos registrados en la base de datos

**Flujo principal:**

1. El caso de uso empieza con la seleccion de la funcionalidad en el menú
2. Se crea un fichero binario con toda la información guardada en la base de datos (datos de los alumnos)

**Flujo alternatio:**

2.a En caso de no existir alumnos en la base de datos se mostrará un mensaje por pantalla indicando la situación al usuario
