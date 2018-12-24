#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "Alumno.h"
using namespace std;


void escribirFich(Alumno a, char nombre[20]){

	ofstream file;
	
	file.open(nombre, ios::out | ios::app |ios::binary);
	
	file.write((char *)&a, sizeof(a));
	
	file.close();
	
}

void leerFich(Alumno a){

	char nombre[20];
	cout<<"	Nombre del fichero a leer: ";
	cin>>nombre;
	cout<<endl;
	
	ifstream file;
		
	file.open(nombre, ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&a, sizeof(a));
	
		while(!file.eof()){
	
			cout<<"	Nombre: "<<a.getNombre()<<endl;
			cout<<"	Apellidos: "<<a.getApellidos()<<endl;
			cout<<"	email: "<<a.getEmail()<<endl;
			cout<<"	Dirección: "<<a.getDireccion()<<endl;
			cout<<"	DNI: "<<a.getDni()<<endl;
			cout<<"	Fecha nacimiento: "<<a.getFecha_nacimiento()<<endl;
			cout<<"	Teléfono: "<<a.getTelefono()<<endl;
			cout<<"	Curso más alto: "<<a.getCurso_mas_alto()<<endl;
			cout<<"	Grupo: "<<a.getGrupo()<<endl;
	
			if(a.getLider() == 1){
				cout<<"	Líder: SÍ"<<endl;
			}
			else{
				cout<<"	Líder: NO"<<endl;
			}
		
			cout<<endl;
		
			file.read((char *)&a, sizeof(a));
		}

		file.close();	
	
	}
	
	else{
		cout<<"	Fichero inexistente"<<endl;
	}
	
	
}



int main(){

	cout<<endl;	
	
	Alumno a1;
	Alumno a2;
	Alumno a3;
	Alumno a4;
	
	Alumno a;

	int opcion = 0;
	char nombre[20];
	string nomb = "Álvaro";
	string apellidos = "Gómez García";
	string email = "i62gogaa";
	string dir = "Avenida de Andalucía, 3";
	string dni = "23785749K";
	string fecha = "11-03-96";
	
	cout<<"	1. Escribir alumnos"<<endl;
	cout<<"	2. Leer alumnos"<<endl;
	cout<<"	3. Salir"<<endl;
	cout<<endl;
	cout<<"	Escoja opción: ";
	cin>>opcion;
	cout<<endl;
	
	do{
	
		switch(opcion){
		
			case 1:

				//ALUMNO 1
				a1.setNombre(nomb);
				a1.setApellidos(apellidos);
				a1.setEmail(email);
				a1.setDireccion(dir);
				a1.setDni(dni);
				a1.setFecha_nacimiento(fecha);
				a1.setTelefono(683940376);
				a1.setCurso_mas_alto(3);
				a1.setGrupo(15);
				a1.setLider(1);
	
			/*	//ALUMNO 2
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
*/

				cout<<"	Nombre del fichero a escribir: ";
				cin>>nombre;
				cout<<endl;

				escribirFich(a1, nombre);
				/*escribirFich(a2, nombre);
				escribirFich(a3, nombre);
				escribirFich(a4, nombre);
		*/
				break;
				
				
			case 2:
				
				leerFich(a);
				break;
				
				
			default:
				
				exit(0);
		
		}
		
		opcion = 0;
		
		cout<<endl;
		cout<<endl;
		cout<<"	1. Escribir alumnos"<<endl;
		cout<<"	2. Leer alumnos"<<endl;
		cout<<"	3. Salir"<<endl;
		cout<<endl;
		cout<<"	Escoja opción: ";
		cin>>opcion;
		cout<<endl;
		
	}while(opcion != 3);
	
	
}
