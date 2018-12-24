#include<iostream>
#include<string>
#include "claseAGENDA.h"
using namespace std;

void Agenda::Anadir_alumno(){

//variables provisionales

	string nombre="";
	string apellidos="";
	string email="";
	string direccion="";
	string dni="";
	string fecha="";
	long telefono=0;
	int curso;
	string grupo;
	bool lider;	

	cout<<"Introduce el nombre del alumno"<<endl;
	cin>>nombre;

	cout<<"Introduce los apellidos del alumno"<<endl;
	cin>>apellidos;

	cout<<"Introduce el email del alumno"<<endl;
	cin>>email;

	cout<<"Introduce la direccion del alumno"<<endl;
	cin>>direccion;

	cout<<"Introduce el dni del alumno"<<endl;
	cin>>dni;

	cout<<"Introduce la fecha de nacimiento del alumno"<<endl;
	cin>>fecha;

	cout<<"Introduce el telefono del alumno"<<endl;
	cin>>telefono;

	cout<<"Introduce el curso mas alto en el que esta matriculado el alumno"<<endl;
	cin>>curso;

	cout<<"Introduce el grupo al que pertenece el alumno"<<endl;
	cin>>grupo;

	cout<<"Introduce 'true' si el alumno es lider o 'false' en caso de que no lo sea"<<endl;
	cin>>lider;

}

void Agenda::Editar_alumno(){

	string cambio;

	cout<<"Indicar que campo desea modificar"<<endl;
	cin>>cambio;




}
