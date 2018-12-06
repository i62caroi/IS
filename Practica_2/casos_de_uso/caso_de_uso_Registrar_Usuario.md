## Registrar Usuario

**ID:** 008  
**Breve descripción:** Funcionalidad del sistema que nos permite registrar un nuevo usuario en el sistema dándole unas credenciales.  
  
  
**Actores principales:** Usuario.  
**Actores secundarios:** Ninguno.  
  
**Precondiciones:**  

1. En el fichero binario que contiene las credenciales ya existen unas pertenecientes al único profesor coordinador que puede entrar al sistema. Estas credenciales fueron introducidas manualmente por el administrador.
2. No debe existir un usuario ya registrado con el mismo *nickname* que el introducido por el nuevo usuario.  
  
  
  
**Flujo principal:**  
  
1. El caso de uso empieza cuando el usuario elige la funcionalidad del sistema "Registrar usuario".  
2. El usuario introduce su *nickname* para que el sistema compruebe si ya existe.  
3. Si no existe un usuario con ese *nickname*, el sistema pide una *password* al usuario, aquella con la que iniciará sesión.  
  
  
**Postcondiciones:**  
  
* Una vez haya finalizado sin error alguno todo el proceso de registro, las credenciales del nuevo usuario (automáticamente profesor ayudante) se guardarán en un fichero binario, que ya contiene las credenciales de los demás usuarios (incluido el coordinador), y se redirigirá automáticamente al menú de inicio del programa donde se muestran las demás funcionalidades del sistema, dando por iniciada la sesión del usuario.  


**Flujo alternativo:**

**2.a.** En caso de existir ese *nickname*, el sistema muestra un mensaje diciendo que no lo puede utilizar y pediría uno nuevo.
