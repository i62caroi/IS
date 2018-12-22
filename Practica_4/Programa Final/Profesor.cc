#include "Profesor.h"
#include "funciones.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;


void Profesor::Cargar_fichero(list <Alumno> &lista){

	lista.clear(); // Limpiamos la lista

	ifstream f;
	Alumno p;
	char nombre[30];

	cout<<"	Introduzca el nombre del fichero binario que desea cargar: ";
	cin>>nombre;

	f.open(nombre,ios::in | ios::binary);
	
	if(f.is_open()){
	
		f.read((char *)&p, sizeof(p));

		while(!f.eof()){
	
			lista.push_back(p);

			f.read((char *)&p, sizeof(p));

		}

		f.close();
	
		cout<<"\n	Fichero cargado."<<endl;
		
	}
	else{
		cout<<"\n	El fichero no existe."<<endl;
	}

}


void Profesor::Guardar_fichero(list <Alumno> &lista){

	list<Alumno>::iterator pos;
	Alumno p;
	string nombre, apellidos, email, dir, dni, fecha, lider;
	int curso, tlf, grupo;
	char nombreF[20];
	char *n_ = new char[nombre.size() + 1];
	char *a_ = new char[apellidos.size() + 1];
	char *e_ = new char[email.size() + 1];
	char *d_ = new char[dir.size() + 1];
	char *dni_ = new char[dni.size() + 1];
	char *f_ = new char[fecha.size() + 1];
	char *l_ = new char[lider.size() + 1];

	ofstream f;

	cout<<"	Introduzca el nombre del fichero de guardado: ";
	cin>>nombreF;
	cin.ignore();

	f.open(nombreF,ios::out | ios::binary);

	for(pos = lista.begin(); pos != lista.end(); pos++){

		nombre = pos->getNombre();
		copy(nombre.begin(), nombre.end(), n_);
		n_[nombre.size()] = '\0';
		p.setNombre(n_);

		apellidos = pos->getApellidos();
		copy(apellidos.begin(), apellidos.end(), a_);
		a_[apellidos.size()] = '\0';
		p.setApellidos(a_);

		email = pos->getEmail();
		copy(email.begin(), email.end(), e_);
		e_[email.size()] = '\0';
		p.setEmail(e_);

		dir = pos->getDireccion();
		copy(dir.begin(), dir.end(), d_);
		d_[dir.size()] = '\0';
		p.setDireccion(d_);

		dni = pos->getDni();
		copy(dni.begin(), dni.end(), dni_);
		dni_[dni.size()] = '\0';
		p.setDni(dni_);

		fecha = pos->getFecha_nacimiento();
		copy(fecha.begin(), fecha.end(), f_);
		f_[fecha.size()] = '\0';
		p.setFecha_nacimiento(f_);

		tlf = pos->getTelefono();
		p.setTelefono(tlf);

		curso = pos->getCurso_mas_alto();
		p.setCurso_mas_alto(curso);

		grupo = pos->getGrupo();
		p.setGrupo(grupo);

		lider = pos->getLider();
		copy(lider.begin(), lider.end(), l_);
		l_[lider.size()] = '\0';
		p.setLider(l_);

		f.write((char *)&p, sizeof(p));

	}

	f.close();
	
	cout<<"\n	Fichero guardado."<<endl;

}


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
					cout<<"	Sesión iniciada."<<endl;					
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


