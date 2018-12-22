#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <list>
#include "Alumno.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;
const unsigned int NUM = 150;

	struct Datos_usuario{

		char user[60];
		char password[15];
		char tipo[50];

	};
	
	struct Datos_alumno{
	
		char nombre;
		char apellidos;
		char email;
		char direccion;
		char dni;
		char fecha_nacimiento;
		int telefono;
		int curso_mas_alto;
		int grupo;
		bool lider;
	
	};
	
	void verUsuarios();
	void menu_inicio(list <Alumno> &lista);
	void menu_funciones(struct Datos_usuario p, list <Alumno> &lista);
	void crear_coordinador();
	bool check_coordinador(struct Datos_usuario p);
	bool check_user(struct Datos_usuario p);
	bool check_credenciales(struct Datos_usuario p);
	
	void lista_asc_comp(list <Alumno> &lista, Alumno alumno[NUM]);
	void lista_desc_comp(list <Alumno> &lista, Alumno alumno[NUM]);
	void lista_asc_redu(list <Alumno> &lista, Alumno alumno[NUM]);
	void lista_desc_redu(list <Alumno> &lista, Alumno alumno[NUM]);
	
	void lista_markdown_asc_comp(list <Alumno> &lista, Alumno alumno[NUM]);
	void lista_markdown_desc_comp(list <Alumno> &lista, Alumno alumno[NUM]);
	void lista_markdown_asc_redu(list <Alumno> &lista, Alumno alumno[NUM]);
	void lista_markdown_desc_redu(list <Alumno> &lista, Alumno alumno[NUM]);

#endif
