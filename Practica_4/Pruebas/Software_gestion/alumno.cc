#include<iostream>
#include<string.h>
#include"alumno.h"
using namespace std;

void alumno::setNombre(char *nombre){

	strcpy(nombre_,nombre);

}

void alumno::setApellidos(char *apellidos){

	strcpy(apellidos_,apellidos);

}

void alumno::setDireccion(char *direccion){

	strcpy(direccion_,direccion);

}

void alumno::setDni(char *dni){

	strcpy(dni_,dni);

}

void alumno::setEmail(char *email){

	strcpy(email_,email);

}
void alumno::setFecha(char *fecha){

	strcpy(fecha_,fecha);

}
void alumno::setTelefono(int telefono){

	telefono_=telefono;

}
void alumno::setCurso(int curso){

	curso_=curso;

}
void alumno::setGrupo(int grupo){

	grupo_=grupo;

}
void alumno::setLider(char *lider){

	strcpy(lider_,lider);

}
