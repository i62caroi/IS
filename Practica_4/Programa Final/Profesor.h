#ifndef PROFESOR_H
#define PROFESOR_H
#include "funciones.h"
#include "Alumno.h"
#include <list>
#include <stdio.h>
using namespace std;

class Profesor {

public:
	void Cargar_fichero(list<Alumno> &lista); 

	void Guardar_fichero(list<Alumno> &lista); 

	void Cargar_copia_seguridad(list<Alumno> &lista);

	void Crear_copia_seguridad(list<Alumno> &lista);

	void Registrar_usuario(struct Datos_usuario p); 

	void Iniciar_sesion(struct Datos_usuario p, list <Alumno> &lista); 
};
	

#endif
