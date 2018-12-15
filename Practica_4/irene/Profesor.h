#ifndef PROFESOR_H
#define PROFESOR_H
#include "funciones.h"

class Profesor {

private:
	//Agenda* puntero_agenda;
	Datos_usuario p;

public:
	void Cargar_fichero();

	void Guardar_fichero();

	void Cargar_copia_seguridad(char tipo);

	void Crear_copia_seguridad(char tipo);

	void Registrar_usuario(struct Datos_usuario p);

	void Iniciar_sesion(struct Datos_usuario p);
};
	

#endif
