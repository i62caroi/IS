#include "Agenda.h"
#include "Alumno.h"
#include <list>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
void Agenda::Anadir_alumno(list<Alumno>&lista){

	if(lista.size()<150){

		Alumno p;
		Alumno m;
		string cad;
		int aux;
		bool cad1;

		cout<<"Introduzca el nombre del alumno que desea añadir"<<endl;
		cin.clear();
		cin>>cad;

		p.setNombre(cad);

		cout<<"Introduzca los apellidos del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setApellidos(cad);

		cout<<"Introduzca la direccion del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setDireccion(cad);

		cout<<"Introduzca el email corporativo del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setEmail(cad);

		cout<<"Introduzca el dni del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setDni(cad);

		cout<<"Introduzca la fecha de nacimiento del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setFecha_nacimiento(cad);

		cout<<"Introduzca el telefono del alumno"<<endl;
		cin.clear();
		cin>>cad;

		aux=atoi(cad.c_str());
		p.setTelefono(aux);

		cout<<"Introduzca el curso más alto en el que está matriculado el alumno"<<endl;
		cin.clear();
		cin>>cad;

		aux=atoi(cad.c_str());
		p.setCurso_mas_alto(aux);

		cout<<"Introduzca el grupo al que pertenece el alumno"<<endl;
		cin.clear();
		cin>>cad;

		aux=atoi(cad.c_str());
		p.setGrupo(aux);

		cout<<"Introduzca '1' o 'true' si el alumno es lider o '0' o 'false' en caso de no serlo"<<endl;
		cin.clear();
		cin>>cad1;

		p.setLider(cad1);

		lista.push_back(p);*/

//SOLUCION DE LA LISTA

/*
		list<Alumno>::iterator it;

		for(it=lista.begin();it != lista.end(); it++){

			cout<< it->getNombre() <<endl;
			cout<< it->getApellidos() <<endl;

		}

		int j=lista.size();

		m=lista.back();

		cout<<"-----------------------"<<endl;
		cout<<m.getNombre()<<endl;
*/

/*
	}else{

		cout<<"La lista está completa, no se pueden añadir más alumnos"<<endl;

	}

}
*/

/*
void Agenda::Editar_alumno(list<Alumno> &listaAlumnos) {
	// TODO - implement Agenda::Editar_alumno
	throw "Not yet implemented";
}

void Agenda::Eliminar_alumno(list<Alumno> &listaAlumnos) {
	// TODO - implement Agenda::Eliminar_alumno
	throw "Not yet implemented";
}

*/
/*

void Agenda::Mostrar_alumno(list<Alumno>&lista){
	char apellidochar[255];

	string apellido;
	string dni;

	int tamList=lista.size();
	int aux=lista.max_size();

	Alumno p;

	
	cout<<"Tamano --> "<<tamList<<endl;
	cout<<"Tamano maximo --> "<<aux<<endl;


	cout<<"Introduzca los apellidos del alumno a mostrar"<<endl;

	cin.ignore();
	cin.getline(apellidochar, 255,'\n');

	//Paso de char a string
	apellido = apellidochar;
	cout<<"Apellido introducido STRING--> "<<apellido<<endl;

	list<Alumno>::iterator it;
	
	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(apellido==it->getApellidos()){

			cout<<it->getNombre()<<endl;
			cout<<it->getApellidos()<<endl;
			cout<<it->getEmail()<<endl;
			cout<<it->getDireccion()<<endl;
			cout<<it->getDni()<<endl;
			cout<<it->getFecha_nacimiento()<<endl;
			cout<<it->getTelefono()<<endl;
			cout<<it->getCurso_mas_alto()<<endl;
			cout<<it->getGrupo()<<endl;
			cout<<it->getLider()<<endl;

		}
		
	} 
	
	cout<<"Introduzca el dni del alumno a mostrar"<<endl;

	cin>>dni;

	//Paso de char a string
	cout<<"DNI introducido STRING--> "<<dni<<endl;


}
*/
/*
void Agenda::Listar_alumnos(list<Alumno>&lista){

	list<Alumno>::iterator it;

	//if(!lista.empty()){

		for(it=lista.begin();it != lista.end();it++){

			cout<<"Nombre ---> "<<it->getNombre()<<endl;
			cout<<"Apellidos ---> "<<it->getApellidos()<<endl;
			cout<<"Direccion ---> "<<it->getDireccion()<<endl;
			cout<<"Email ---> "<<it->getEmail()<<endl;
			cout<<"Dni ---> "<<it->getDni()<<endl;
			cout<<"Fecha de nacimiento ---> "<<it->getFecha_nacimiento()<<endl;
			cout<<"Telefono ---> "<<it->getTelefono()<<endl;
			cout<<"Curso mas alto en el que esta matriculado ---> "<<it->getCurso_mas_alto()<<endl;
			cout<<"Grupo al que pertenece ---> "<<it->getGrupo()<<endl;
			cout<<"Lider ---> "<<it->getLider()<<endl;

		}


	//}else{cout<<"La lista esta vacia, debe cargar primero un fichero"<<endl;};

}*/

/*

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
