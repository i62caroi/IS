#include<iostream>
#include<fstream>
#include"alumno.h"
using namespace std;

void EscribirFichero(alumno p){

	ofstream f;
	char nombre[20];

	cout<<"¿Que nombre desea para el fichero?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::out | ios::app | ios::binary);

	f.write((char *)&p, sizeof(p));

	f.close();
}

void LecturaFichero(alumno q){

	ifstream f;
	char nombre[20];

	cout<<"¿Que fichero desea leer?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::in | ios::binary);

	for(int i=0;i<3;i++){		//tenemos que ir poniendo cuantos queremos leer

		f.read((char *)&q, sizeof(q));

		cout<<"Nombre "<<i+1<<" ---> "<<q.getNombre()<<endl;
		cout<<"Apellidos "<<i+1<<" ---> "<<q.getApellidos()<<endl;
		cout<<"Email "<<i+1<<" ---> "<<q.getEmail()<<endl;
		cout<<"Direccion "<<i+1<<" ---> "<<q.getDireccion()<<endl;
		cout<<"DNI "<<i+1<<" ---> "<<q.getDni()<<endl;
		cout<<"Fecha de nacimiento "<<i+1<<" ---> "<<q.getFecha()<<endl;
		cout<<"Telefono "<<i+1<<" ---> "<<q.getTelefono()<<endl;
		cout<<"Curso "<<i+1<<" ---> "<<q.getCurso()<<endl;
		cout<<"Grupo "<<i+1<<" ---> "<<q.getGrupo()<<endl;
		cout<<"Lider "<<i+1<<" ---> "<<q.getLider()<<endl;

	}

	f.close();
}

int main(){

	alumno p;
	alumno q;
	char aux[60];
	int aux2;
/*
	cout<<"¿Cual es el nombre del alumno?"<<endl;
	cin>>aux;

	p.setNombre(aux);

	cin.ignore();

	cout<<"¿Cuales son los apellidos?"<<endl;
	cin>>aux;

	p.setApellidos(aux);

	cin.ignore();

	cout<<"¿Cual es el email corporativo del alumno?"<<endl;
	cin>>aux;

	p.setEmail(aux);

	cin.ignore();

	cout<<"¿Cual es la direccion del alumno?"<<endl;
	cin>>aux;

	p.setDireccion(aux);

	cin.ignore();

	cout<<"¿Cual es el dni del alumno?"<<endl;
	cin>>aux;

	p.setDni(aux);

	cin.ignore();

	cout<<"¿Cual es la fecha de nacimiento del alumno?"<<endl;
	cin>>aux;

	p.setFecha(aux);

	cin.ignore();

	cout<<"¿Cual es el telefono del alumno?"<<endl;
	cin>>aux2;

	p.setTelefono(aux2);

	cin.ignore();

	cout<<"¿Cual es el curso mas alto donde esta matriculado el alumno?"<<endl;
	cin>>aux2;

	p.setCurso(aux2);

	cin.ignore();

	cout<<"¿A que grupo pertenece el alumno?"<<endl;
	cin>>aux2;

	p.setGrupo(aux2);

	cin.ignore();

	cout<<"Introduzca '1' si el alumno es el lider del grupo o '2' en caso de no serlo"<<endl;
	cin>>aux;

	p.setLider(aux);

	cin.ignore();

	EscribirFichero(p);
*/
	LecturaFichero(q);

}
