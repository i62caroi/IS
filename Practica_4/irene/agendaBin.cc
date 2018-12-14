#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

const unsigned int MAX_1 = 50;
const unsigned int MAX_2 = 200;
const unsigned int MAX_3 = 10;

struct Alumno{
	char nombre[MAX_1];
	char apellidos[MAX_2];
	char email[MAX_3];
	char direccion[MAX_2];
	char dni[MAX_3];
	char fecha_nacimiento[MAX_3];
	int telefono;
	int curso_mas_alto;
	int grupo;
	bool lider;
};


void escribirFich(struct Alumno a){
	
	ofstream file;
	char nombre[20];
	
	cout<<"Nombre del fichero a escribir:"<<endl;
	cin>>nombre;
	cout<<" "<<endl;
	
	file.open(nombre, ios::out | ios::app |ios::binary);
	
	file.write((char *)&a, sizeof(a));
	
	file.close();
	
}

void leerFich(struct Alumno a){

	ifstream file;
	char nombre[20];
	
	cout<<"Nombre del fichero a leer:"<<endl;
	cin>>nombre;
	cout<<" "<<endl;
	
	file.open(nombre, ios::in | ios::binary);
	
	file.read((char *)&a, sizeof(a));
	
	while(!file.eof()){
	
		//file.read((char *)&a, sizeof(a));
	
		cout<<"Nombre: "<<a.nombre<<endl;
		cout<<"Apellidos: "<<a.apellidos<<endl;
		cout<<"email: "<<a.email<<endl;
		cout<<"Dirección: "<<a.direccion<<endl;
		cout<<"DNI: "<<a.dni<<endl;
		cout<<"Fecha nacimiento: "<<a.fecha_nacimiento<<endl;
		cout<<"Teléfono: "<<a.telefono<<endl;
		cout<<"Curso más alto: "<<a.curso_mas_alto<<endl;
		cout<<"Grupo: "<<a.grupo<<endl;
	
		if(a.lider == 1){
			cout<<"Líder: SÍ"<<endl;
		}
		else{
			cout<<"Líder: NO"<<endl;
		}
		
		cout<<" "<<endl;
		
		file.read((char *)&a, sizeof(a));
	}

	file.close();	
	
	
}



int main(){

	cout<<" "<<endl;	
	
	Alumno a1;
	Alumno a2;
	Alumno a3;
	Alumno a4;
	
	Alumno a;

	int opcion = 0;
	
	cout<<"1. Escribir alumnos"<<endl;
	cout<<"2. Leer alumnos"<<endl;
	cout<<" "<<endl;
	cout<<"Escoja opción:"<<endl;
	cin>>opcion;
	cout<<" "<<endl;
	
	if(opcion == 1){

		//ALUMNO 1
		strcpy(a1.nombre, "Álvaro");
		strcpy(a1.apellidos, "Gómez García");
		strcpy(a1.email, "i62gogaa");
		strcpy(a1.direccion, "Avenida de Andalucía, 3");
		strcpy(a1.dni, "23785749K");
		strcpy(a1.fecha_nacimiento, "11-03-96");
		a1.telefono = 683940376;
		a1.curso_mas_alto = 3;
		a1.grupo = 15;
		a1.lider = 1;
	
		//ALUMNO 2
		strcpy(a2.nombre, "Carlos");
		strcpy(a2.apellidos, "Gómez García");
		strcpy(a2.email, "i62gogac");
		strcpy(a2.direccion, "Avenida de Cádiz, 5");
		strcpy(a2.dni, "13583745S");
		strcpy(a2.fecha_nacimiento, "04-10-97");
		a2.telefono = 684960306;
		a2.curso_mas_alto = 3;
		a2.grupo = 15;
		a2.lider = 0;
	
		//ALUMNO 3
		strcpy(a3.nombre, "Rafael");
		strcpy(a3.apellidos, "Cano Marín");
		strcpy(a3.email, "i42camar");
		strcpy(a3.direccion, "Calle Gloria Fuertes, 1, 3-C");
		strcpy(a3.dni, "25384729J");
		strcpy(a3.fecha_nacimiento, "04-12-99");
		a3.telefono = 785910676;
		a3.curso_mas_alto = 2;
		a3.grupo = 20;
		a3.lider = 0;
	
		//ALUMNO 4
		strcpy(a4.nombre, "Ana");
		strcpy(a4.apellidos, "López Casares");
		strcpy(a4.email, "i62locaa");
		strcpy(a4.direccion, "Carretera de Cádiz, 25");
		strcpy(a4.dni, "34017531S");
		strcpy(a4.fecha_nacimiento, "04-09-98");
		a4.telefono = 657920076;
		a4.curso_mas_alto = 2;
		a4.grupo = 24;
		a4.lider = 1;


		escribirFich(a1);
		escribirFich(a2);
		escribirFich(a3);
		escribirFich(a4);
		
	}
	else{
		if(opcion == 2){
			leerFich(a);
		}
	}
	
	
}
