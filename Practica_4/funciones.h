#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<iostream>
#include<list>
#include<string>
#include "claseALUMNO.h"

struct Datos{

	char user[60];
	char password[15];
	char tipo[50];
};

void anadir_alumno(list<Alumno> &lista);
void menu(string user,string password,string tipo);
void mostrarAlumno(list<Alumno>&lista);
void VerificarCredenciales(struct Datos p);

#endif
