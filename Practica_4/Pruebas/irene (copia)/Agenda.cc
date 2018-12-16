#include "Agenda.h"
#include "Alumno.h"
#include <list>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void Agenda::Anadir_alumno(list<Alumno> &listaAlumnos) {

	if(listaAlumnos.size() < 150){
	
		Alumno p;
		//Alumno m;
		
		char nombre, apellidos, email, dir, dni, fecha;
		int tlf, curso, grupo;
		bool lider;
		
		cout<<"	Nombre: ";
		cin.ignore();
		cin>>nombre;
		p.setNombre(nombre);
		
		cout<<"\n	Apellidos: ";
		cin.ignore();
		cin>>apellidos;
		p.setApellidos(apellidos);
		
		cout<<"\n	Email: ";
		cin.ignore();
		cin>>email;
		p.setEmail(email);
		
		cout<<"\n	Dirección: ";
		cin.ignore();
		cin>>dir;
		p.setDireccion(dir);
		
		cout<<"\n	DNI: ";
		cin.ignore();
		cin>>dni;
		p.setDni(dni);
		
		cout<<"\n	Fecha de nacimiento: ";
		cin.ignore();
		cin>>fecha;
		p.setFecha_nacimiento(fecha);
		
		cout<<"\n	Curso más alto: ";
		cin.ignore();
		cin>>curso;
		p.setCurso_mas_alto(curso);
		
		cout<<"\n	Grupo: ";
		cin.ignore();
		cin>>grupo;
		p.setGrupo(grupo);
		
		cout<<"\n	¿Es líder?"<<endl;
		cout<<"	Escriba 1 o 'true' en caso de que lo sea, 0 o 'false' si no lo es: ";
		cin.ignore();
		cin>>lider;
		p.setLider(lider);
		
		
		
		listaAlumnos.push_back(p);
		
		cout<<"	Alumno añadido."<<endl;
	
	}
	else{
		cout<<"\n	No se pueden añadir más alumnos."<<endl;
	}	
	
}


/*
void Agenda::Editar_alumno(list<Alumno> &listaAlumnos) {
	// TODO - implement Agenda::Editar_alumno
	throw "Not yet implemented";
}

void Agenda::Eliminar_alumno(list<Alumno> &listaAlumnos) {
	// TODO - implement Agenda::Eliminar_alumno
	throw "Not yet implemented";
}

void Agenda::Mostrar_alumno(list<Alumno> &listaAlumnos) {
	// TODO - implement Agenda::Mostrar_alumno
	throw "Not yet implemented";
}

void Agenda::Listar_alumnos(list<Alumno> &listaAlumnos) {
	// TODO - implement Agenda::Listar_alumnos
	throw "Not yet implemented";
}

bool Agenda::Buscar_apellidos(char apellidos) {
	// TODO - implement Agenda::Buscar_apellidos
	throw "Not yet implemented";
}

bool Agenda::Buscar_dni(char dni) {
	// TODO - implement Agenda::Buscar_dni
	throw "Not yet implemented";
}

bool Agenda::Buscar_grupo(int grupo) {
	// TODO - implement Agenda::Buscar_grupo
	throw "Not yet implemented";
}*/
