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


void menu_inicio(list<Alumno> &lista){
	
	int eleccion;
	
	//list <Alumno> lista;
	
	do{
	
		cout<<"\n\n	INICIO"<<endl;
		cout<<"   ---------------------------------------\n"<<endl;
		cout<<"	[1] Iniciar sesión"<<endl;
		cout<<"	[2] Registrar usuario"<<endl;
		cout<<"	[3] Ver usuarios"<<endl;
		cout<<"	[0] Salir\n"<<endl;
		cout<<"	Escoja una opción: ";
		cin>>eleccion;
		cin.ignore();
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
			
				p.Iniciar_sesion(a, lista);
						
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



void menu_funciones(struct Datos_usuario p, list<Alumno> &lista){

	int eleccion;
	
	Agenda a;
	Profesor q;
	
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
			cin.ignore();
			cout<<endl;
	
			switch(eleccion){
	
				case 1:
	
					a.Mostrar_alumno(lista);
			
					break;
		
		
				case 2:
		
				
					a.Anadir_alumno(lista);
				
					break;
			
			
				case 3:
			
				
					//a.Editar_alumno(lista);
				
					break;
			
			
				case 4:
		
					//a.Eliminar_alumno(lista);
			
					break;
				
			
				case 5:
				
					a.Listar_alumnos(lista);
				
					break;
				
				
				case 6:
			
					//q.Cargar_fichero();
					cout<<"\n	Estamos trabajando en ello."<<endl;
				
					break;
				
				
				case 7:
			
				//	q.Guardar_fichero();
				
					break;
				
				
				case 8:
			
					if((strcmp(p.tipo, "coordinador")) == 0){
						//q.Crear_copia_seguridad();
					}
					else{
						cout<<"	No tiene permiso para realizar esta acción."<<endl;
					}
				
					break;
				
			
				case 9:
			
					if((strcmp(p.tipo, "coordinador")) == 0){
						//q.Cargar_copia_seguridad();
					}
					else{
						cout<<"	No tiene permiso para realizar esta acción."<<endl;
					}
				
					break;
							
			
				case 0:
			
					cout<<"	HA SALIDO DEL MENÚ PRINCIPAL."<<endl;
				
					break;
			
			
				default:
					cout<<"	El número introducido no es válido\n"<<endl;
	
			}	
		
		}while(eleccion != 0);

}


void lista_asc_comp(list <Alumno> &lista, Alumno alumno[NUM]){
	for(int i = 1; i <= lista.size(); i++){
		cout<<"	Nombre: "<<alumno[i].getNombre()<<endl;
		cout<<"	Apellidos: "<<alumno[i].getApellidos()<<endl;
		cout<<"	email: "<<alumno[i].getEmail()<<endl;
		cout<<"	Dirección: "<<alumno[i].getDireccion()<<endl;
		cout<<"	DNI: "<<alumno[i].getDni()<<endl;
		cout<<"	Fecha nacimiento: "<<alumno[i].getFecha_nacimiento()<<endl;
		cout<<"	Teléfono: "<<alumno[i].getTelefono()<<endl;
		cout<<"	Curso más alto: "<<alumno[i].getCurso_mas_alto()<<endl;
		cout<<"	Grupo: "<<alumno[i].getGrupo()<<endl;
		cout<<"	Líder: "<<alumno[i].getLider()<<endl;
		cout<<endl;
	}
	system("pause");
}


void lista_desc_comp(list <Alumno> &lista, Alumno alumno[NUM]){
	for(int i = lista.size(); i >= 1; i--){
		cout<<"	Nombre: "<<alumno[i].getNombre()<<endl;
		cout<<"	Apellidos: "<<alumno[i].getApellidos()<<endl;
		cout<<"	email: "<<alumno[i].getEmail()<<endl;
		cout<<"	Dirección: "<<alumno[i].getDireccion()<<endl;
		cout<<"	DNI: "<<alumno[i].getDni()<<endl;
		cout<<"	Fecha nacimiento: "<<alumno[i].getFecha_nacimiento()<<endl;
		cout<<"	Teléfono: "<<alumno[i].getTelefono()<<endl;
		cout<<"	Curso más alto: "<<alumno[i].getCurso_mas_alto()<<endl;
		cout<<"	Grupo: "<<alumno[i].getGrupo()<<endl;
		cout<<"	Líder: "<<alumno[i].getLider()<<endl;
		cout<<endl;
	}
	system("pause");
}


void lista_asc_redu(list <Alumno> &lista, Alumno alumno[NUM]){
	for(int i = 1; i <= lista.size(); i++){
		cout<<"	Nombre: "<<alumno[i].getNombre()<<endl;
		cout<<"	Apellidos: "<<alumno[i].getApellidos()<<endl;
		cout<<"	email: "<<alumno[i].getEmail()<<endl;
		cout<<"	Dirección: "<<alumno[i].getDireccion()<<endl;
		cout<<"	DNI: "<<alumno[i].getDni()<<endl;
		cout<<"	Fecha nacimiento: "<<alumno[i].getFecha_nacimiento()<<endl;
		cout<<"	Teléfono: "<<alumno[i].getTelefono()<<endl;
		cout<<"	Curso más alto: "<<alumno[i].getCurso_mas_alto()<<endl;
		cout<<endl;
	}
	system("pause");
}


void lista_desc_redu(list <Alumno> &lista, Alumno alumno[NUM]){
	for(int i = lista.size(); i >= 1; i--){
		cout<<"	Nombre: "<<alumno[i].getNombre()<<endl;
		cout<<"	Apellidos: "<<alumno[i].getApellidos()<<endl;
		cout<<"	email: "<<alumno[i].getEmail()<<endl;
		cout<<"	Dirección: "<<alumno[i].getDireccion()<<endl;
		cout<<"	DNI: "<<alumno[i].getDni()<<endl;
		cout<<"	Fecha nacimiento: "<<alumno[i].getFecha_nacimiento()<<endl;
		cout<<"	Teléfono: "<<alumno[i].getTelefono()<<endl;
		cout<<"	Curso más alto: "<<alumno[i].getCurso_mas_alto()<<endl;
		cout<<endl;
	}
	system("pause");
}


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

