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

	list<Alumno>::iterator it;
	Datos_alumno p;

	ifstream f;

	f.open("alumnos.bin",ios::in | ios::binary);

	//f.read((char *)&p, sizeof(p));

	for(it=lista.begin();!f.eof();it++){

		f.read((char *)&p, sizeof(p));

		it->setNombre(p.nombre);
		it->setApellidos(p.apellidos);
		it->setDireccion(p.direccion);
		it->setEmail(p.email);
		it->setDni(p.dni);
		it->setFecha_nacimiento(p.fecha_nacimiento);
		it->setTelefono(p.telefono);
		it->setCurso_mas_alto(p.curso);
		it->setGrupo(p.grupo);
		it->setLider(p.lider);

		cout<< it->getNombre() <<endl;
		cout<< it->getApellidos() <<endl;
		cout<< it->getDireccion() <<endl;
		cout<< it->getDni() <<endl;
		cout<< it->getEmail() <<endl;
		cout<< it->getFecha_nacimiento() <<endl;
		cout<< it->getTelefono() <<endl;
		cout<< it->getCurso_mas_alto() <<endl;
		cout<< it->getGrupo() <<endl;
		cout<< it->getLider() <<endl;

	}

	f.close();

}



void Profesor::Guardar_fichero(list<Alumno> &lista){

	list<Alumno>::iterator it;
	Datos_alumno p;
	char nombre[50];
	string aux;

	ofstream f;

	f.open("alumnos.bin",ios::out |ios::binary);

	for(it=lista.begin();it != lista.end();it++){

		aux=it->getNombre();
		strcpy(p.nombre,aux.c_str());
		aux=it->getApellidos();
		strcpy(p.apellidos,aux.c_str());
		aux=it->getDireccion();
		strcpy(p.direccion,aux.c_str());
		aux=it->getDni();
		strcpy(p.dni,aux.c_str());
		aux=it->getEmail();
		strcpy(p.email,aux.c_str());
		aux=it->getFecha_nacimiento();
		strcpy(p.fecha_nacimiento,aux.c_str());
		p.telefono=it->getTelefono();
		p.curso=it->getCurso_mas_alto();
		p.grupo=it->getGrupo();
		p.lider=it->getLider();

		f.write((char *)&p, sizeof(p));

	}

	f.close();

}
*/

/*
void Profesor::Guardar_fichero(list <Alumno> &lista){

	if(!lista.empty()){
		
		list<Alumno>::iterator pos;
		char nombreF[20];
		string nombre, apellidos, email, dir, dni, fecha; 
		Datos_alumno a;
	
		ofstream file;
	
		cout<<"	Introduzca el nombre del fichero en el que quiera guardar los datos de los alumnos: ";
		cin>>nombreF;
		cin.ignore();
		
		file.open(nombreF, ios::out | ios::binary);
	
		for(pos = lista.begin(); pos != lista.end(); pos++){
		
			nombre = pos->getNombre();
			strcpy(a.nombre, nombre.c_str());
			
			apellidos = pos->getApellidos();
			strcpy(a.apellidos, apellidos.c_str());
			
			email = pos->getEmail();
			strcpy(a.email, email.c_str());
			
			dir = pos->getDireccion();
			strcpy(a.direccion, dir.c_str());
			
			dni = pos->getDni();
			strcpy(a.dni, dni.c_str());
			
			fecha = pos->getFecha_nacimiento();
			strcpy(a.fecha_nacimiento, fecha.c_str());
			
			a.telefono = pos->getTelefono();
			
			a.curso_mas_alto = pos->getCurso_mas_alto();
			
			a.grupo = pos->getGrupo();
			
			a.lider = pos->getLider();
			
			file.write((char *)&a, sizeof(a));
		
		}
		
		file.close();
	
	}
	else{
		cout<<"	La agenda está vacía."<<endl;
	}

}*/


/*

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


