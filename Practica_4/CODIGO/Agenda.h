#ifndef AGENDA_H
#define AGENDA_H
#include <list>
#include "Alumno.h"
using namespace std;

class Agenda {

private:

	list<Alumno> listaAlumnos;
	
public:
	void Anadir_alumno(list<Alumno> &listaAlumnos);
	void Editar_alumno(list<Alumno> &listaAlumnos);
	void Eliminar_alumno(list<Alumno> &listaAlumnos);
	void Mostrar_alumno(list<Alumno> &listaAlumnos);
	void Listar_alumnos(list<Alumno> &listaAlumnos);
	bool Buscar_apellidos(char apellidos);
	bool Buscar_dni(char dni);
	bool Buscar_grupo(int grupo);
};

#endif
