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
	
	bool checkCredenciales(struct Datos_usuario p);
	
	void verUsuarios();
	
	void menu_inicio();
	
	void menu_funciones(struct Datos_usuario p);
	
	void crear_coordinador();
	
	bool check_coordinador(struct Datos_usuario p);
	
	bool check_user(struct Datos_usuario p);
	
	bool check_credenciales(struct Datos_usuario p);

#endif
