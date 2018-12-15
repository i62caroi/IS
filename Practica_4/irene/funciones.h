#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <list>
#include <string>

	struct Datos_usuario{

		char user[60];
		char password[15];
		char tipo[50];

	};

	bool checkCredenciales(struct Datos_usuario p);
	
	void verUsuarios();
	
	void menu_inicio();
	
	void menu_funciones(struct Datos_usuario p);
	
	void crear_coordinador();
	
	bool buscar_coordinador(struct Datos_usuario p);

#endif
