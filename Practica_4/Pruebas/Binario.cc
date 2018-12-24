#include<iostream>
#include<fstream>
using namespace std;

struct Datos{

	char user[60];
	char password[15];
	char tipo[50];
};

void EscribirFichero(struct Datos p){

	ofstream f;
	char nombre[20];

	cout<<"¿Que nombre desea para el fichero?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::out | ios::app | ios::binary);

	f.write((char *)&p, sizeof(p));
}

void LecturaFichero(struct Datos q){

	ifstream f;
	char nombre[20];

	cout<<"¿Que fichero desea leer?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::in | ios::binary);

	f.read((char *)&q, sizeof(q));

	cout<<"Usuario 1 ---> "<<q.user<<endl;
	cout<<"Password 1 ---> "<<q.password<<endl;

	f.read((char *)&q, sizeof(q));

	cout<<"Usuario 2 ---> "<<q.user<<endl;
	cout<<"Password 2 ---> "<<q.password<<endl;

	f.read((char *)&q, sizeof(q));

	cout<<"Usuario 3 ---> "<<q.user<<endl;
	cout<<"Password 3 ---> "<<q.password<<endl;


}

int main(){

	Datos p;
	Datos q;

	cout<<"¿Cual es tu nombre de usuario?"<<endl;
	cin>>p.user;

	cout<<"¿Cual es tu contraseña?"<<endl;
	cin>>p.password;

	EscribirFichero(p);
	LecturaFichero(q);
}
