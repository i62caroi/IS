#ifndef AGENDA_H
#define AGENDA_H
#include <list>
#include "Alumno.h"
using namespace std;

class Agenda {

private:

	list <Alumno> lista;
	
public:
	void Anadir_alumno(list <Alumno> &lista);
	void Editar_alumno(list <Alumno> &lista);
	void Eliminar_alumno(list <Alumno> &lista);
	void Mostrar_alumno(list <Alumno> &lista);
	void Listar_alumnos(list <Alumno> &lista);
	bool Buscar_apellidos(char apellidos);
	bool Buscar_dni(char dni);
	bool Buscar_grupo(int grupo);
};

#endif
