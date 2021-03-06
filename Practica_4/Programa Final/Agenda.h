#ifndef AGENDA_H
#define AGENDA_H
#include <list>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "Alumno.h"
using namespace std;

class Agenda {
	
public:
	void Anadir_alumno(list <Alumno> &lista); 
	void Editar_alumno(list <Alumno> &lista);
	void Eliminar_alumno(list <Alumno> &lista);
	void Mostrar_alumno(list <Alumno> &lista); 
	void Listar_alumnos(list <Alumno> &lista); 
	int Buscar_apellidos(list <Alumno> lista, const char *apellidos); 
	bool Buscar_dni(list <Alumno> lista, const char *dni); 
	bool Buscar_grupo(list <Alumno> lista, int grupo); 
	bool Buscar_lider(list <Alumno> lista, int grupo); 
};

#endif
