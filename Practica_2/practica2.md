# Requisitos  

## Funcionales

* Busqueda de usuario por DNI o por apellidos
* Añadir usuario
* Cargar fichero binario
* Edicion de datos de usuario
* Guardar datos en fichero binario
* Inicializar el programa mostrando el menu
* Busqueda en grupo
* Opcion de eliminar un alumno por DNI o por apellido. En el caso de existir dos usuarios con el mismo apellido pedir el DNI
* Realizar copia de seguridad siempre, o cada vez que el usuario quiera, en un fichero binario
* Opcion de imprimir todos los usuarios del sistema ordenados por DNI, nombre o curso más alto matriculado tanto ascendente como descendente

## No funcionales

* La interfaz grafica será la consola de comandos
* Sin autorellenado
* Toda informacion obligatoria salvo el equipo y si es lider o no
* Idioma obligatorio ESPAÑOL
* Máximo 150 alumnos por fichero
* Como máximo un lider por grupo
* Unicamente introducir usuarios cuyo DNI no exista ya dentro del sistema
* Los usuarios se deben mostrar por linea de comandos como minimo y luego, mediante markdown o fichero HTML, poder mostrar un unico alumno o todo un grupo  

**Prioridad de los requisitos**

1. Inicializar la app mostrando el menu
2. Añadir usuario
3. Guardar datos en fichero binario
4. Cargar fichero binario
5. Eliminar alumno por DNI o por apellidos
6. Edicion de datos de usuario
7. Busqueda de usuario por DNI o apellidos
8. Busqueda en grupo

**Datos que almacena la aplicacion**  

* Nombre
* Apellidos
* DNI
* Fecha de nacimiento
* Teléfono
* Dirección
* Email de la universidad
* Curso más alto matriculado
* Equipo al que pertenece
* La persona es lider o no
