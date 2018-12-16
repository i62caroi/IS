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
	
	do{
	
		cout<<"\n\n	INICIO"<<endl;
		cout<<"   ---------------------------------------\n"<<endl;
		cout<<"	[1] Iniciar sesión"<<endl;
		cout<<"	[2] Registrar usuario"<<endl;
		cout<<"	[3] Ver usuarios"<<endl;
		cout<<"	[0] Salir\n"<<endl;
		cout<<"	Escoja una opción: ";
		cin>>eleccion;
		cout<<endl;
	
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
				break;
			
						
			default:
				cout<<"	El número introducido no es válido\n"<<endl;
	
		}	
		
	}while(eleccion != 0);
	
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



void menu_funciones(struct Datos_usuario p){

	int eleccion;
	
	Agenda a;
	Profesor q;
	
	list<Alumno> listaAlumnos;
	
	do{
	
		cout<<"\n\n\n	MENÚ PRINCIPAL"<<endl;
		cout<<"   --------------------------------------------------\n"<<endl;
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
	
		switch(eleccion){
	
			case 1:
	
				//a.Mostrar_alumno(listaAlumnos);
			
				break;
		
		
			case 2:
		
				
				//a.Anadir_alumno(listaAlumnos);
				
				break;
			
			
			case 3:
			
				
				//a.Editar_alumno(listaAlumnos);
				
				break;
			
			
			case 4:
		
				//a.Eliminar_alumno(listaAlumnos);
			
				break;
				
			
			case 5:
				
				//a.Listar_alumnos(listaAlumnos);
				
				break;
				
				
			case 6:
			
				//q.Cargar_fichero();
				cout<<"\n	Estamos trabajando en ello."<<endl;
				
				break;
				
				
			case 7:
			
			//	q.Guardar_fichero();
				
				break;
				
				
			case 8:
			
				//q.Crear_copia_seguridad();
				
				break;
				
			
			case 9:
			
				//q.Cargar_copia_seguridad();
				
				break;
							
			
			case 0:
			
				cout<<"	HA SALIDO DEL MENÚ PRINCIPAL."<<endl;
				
				break;
			
			
			default:
				cout<<"	El número introducido no es válido\n"<<endl;
	
		}	
		
	}while(eleccion != 0);

}


/*

void VerificarCredenciales(struct Datos_usuario p){

	ifstream f;
	Datos_usuario q;

	f.open("credenciales.bin",ios::in | ios::binary);

	while(f.read((char *)&q, sizeof(q)) && (!f.eof())){

		if((strcmp(q.user,p.user))==0){

			if((strcmp(q.password,p.password))==0){

				strcpy(p.tipo,q.tipo);
				menu(p.user,p.password,p.tipo);

			}

		}

		//cout<<"Usuario ---> "<<q.user<<endl;
		//cout<<"Password --->"<<q.password<<endl;
	}

	f.close();

}
*/
/*
 ------ CHECK CREDENCIALES IRENE ---- 
 
 
bool check_credenciales(struct Datos_usuario a){

	Datos_usuario b;

	ifstream file;
	
	file.open("credenciales.bin", ios::in | ios::binary);
	
	if(file.is_open()){
	
		file.read((char *)&b, sizeof(b));
		
		while(!file.eof()){
			
			if((strcmp(b.user, a.user)) == 0){
				if((strcmp(b.password, a.password)) == 0){
					return true
				}
			}
			else{
			 	cout<<"\n	El usuario no está registrado."<<endl;
				return false;
			}
			
			file.read((char *)&b, sizeof(b));
		}
		
	}

}*/

