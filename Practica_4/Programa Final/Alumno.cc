#include <iostream>
#include <string.h>
#include "Alumno.h"
using namespace std;

void Alumno::setNombre(char *nombre){

	strcpy(nombre_,nombre);

}

void Alumno::setApellidos(char *apellidos){

	strcpy(apellidos_,apellidos);

}

void Alumno::setDireccion(char *direccion){

	strcpy(direccion_,direccion);

}

void Alumno::setDni(char *dni){

	strcpy(dni_,dni);

}

void Alumno::setEmail(char *email){

	strcpy(email_,email);

}
void Alumno::setFecha_nacimiento(char *fecha){

	strcpy(fecha_,fecha);

}
void Alumno::setTelefono(int telefono){

	telefono_=telefono;

}
void Alumno::setCurso_mas_alto(int curso){

	curso_=curso;

}
void Alumno::setGrupo(int grupo){

	grupo_=grupo;

}
void Alumno::setLider(char *lider){

	strcpy(lider_,lider);

}
