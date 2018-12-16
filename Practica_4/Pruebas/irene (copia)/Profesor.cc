#include "Profesor.h"
#include "funciones.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
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
		
		cout<<"	Registro completado"<<endl;
	}
	
		
}



void Profesor::Iniciar_sesion(struct Datos_usuario p) {	
	
	Datos_usuario b;
	
	int existe = 0;

	ifstream file;
	
	file.open("credenciales.bin", ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&b, sizeof(b));
		
		while(!file.eof()){
			
			if((strcmp(b.user, p.user)) == 0){
				if((strcmp(b.password, p.password)) == 0){
					existe = 1;
					cout<<"	Sesión iniciada"<<endl;					
					menu_funciones(p);
				}
			}
			
			file.read((char *)&b, sizeof(b));
		}
	}

	if(existe != 1){
		cout<<"\n	El usuario no existe o los campos introducidos son erróneos."<<endl;
	}
	
}


