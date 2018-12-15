#include "Profesor.h"
#include "funciones.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

/*
void Profesor::Cargar_fichero() {
	// TODO - implement Profesor::Cargar_fichero
	throw "Not yet implemented";
}

void Profesor::Guardar_fichero() {
	// TODO - implement Profesor::Guardar_fichero
	throw "Not yet implemented";
}

void Profesor::Cargar_copia_seguridad(char tipo) {
	// TODO - implement Profesor::Cargar_copia_seguridad
	throw "Not yet implemented";
}

void Profesor::Crear_copia_seguridad(char tipo) {
	// TODO - implement Profesor::Crear_copia_seguridad
	throw "Not yet implemented";
}*/



void Profesor::Registrar_usuario(struct Datos_usuario p) {

	if(check_user(p) == false){
		strcpy(p.tipo, "ayudante");

		ofstream file;
	
		file.open("credenciales.bin", ios::out | ios::app | ios::binary);
	
		file.write((char *)&p, sizeof(p));
	
		file.close();
	}
	else{
		cout<<"	Este usuario ya existe"<<endl;
	}	
	
}



void Profesor::Iniciar_sesion(struct Datos_usuario p) {
			
	if(check_credenciales(p) == true){
		cout<<"	Sesión iniciada."<<endl;
		menu_funciones(p);
	}
	else{
		cout<<"	Este usuario no está registrado.\n\n"<<endl;
	}
	
}


