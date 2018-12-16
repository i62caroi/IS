#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include <string>
#include <list>
#include "Alumno.h"
#include "funciones.h"
using namespace std;

class Profesor {

private:
	
	Datos_usuario p;

public:
	void Cargar_fichero(list<Alumno> &listaAlumnos);

	void Guardar_fichero(list<Alumno> &listaAlumnos);

	void Cargar_copia_seguridad(list<Alumno> &listaAlumnos);

	void Crear_copia_seguridad(list<Alumno> &listaAlumnos);

	void Registrar_usuario(struct Datos_usuario p);

	void Iniciar_sesion(struct Datos_usuario p);
};


#endif
