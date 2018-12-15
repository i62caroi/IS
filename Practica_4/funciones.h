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

struct Datos_alumno{

	char nombre[20];
	char apellidos[30];
	char email[30];
	char direccion[25];
	char dni[10];
	char fecha_nacimiento[10];
	int telefono;
	int curso;
	int grupo;
	bool lider;
};

void anadir_alumno(list<Alumno>&lista);
void menu(string user,string password,string tipo);
void mostrarAlumno(list<Alumno>&lista);
void VerificarCredenciales(struct Datos p);
void cargar_Fichero(list<Alumno>&lista);
void guardar_Fichero(list<Alumno>&lista);
void Listar_alumnos(list<Alumno>&lista);

#endif
