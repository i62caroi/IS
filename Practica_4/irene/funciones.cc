#include <iostream>
#include <string.h>
#include <list>
#include <fstream>
#include <stdlib.h>
#include "funciones.h"
#include "Profesor.h"
using namespace std;


bool buscar_coordinador(struct Datos_usuario a){

	Datos_usuario b;

	ifstream file;
	
	file.open("credenciales.bin", ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&b, sizeof(b));
		
		while(!file.eof()){
			if((strcmp(b.tipo, a.tipo)) == 0){
				return true;
			}
			else{
				return false;
			}
			
			file.read((char *)&b, sizeof(b));
		}
	}

}


void crear_coordinador(){
	
	/* Credenciales coordinador */
	Datos_usuario a;
	
	strcpy(a.user, "super");
	strcpy(a.password, "12345");
	strcpy(a.tipo, "coordinador");
	
	if(buscar_coordinador(a) == false){
	
		ofstream file;
	
		file.open("credenciales.bin", ios::out | ios::app | ios::binary);
	
		file.write((char *)&a, sizeof(a));
	
		file.close();
	}
	
}


void menu_inicio(){
	
	int eleccion = 0;
	
	cout<<"   ---------------------------------------"<<endl;
	cout<<"	1. Iniciar sesión"<<endl;
	cout<<"	2. Registrar usuario"<<endl;
	cout<<"	3. Ver usuarios"<<endl;
	cout<<"	4. Salir\n"<<endl;
	cout<<"	Escoja una opción: ";
	cin>>eleccion;
	cout<<endl;
	
	do{
	
		switch(eleccion){
	
			case 1:
		
				Datos_usuario a;
				Profesor p;
			
				cout<<"	Usuario: ";
				cin>>a.user;
		
				cout<<"	Contraseña: ";
				cin>>a.password;
				cout<<endl;
			
				p.Iniciar_sesion(a);
						
				break;
		
		
			case 2:
		
				Datos_usuario b;
				Profesor q;
			
				cout<<"	Nuevo usuario: ";
				cin>>b.user;
		
				cout<<"	Nueva contraseña: ";
				cin>>b.password;
				cout<<endl;
			
				q.Registrar_usuario(b);
			
				break;
			
			
			case 3:
			
				verUsuarios();
				break;
			
			
			case 4:
		
				cout<<"	FIN DEL PROGRAMA.\n"<<endl;
				exit(1);
				break;
			
			
			default:
				cout<<"	El número introducido no es válido\n"<<endl;
	
		}	
		
		cout<<"\n\n"<<endl;
		cout<<"   ---------------------------------------"<<endl;
		cout<<"	1. Iniciar sesión"<<endl;
		cout<<"	2. Registrar usuario"<<endl;
		cout<<"	3. Ver usuarios"<<endl;
		cout<<"	4. Salir\n"<<endl;
		cout<<"	Escoja una opción: ";
		cin>>eleccion;
		cout<<endl;
		
	}while(eleccion != 4);
	
	cout<<"	FIN DEL PROGRAMA.\n"<<endl;
	
}


void verUsuarios(){

	Datos_usuario a;

	ifstream file;
	
	file.open("credenciales.bin", ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&a, sizeof(a));
		
		while(!file.eof()){
		
			cout<<"	Usuario: "<<a.user<<endl;
			cout<<"	Contraseña: "<<a.password<<endl;
			cout<<"	Tipo: "<<a.tipo<<endl;
			
			cout<<endl;
			
			file.read((char *)&a, sizeof(a));
		
		}
		
		file.close();
	
	}

}


bool checkCredenciales(struct Datos_usuario p){
return true;
}
	



void menu_funciones(struct Datos_usuario p){
/*
	list<Alumno> listaAlumnos;
	list<Alumno>::iterator it;
	
	int opcion;
	
	do{
	
		cout<<"	MENÚ"<<endl<<endl;

		cout<<"	-------------------------------------"<<endl;

		cout<<"	[1]  Mostrar un alumno/a"<<endl;

		cout<<"	[2]  Añadir alumno/a"<<endl;

		cout<<"	[3]  Editar datos alumno/a"<<endl;

		cout<<"	[4]  Eliminar alumno/a"<<endl;

		cout<<"	[5]  Listar alumnos/as"<<endl;

		cout<<"	[6]  Cargar fichero"<<endl;

		cout<<"	[7]  Guardar fichero"<<endl;

		cout<<"	[8]  Realizar copia de seguridad"<<endl;

		cout<<"	[9]  Cargar copia de seguridad"<<endl;

		cout<<"	[0] Salir"<<endl;

		cout<<"	-------------------------------------"<<endl;
	
	}while(opcion != 0);
*/
}
