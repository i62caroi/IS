#include "Profesor.h"
#include "funciones.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

/*
void Profesor::Cargar_fichero(list<Alumno>&lista){

	ifstream f;
	list<Alumno>::iterator it;
	Alumno p;
	char nombre_fichero[30];

	ifstream f;

	cout<<"Introduzca el nombre del fichero binario que desea cargar"<<endl;
	cin>>nombre_fichero;

	f.open(nombre_fichero,ios::in | ios::binary);

	while(!f.eof()){

		f.read((char *)&p, sizeof(p));

		lista.push_back(p);

	}

	f.close();

}

void Profesor::Guardar_fichero(list <Alumno> &lista){

	list<Alumno>::iterator it;
	char aux[60];
	int aux2;
	Alumno p;

	ofstream f;

	cout<<"Introduzca el nombre del fichero de guardado"<<endl;
	cin>>aux;

	f.open(aux,ios::out | ios::binary);

	for(it = lista.begin();it != lista.end();it++){

		strcpy(aux,it->getNombre());
		p.setNombre(aux);

		strcpy(aux,it->getApellidos());
		p.setApellidos(aux);

		strcpy(aux,it->getDireccion());
		p.setDireccion(aux);

		strcpy(aux,it->getEmail());
		p.setEmail(aux);

		strcpy(aux,it->getDni());
		p.setDni(aux);

		strcpy(aux,it->getFecha_nacimiento());
		p.setFecha_nacimiento(aux);

		strcpy(aux,it->getNombre());
		p.setNombre(aux);

		aux2=it->getCurso();
		p.setCurso(aux2);

		aux2=it->getGrupo();
		p.setGrupo(aux2);

		aux2=it->getTelefono();
		p.setTelefono(aux2);

		strcpy(aux,it->getLider());
		p.setLider(aux);

		f.write((char *)&p, sizeof(p));

	}

	f.close();

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



void Profesor::Iniciar_sesion(struct Datos_usuario p, list <Alumno> &lista) {	
	
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
					menu_funciones(b, lista);
				}
			}
			
			file.read((char *)&b, sizeof(b));
		}
	}

	if(existe != 1){
		cout<<"\n	El usuario no existe o los campos introducidos son erróneos."<<endl;
	}
	
}


