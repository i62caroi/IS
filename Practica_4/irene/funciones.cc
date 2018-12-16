#include <iostream>
#include <string.h>
#include <list>
#include <fstream>
#include <stdlib.h>
#include "funciones.h"
#include "Profesor.h"
#include "Agenda.h"
using namespace std;


bool check_coordinador(struct Datos_usuario a){

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


bool check_user(struct Datos_usuario a){

	Datos_usuario b;
	
	int existe;
	int escrito = 0;

	ifstream file;
	
	file.open("credenciales.bin", ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&b, sizeof(b));
		
		while(!file.eof()){
			if((strcmp(b.user, a.user)) == 0){
				existe = 1;
			}
			else{
				existe = 0;
			}
			
			file.read((char *)&b, sizeof(b));
		}
		
		file.close();
	}
	
	
	if(existe == 1){
		if(escrito == 0){
			cout<<"	Este nickname ya está en uso."<<endl;
			escrito = 1;
		}
		return true;
	}
	
	if(existe == 0){
		return false;
	}

}


void crear_coordinador(){
	
	/* Credenciales coordinador */
	Datos_usuario a;
	
	strcpy(a.user, "super");
	strcpy(a.password, "12345");
	strcpy(a.tipo, "coordinador");
	
	if(check_coordinador(a) == false){
	
		ofstream file;
	
		file.open("credenciales.bin", ios::out | ios::app | ios::binary);
	
		file.write((char *)&a, sizeof(a));
	
		file.close();
	}
	
}


void menu_inicio(){
	
	int eleccion;
	
	cout<<"   ---------------------------------------"<<endl;
	cout<<"	[1] Iniciar sesión"<<endl;
	cout<<"	[2] Registrar usuario"<<endl;
	cout<<"	[3] Ver usuarios"<<endl;
	cout<<"	[0] Salir\n"<<endl;
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
			
			
			case 0:
		
				cout<<"	FIN DEL PROGRAMA.\n"<<endl;
				exit(1);
			
			
			default:
				cout<<"	El número introducido no es válido\n"<<endl;
	
		}	
		
		cout<<"\n\n"<<endl;
		cout<<"   ---------------------------------------"<<endl;
		cout<<"	[1] Iniciar sesión"<<endl;
		cout<<"	[2] Registrar usuario"<<endl;
		cout<<"	[3] Ver usuarios"<<endl;
		cout<<"	[0] Salir\n"<<endl;
		cout<<"	Escoja una opción: ";
		cin>>eleccion;
		cout<<endl;
		
	}while(eleccion != 0);
	
	//cout<<"	FIN DEL PROGRAMA.\n"<<endl;
	
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


bool check_credenciales(struct Datos_usuario a){

	Datos_usuario b;
	
	int existe;

	ifstream file;
	
	file.open("credenciales.bin", ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&b, sizeof(b));
		
		while(!file.eof()){
			
			if((strcmp(b.user, a.user)) == 0){
				if((strcmp(b.password, a.password)) == 0){
					existe = 1;
				}
			}
			else{
			 	existe = 0;
			}
			
			file.read((char *)&b, sizeof(b));
		}
		
	}
	
	if(existe == 1){
		return true;
	}
	
	if(existe == 0){
		cout<<"\n	El usuario no está registrado."<<endl;
		return false;
	}

}


void menu_funciones(struct Datos_usuario p){

	int eleccion;
	
	cout<<"\n\n	MENÚ PRINCIPAL\n"<<endl;
	cout<<"   --------------------------------------------------"<<endl;
	cout<<"	[1] Mostrar alumno"<<endl;
	cout<<"	[2] Añadir alumno"<<endl;
	cout<<"	[3] Editar datos alumno"<<endl;
	cout<<"	[4] Eliminar alumno"<<endl;
	cout<<"	[5] Listar alumnos"<<endl;
	cout<<"	[6] Cargar fichero"<<endl;
	cout<<"	[7] Guardar fichero"<<endl;
	cout<<"	[8] Realizar copia de seguridad"<<endl;
	cout<<"	[9] Cargar copia de seguridad"<<endl;
	cout<<"	[0] Salir\n"<<endl;
	cout<<"	Escoja una opción: ";
	cin>>eleccion;
	cout<<endl;
	
	do{
	
		switch(eleccion){
	
			case 1:
		/*
				Agenda a;
				a.Mostrar_alumno();
			*/	
				break;
		
		
			case 2:
		/*
				Agenda b;
				//b.Anadir_alumno();
			*/	
				break;
			
			
			case 3:
			
				/*Agenda c;
				//c.Editar_alumno();
				*/
				break;
			
			
			case 4:
		/*
				Agenda d;
				//d.Eliminar_alumno();
			*/	
				break;
				
			
			case 5:
			/*
				Agenda e;
				//e.Listar_alumnos();
				*/
				break;
				
				
			case 6:
			
				Profesor p;
				//p.Cargar_fichero();
				
				break;
				
				
			case 7:
			
				Profesor q;
			//	q.Guardar_fichero();
				
				break;
				
				
			case 8:
			
				Profesor w;
				//w.Crear_copia_seguridad();
				
				break;
				
			
			case 9:
			
				Profesor f;
				//f.Cargar_copia_seguridad();
				
				break;
				
				
			case 0:
			
				cout<<"	HA SALIDO DEL MENÚ PRINCIPAL\n\n"<<endl;
				exit(1);	
			
			
			default:
				cout<<"	El número introducido no es válido\n"<<endl;
	
		}	
		
		cout<<"\n\n"<<endl;
		cout<<"   --------------------------------------------------"<<endl;
		cout<<"	[1] Mostrar alumno"<<endl;
		cout<<"	[2] Añadir alumno"<<endl;
		cout<<"	[3] Editar datos alumno"<<endl;
		cout<<"	[4] Eliminar alumno"<<endl;
		cout<<"	[5] Listar alumnos"<<endl;
		cout<<"	[6] Cargar fichero"<<endl;
		cout<<"	[7] Guardar fichero"<<endl;
		cout<<"	[8] Realizar copia de seguridad"<<endl;
		cout<<"	[9] Cargar copia de seguridad"<<endl;
		cout<<"	[0] Salir\n"<<endl;
		cout<<"	Escoja una opción: ";
		cin>>eleccion;
		cout<<endl;
		
	}while(eleccion != 0);

}
