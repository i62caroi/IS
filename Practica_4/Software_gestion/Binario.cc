#include<iostream>
#include<fstream>
#include"profesor.h"
using namespace std;

void EscribirFichero(profesor p){

	ofstream f;
	char nombre[20];

	cout<<"¿Que nombre desea para el fichero?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::out | ios::app | ios::binary);

	f.write((char *)&p, sizeof(p));

	f.close();
}

void LecturaFichero(profesor q){

	ifstream f;
	char nombre[20];

	cout<<"¿Que fichero desea leer?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::in | ios::binary);

	f.read((char *)&q, sizeof(q));

	cout<<"User 1 ---> "<<q.getUser()<<endl;
	cout<<"Password 1 ---> "<<q.getPassword()<<endl;
	cout<<"Type 1 ---> "<<q.getType()<<endl;

	f.read((char *)&q, sizeof(q));

	cout<<"User 2 ---> "<<q.getUser()<<endl;
	cout<<"Password 2 ---> "<<q.getPassword()<<endl;
	cout<<"type 2 ---> "<<q.getType()<<endl;

	f.read((char *)&q, sizeof(q));

	cout<<"User 3 ---> "<<q.getUser()<<endl;
	cout<<"Password 3 ---> "<<q.getPassword()<<endl;
	cout<<"type 3 ---> "<<q.getType()<<endl;

	f.close();

}

int main(){

	profesor p;
	profesor q;
	char aux[30];

	cout<<"¿Cual es tu nombre de usuario?"<<endl;
	cin>>aux;

	p.setUser(aux);

	cout<<"¿Cual es tu contraseña?"<<endl;
	cin>>aux;

	p.setPassword(aux);

	cout<<"¿Eres administrador o ayudante?"<<endl;
	cin>>aux;

	p.setType(aux);

	//EscribirFichero(p);
	LecturaFichero(q);
}
