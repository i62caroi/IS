#include<iostream>
#include<fstream>
using namespace std;

struct Alumno{

	char nombre[20];
	char apellidos[30];
	char email[30];
	char direccion[25];
	char dni[10];
	char fecha_nacimiento[10];
	int telefono;
	int curso;
	int grupo;
	bool lider;
};

void EscribirFichero(struct Alumno p){

	ofstream f;
	char nombre[20];

	cout<<"¿Que nombre desea para el fichero?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::out | ios::app | ios::binary);

	f.write((char *)&p, sizeof(p));
}

void LecturaFichero(struct Alumno q){

	ifstream f;
	char nombre[20];

	cout<<"¿Que fichero desea leer?"<<endl;
	cin>>nombre;

	f.open(nombre,ios::in | ios::binary);

	for(int i=0;i<1;i++){		//tenemos que ir poniendo cuantos queremos leer

		f.read((char *)&q, sizeof(q));

		cout<<"Nombre "<<i+1<<" ---> "<<q.nombre<<endl;
		cout<<"Apellidos "<<i+1<<" ---> "<<q.apellidos<<endl;
		cout<<"Email "<<i+1<<" ---> "<<q.email<<endl;
		cout<<"Direccion "<<i+1<<" ---> "<<q.direccion<<endl;
		cout<<"DNI "<<i+1<<" ---> "<<q.dni<<endl;
		cout<<"Fecha de nacimiento "<<i+1<<" ---> "<<q.fecha_nacimiento<<endl;
		cout<<"Telefono "<<i+1<<" ---> "<<q.telefono<<endl;
		cout<<"Curso "<<i+1<<" ---> "<<q.curso<<endl;
		cout<<"Grupo "<<i+1<<" ---> "<<q.grupo<<endl;
		cout<<"Lider "<<i+1<<" ---> "<<q.lider<<endl;

	}
}

int main(){

	Alumno p;
	Alumno q;

	cout<<"¿Cual es el nombre del alumno?"<<endl;
	cin>>p.nombre;

	cin.ignore();

	cout<<"¿Cuales son los apellidos?"<<endl;
	cin>>p.apellidos;

	cin.ignore();

	cout<<"¿Cual es el email corporativo del alumno?"<<endl;
	cin>>p.email;

	cin.ignore();

	cout<<"¿Cual es la direccion del alumno?"<<endl;
	cin>>p.direccion;

	cin.ignore();

	cout<<"¿Cual es el dni del alumno?"<<endl;
	cin>>p.dni;

	cin.ignore();

	cout<<"¿Cual es la fecha de nacimiento del alumno?"<<endl;
	cin>>p.fecha_nacimiento;

	cin.ignore();

	cout<<"¿Cual es el telefono del alumno?"<<endl;
	cin>>p.telefono;

	cin.ignore();

	cout<<"¿Cual es el curso mas alto donde esta matriculado el alumno?"<<endl;
	cin>>p.curso;

	cin.ignore();

	cout<<"¿A que grupo pertenece el alumno?"<<endl;
	cin>>p.grupo;

	cin.ignore();

	cout<<"Introduzca '1' si el alumno es el lider del grupo o '2' en caso de no serlo"<<endl;
	cin>>p.lider;

	cin.ignore();

	EscribirFichero(p);

	LecturaFichero(q);

}
