#include "Agenda.h"
#include "Alumno.h"
#include "funciones.h"
#include <list>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


void Agenda::Anadir_alumno(list <Alumno> &lista){

	if(lista.size() < 150){
	
		Alumno a;
		string nombre, apellidos, email, dir, dni, fecha;
		string cad;
		int tlf, curso, grupo;
		bool lider;
		char extra;
		list<Alumno>::iterator pos;
	
		cout<<"	Introduzca el DNI para comprobar si existe el alumno: ";
		cin>>dni;
		cin.ignore();
		cout<<endl;
		
		if(Buscar_dni(lista, dni) == false){
		
			a.setDni(dni);
	
			cout<<"	Nombre: ";
			getline(cin, nombre);
			a.setNombre(nombre);
	
			cout<<"	Apellidos: ";
			getline(cin, apellidos);
			a.setApellidos(apellidos);
	
			cout<<"	email: ";
			cin>>email;
			a.setEmail(email);
			cin.ignore();
	
			cout<<"	Dirección: ";
			getline(cin, dir);
			a.setDireccion(dir);
	
			cout<<"	Fecha nacimiento (DD-MM-AA): ";
			getline(cin, fecha);
			a.setFecha_nacimiento(fecha);
	
			cout<<"	Teléfono: ";
			cin>>cad;
			tlf = atoi(cad.c_str());
			a.setTelefono(tlf);
			cin.ignore();
	
			cout<<"	Curso más alto: ";
			cin>>cad;
			curso = atoi(cad.c_str());
			a.setCurso_mas_alto(curso);
			cin.ignore();
			cout<<endl;
		
			cout<<"	¿Quiere seguir introduciendo campos? [s/n]: ";
			cin>>extra;
			cin.ignore();
			cout<<endl;
		
			if(extra == 's'){
				cout<<"	Grupo: ";
				cin>>cad;
				grupo = atoi(cad.c_str());
				a.setGrupo(grupo);
				cin.ignore();
				
				if(lista.empty()){
					cout<<"	¿Es líder? Introduzca '1' si lo es o '0' si no lo es: ";
					cin>>lider;
					a.setLider(lider);
					cin.ignore();
				}
				else{
					for(pos = lista.begin(); pos != lista.end(); pos++){
						if(Buscar_lider(lista, grupo) == false){
							cout<<"	¿Es líder? Introduzca '1' si lo es o '0' si no lo es: ";
							cin>>lider;
							a.setLider(lider);
							cin.ignore();
						}
						else{
							cout<<"	Este grupo ya tiene líder, por lo que este alumno no puede serlo."<<endl;
						}
					}
				}
				
			}
			if(extra == 'n'){
					grupo = 0;
					lider = 0;
					a.setGrupo(grupo);
			}
			else{
					cout<<"	Opción inválida."<<endl;
			}
			
			
			lista.push_back(a);
	
			cout<<"\n	Alumno añadido."<<endl;
			cout<<"\n"<<endl;
			
		}
		else{
			cout<<"	El alumno ya existe."<<endl;
		}
	
	}
	else{
		cout<<"	La agenda está completa. No se pueden añadir más alumnos."<<endl;
	}
}




void Agenda::Mostrar_alumno(list<Alumno>&lista){

	string apellidos, dni;
	int opcion = 0; // 1 --> alumno; 2 --> grupo
	int buscar = 0; // 1--> apellidos; 2 --> dni
	int grupo;
	int escritoAp = 0;
	int escritoDni = 0;
	Alumno a;
	list<Alumno>::iterator pos;
	
	cout<<"\n"<<endl;
	cout<<"	[1] Mostrar alumno"<<endl;
	cout<<"	[2] Mostrar grupo"<<endl;
	cout<<endl;
	cout<<"	Escoja una opción: ";
	cin>>opcion;
	cin.ignore();
	cout<<"\n"<<endl;
	
	if(opcion == 1){ // Mostrar alumno
	
		cout<<"	[1] Buscar por apellidos"<<endl;
		cout<<"	[2] Buscar por DNI"<<endl;
		cout<<endl;
		cout<<"	Escoja una opción: ";
		cin>>buscar;
		cin.ignore();
		cout<<endl;
		
		if(buscar == 1){ // Buscar por apellidos
		
			cout<<"	Introduzca los apellidos: ";
			getline(cin, apellidos);
			cout<<endl;
						
			for(pos = lista.begin(); pos != lista.end(); pos++){
				
				if(pos->getApellidos() == apellidos){
				
					cout<<"	Nombre: "<<pos->getNombre()<<endl;
					cout<<"	Apellidos: "<<pos->getApellidos()<<endl;
					cout<<"	email: "<<pos->getEmail()<<endl;
					cout<<"	Dirección: "<<pos->getDireccion()<<endl;
					cout<<"	DNI: "<<pos->getDni()<<endl;
					cout<<"	Fecha nacimiento: "<<pos->getFecha_nacimiento()<<endl;
					cout<<"	Teléfono: "<<pos->getTelefono()<<endl;
					cout<<"	Curso más alto: "<<pos->getCurso_mas_alto()<<endl;
					cout<<"	Grupo: "<<pos->getGrupo()<<endl;
					cout<<"	Líder: "<<pos->getLider()<<endl;
					cout<<"\n"<<endl;
						
					escritoAp++;
				}
			}
			
			if(escritoAp == 0){
				cout<<"	No hay alumnos con esos apellidos."<<endl;
			}
			
			system("pause");
		
		}
		else{
			if(buscar == 2){ // Buscar por DNI
			
				cout<<"	Introduzca el DNI: ";
				cin>>dni;
				cin.ignore();
				cout<<endl;
						
				for(pos = lista.begin(); pos != lista.end(); pos++){
					
					if(pos->getDni() == dni){
				
						cout<<"	Nombre: "<<pos->getNombre()<<endl;
						cout<<"	Apellidos: "<<pos->getApellidos()<<endl;
						cout<<"	email: "<<pos->getEmail()<<endl;
						cout<<"	Dirección: "<<pos->getDireccion()<<endl;
						cout<<"	DNI: "<<pos->getDni()<<endl;
						cout<<"	Fecha nacimiento: "<<pos->getFecha_nacimiento()<<endl;
						cout<<"	Teléfono: "<<pos->getTelefono()<<endl;
						cout<<"	Curso más alto: "<<pos->getCurso_mas_alto()<<endl;
						cout<<"	Grupo: "<<pos->getGrupo()<<endl;
						cout<<"	Líder: "<<pos->getLider()<<endl;
						cout<<"\n"<<endl;
							
						escritoDni++;
					}
				}
				if(escritoDni == 0){
					cout<<"	No hay ningún alumno con este DNI."<<endl;
				}
			
				system("pause");
				
			}
		}
	
	}
	else{
		if(opcion == 2){ // Mostrar grupo
		
			cout<<"	Introduzca el grupo: ";
			cin>>grupo;
			cin.ignore();
			cout<<endl;
			
			if(Buscar_grupo(lista, grupo) == true){
						
				cout<<"\n\n	Participantes del grupo "<<grupo<<":"<<endl;
				cout<<endl;
				
				for(pos = lista.begin(); pos != lista.end(); pos++){
				
					if(pos->getGrupo() == grupo){
		
						if(pos->getLider() == 0){			
							cout<<"	   "<<pos->getNombre()<<" "<<pos->getApellidos()<<endl;	
						}
						else{
							cout<<"	   "<<pos->getNombre()<<" "<<pos->getApellidos()<<" (líder)"<<endl;
						}
					
					}
				
				}
			}
			else{
				cout<<"	No hay alumnos asignados a este grupo."<<endl;
			}
		
		}
	}

}






void Agenda::Listar_alumnos(list <Alumno> &lista){

	list<Alumno>::iterator pos;
	int opcion, campo, orden;
	Alumno alumno[NUM];
	Alumno aux;
	string dni1, dni_1, dni2, dni_2, apellidos1, apellido1_1, apellido1_2, apellidos2, apellido2_1, apellido2_2;
	int pos1, pos2;
	
	if(!lista.empty()){
	
		// Llenamos el vector que se ordenará
		pos = lista.begin();
		for(int i = 1; i <= lista.size(); i++){
			alumno[i].setNombre(pos->getNombre());
			alumno[i].setApellidos(pos->getApellidos());
			alumno[i].setEmail(pos->getEmail());
			alumno[i].setDireccion(pos->getDireccion());
			alumno[i].setDni(pos->getDni());
			alumno[i].setFecha_nacimiento(pos->getFecha_nacimiento());
			alumno[i].setTelefono(pos->getTelefono());
			alumno[i].setCurso_mas_alto(pos->getCurso_mas_alto());
			alumno[i].setGrupo(pos->getGrupo());
			alumno[i].setLider(pos->getLider());
			pos++;
		}
	
		cout<<endl;
		cout<<"	[1] Lista completa"<<endl;
		cout<<"	[2] Lista reducida"<<endl;
		cout<<endl;
		cout<<"	Escoja una opción: ";
		cin>>opcion;
		cin.ignore();
		cout<<"\n"<<endl;
		/* Se comprobará la opción escogida más adelante para evitar 
		escribir el mismo código dos veces, una para lista completa 
		y otra para lista reducida */
		
			
		cout<<endl;
		cout<<"	[1] Ordenar por Nombre"<<endl;
		cout<<"	[2] Ordenar por Apellidos"<<endl;
		cout<<"	[3] Ordenar por DNI"<<endl;
		cout<<"	[4] Ordenar por Curso más alto"<<endl;
		cout<<endl;
		cout<<"	Escoja una opción: ";
		cin>>campo;
		cin.ignore();
		cout<<endl;
		
		switch(campo){
		
			case 1: // Ordenar por Nombre
			
				cout<<endl;
				cout<<"	[1] Orden ascendente"<<endl;
				cout<<"	[2] Orden descendente"<<endl;
				cout<<endl;
				cout<<"	Escoja una opción: ";
				cin>>orden;
				cin.ignore();
				cout<<"\n"<<endl;
				
				// Se ordena el vector por nombre
				for(int i = 1; i <= (lista.size() - 1); i++){
					for(int j = 1; j <= (lista.size() - 1); j++){
						if(alumno[j].getNombre() > alumno[j+1].getNombre()){
							// aux = alumno[j]
							aux.setNombre(alumno[j].getNombre());
							aux.setApellidos(alumno[j].getApellidos());
							aux.setEmail(alumno[j].getEmail());
							aux.setDireccion(alumno[j].getDireccion());
							aux.setDni(alumno[j].getDni());
							aux.setFecha_nacimiento(alumno[j].getFecha_nacimiento());
							aux.setTelefono(alumno[j].getTelefono());
							aux.setCurso_mas_alto(alumno[j].getCurso_mas_alto());
							aux.setGrupo(alumno[j].getGrupo());
							aux.setLider(alumno[j].getLider());
							// alumno[j] = alumno[j+1]
							alumno[j].setNombre(alumno[j+1].getNombre());
							alumno[j].setApellidos(alumno[j+1].getApellidos());
							alumno[j].setEmail(alumno[j+1].getEmail());
							alumno[j].setDireccion(alumno[j+1].getDireccion());
							alumno[j].setDni(alumno[j+1].getDni());
							alumno[j].setFecha_nacimiento(alumno[j+1].getFecha_nacimiento());
							alumno[j].setTelefono(alumno[j+1].getTelefono());
							alumno[j].setCurso_mas_alto(alumno[j+1].getCurso_mas_alto());
							alumno[j].setGrupo(alumno[j+1].getGrupo());
							alumno[j].setLider(alumno[j+1].getLider());
							// alumno[j+1] = aux
							alumno[j+1].setNombre(aux.getNombre());
							alumno[j+1].setApellidos(aux.getApellidos());
							alumno[j+1].setEmail(aux.getEmail());
							alumno[j+1].setDireccion(aux.getDireccion());
							alumno[j+1].setDni(aux.getDni());
							alumno[j+1].setFecha_nacimiento(aux.getFecha_nacimiento());
							alumno[j+1].setTelefono(aux.getTelefono());
							alumno[j+1].setCurso_mas_alto(aux.getCurso_mas_alto());
							alumno[j+1].setGrupo(aux.getGrupo());
							alumno[j+1].setLider(aux.getLider());
						}
					}
				}
				
				if(orden == 1){ // Lista ascendente
					if(opcion == 1){ // Lista ascendente completa (se comprueba aquí para no copiar dos veces el mismo código)
						lista_asc_comp(lista, alumno);
					}
					else{
						if(opcion == 2){ // Lista ascendente reducida
							lista_asc_redu(lista, alumno);
						}
					}
				}
				else{
					if(orden == 2){ // Lista descendente
						if(opcion == 1){ // Lista descendente completa
							lista_desc_comp(lista, alumno);
						}
						else{
							if(opcion == 2){ // Lista descendente reducida
								lista_desc_redu(lista, alumno);
							}
						}
					}
				}
				
				break;
				
				
			case 2: // Ordenar por Apellidos
			
				cout<<endl;
				cout<<"	[1] Orden ascendente"<<endl;
				cout<<"	[2] Orden descendente"<<endl;
				cout<<endl;
				cout<<"	Escoja una opción: ";
				cin>>orden;
				cin.ignore();
				cout<<"\n"<<endl;
				
				// Se ordena el vector por apellidos
				for(int i = 1; i <= (lista.size() - 1); i++){
					for(int j = 1; j <= (lista.size() - 1); j++){
						
						apellidos1 = alumno[j].getApellidos();
						apellidos2 = alumno[j+1].getApellidos();
						pos1 = apellidos1.find(" ");
						pos2 = apellidos2.find(" ");
						apellido1_1 = apellidos1.substr(0, pos1);
						apellido1_2 = apellidos1.substr(pos1+1);
						apellido2_1 = apellidos2.substr(0, pos2);
						apellido2_2 = apellidos2.substr(pos2+1);
						
						if(apellido1_1 > apellido2_1){
							// aux = alumno[j]
							aux.setNombre(alumno[j].getNombre());
							aux.setApellidos(alumno[j].getApellidos());
							aux.setEmail(alumno[j].getEmail());
							aux.setDireccion(alumno[j].getDireccion());
							aux.setDni(alumno[j].getDni());
							aux.setFecha_nacimiento(alumno[j].getFecha_nacimiento());
							aux.setTelefono(alumno[j].getTelefono());
							aux.setCurso_mas_alto(alumno[j].getCurso_mas_alto());
							aux.setGrupo(alumno[j].getGrupo());
							aux.setLider(alumno[j].getLider());
							// alumno[j] = alumno[j+1]
							alumno[j].setNombre(alumno[j+1].getNombre());
							alumno[j].setApellidos(alumno[j+1].getApellidos());
							alumno[j].setEmail(alumno[j+1].getEmail());
							alumno[j].setDireccion(alumno[j+1].getDireccion());
							alumno[j].setDni(alumno[j+1].getDni());
							alumno[j].setFecha_nacimiento(alumno[j+1].getFecha_nacimiento());
							alumno[j].setTelefono(alumno[j+1].getTelefono());
							alumno[j].setCurso_mas_alto(alumno[j+1].getCurso_mas_alto());
							alumno[j].setGrupo(alumno[j+1].getGrupo());
							alumno[j].setLider(alumno[j+1].getLider());
							// alumno[j+1] = aux
							alumno[j+1].setNombre(aux.getNombre());
							alumno[j+1].setApellidos(aux.getApellidos());
							alumno[j+1].setEmail(aux.getEmail());
							alumno[j+1].setDireccion(aux.getDireccion());
							alumno[j+1].setDni(aux.getDni());
							alumno[j+1].setFecha_nacimiento(aux.getFecha_nacimiento());
							alumno[j+1].setTelefono(aux.getTelefono());
							alumno[j+1].setCurso_mas_alto(aux.getCurso_mas_alto());
							alumno[j+1].setGrupo(aux.getGrupo());
							alumno[j+1].setLider(aux.getLider());
						}
						else{
							if(apellido1_1 == apellido2_1){ // Si ambos alumnos tienen el mismo primer apellido
								if(apellido1_2 > apellido2_2){
									// aux = alumno[j]
									aux.setNombre(alumno[j].getNombre());
									aux.setApellidos(alumno[j].getApellidos());
									aux.setEmail(alumno[j].getEmail());
									aux.setDireccion(alumno[j].getDireccion());
									aux.setDni(alumno[j].getDni());
									aux.setFecha_nacimiento(alumno[j].getFecha_nacimiento());
									aux.setTelefono(alumno[j].getTelefono());
									aux.setCurso_mas_alto(alumno[j].getCurso_mas_alto());
									aux.setGrupo(alumno[j].getGrupo());
									aux.setLider(alumno[j].getLider());
									// alumno[j] = alumno[j+1]
									alumno[j].setNombre(alumno[j+1].getNombre());
									alumno[j].setApellidos(alumno[j+1].getApellidos());
									alumno[j].setEmail(alumno[j+1].getEmail());
									alumno[j].setDireccion(alumno[j+1].getDireccion());
									alumno[j].setDni(alumno[j+1].getDni());
									alumno[j].setFecha_nacimiento(alumno[j+1].getFecha_nacimiento());
									alumno[j].setTelefono(alumno[j+1].getTelefono());
									alumno[j].setCurso_mas_alto(alumno[j+1].getCurso_mas_alto());
									alumno[j].setGrupo(alumno[j+1].getGrupo());
									alumno[j].setLider(alumno[j+1].getLider());
									// alumno[j+1] = aux
									alumno[j+1].setNombre(aux.getNombre());
									alumno[j+1].setApellidos(aux.getApellidos());
									alumno[j+1].setEmail(aux.getEmail());
									alumno[j+1].setDireccion(aux.getDireccion());
									alumno[j+1].setDni(aux.getDni());
									alumno[j+1].setFecha_nacimiento(aux.getFecha_nacimiento());
									alumno[j+1].setTelefono(aux.getTelefono());
									alumno[j+1].setCurso_mas_alto(aux.getCurso_mas_alto());
									alumno[j+1].setGrupo(aux.getGrupo());
									alumno[j+1].setLider(aux.getLider());
								}
							}
						}
					}
				}
				
				if(orden == 1){ // Lista ascendente
					if(opcion == 1){ // Lista ascendente completa (se comprueba aquí para no copiar dos veces el mismo código)
						lista_asc_comp(lista, alumno);
					}
					else{
						if(opcion == 2){ // Lista ascendente reducida
							lista_asc_redu(lista, alumno);
						}
					}
				}
				else{
					if(orden == 2){ // Lista descendente
						if(opcion == 1){ // Lista descendente completa
							lista_desc_comp(lista, alumno);
						}
						else{
							if(opcion == 2){ // Lista descendente reducida
								lista_desc_redu(lista, alumno);
							}
						}
					}
				}
			
				break;
				
				
			case 3: // Ordenar por DNI
			
				cout<<endl;
				cout<<"	[1] Orden ascendente"<<endl;
				cout<<"	[2] Orden descendente"<<endl;
				cout<<endl;
				cout<<"	Escoja una opción: ";
				cin>>orden;
				cin.ignore();
				cout<<"\n"<<endl;
				
				// Se ordena el vector por DNI
				for(int i = 1; i <= (lista.size() - 1); i++){
					for(int j = 1; j <= (lista.size() - 1); j++){
						
						dni1 = alumno[j].getDni();
						dni2 = alumno[j+1].getDni();
						dni_1 = dni1.substr(0,8);
						dni_2 = dni2.substr(0,8);
						
						if(dni_1 > dni_2){
							// aux = alumno[j]
							aux.setNombre(alumno[j].getNombre());
							aux.setApellidos(alumno[j].getApellidos());
							aux.setEmail(alumno[j].getEmail());
							aux.setDireccion(alumno[j].getDireccion());
							aux.setDni(alumno[j].getDni());
							aux.setFecha_nacimiento(alumno[j].getFecha_nacimiento());
							aux.setTelefono(alumno[j].getTelefono());
							aux.setCurso_mas_alto(alumno[j].getCurso_mas_alto());
							aux.setGrupo(alumno[j].getGrupo());
							aux.setLider(alumno[j].getLider());
							// alumno[j] = alumno[j+1]
							alumno[j].setNombre(alumno[j+1].getNombre());
							alumno[j].setApellidos(alumno[j+1].getApellidos());
							alumno[j].setEmail(alumno[j+1].getEmail());
							alumno[j].setDireccion(alumno[j+1].getDireccion());
							alumno[j].setDni(alumno[j+1].getDni());
							alumno[j].setFecha_nacimiento(alumno[j+1].getFecha_nacimiento());
							alumno[j].setTelefono(alumno[j+1].getTelefono());
							alumno[j].setCurso_mas_alto(alumno[j+1].getCurso_mas_alto());
							alumno[j].setGrupo(alumno[j+1].getGrupo());
							alumno[j].setLider(alumno[j+1].getLider());
							// alumno[j+1] = aux
							alumno[j+1].setNombre(aux.getNombre());
							alumno[j+1].setApellidos(aux.getApellidos());
							alumno[j+1].setEmail(aux.getEmail());
							alumno[j+1].setDireccion(aux.getDireccion());
							alumno[j+1].setDni(aux.getDni());
							alumno[j+1].setFecha_nacimiento(aux.getFecha_nacimiento());
							alumno[j+1].setTelefono(aux.getTelefono());
							alumno[j+1].setCurso_mas_alto(aux.getCurso_mas_alto());
							alumno[j+1].setGrupo(aux.getGrupo());
							alumno[j+1].setLider(aux.getLider());
						}
					}
				}
				
				
				if(orden == 1){ // Lista ascendente
					if(opcion == 1){ // Lista ascendente completa (se comprueba aquí para no copiar dos veces el mismo código)
						lista_asc_comp(lista, alumno);
					}
					else{
						if(opcion == 2){ // Lista ascendente reducida
							lista_asc_redu(lista, alumno);
						}
					}
				}
				else{
					if(orden == 2){ // Lista descendente
						if(opcion == 1){ // Lista descendente completa
							lista_desc_comp(lista, alumno);
						}
						else{
							if(opcion == 2){ // Lista descendente reducida
								lista_desc_redu(lista, alumno);
							}
						}
					}
				}
			
				break;
				
				
			case 4: // Ordenar por curso
			
				cout<<endl;
				cout<<"	[1] Orden ascendente"<<endl;
				cout<<"	[2] Orden descendente"<<endl;
				cout<<endl;
				cout<<"	Escoja una opción: ";
				cin>>orden;
				cin.ignore();
				cout<<"\n"<<endl;
				
				// Se ordena el vector por curso
				for(int i = 1; i <= (lista.size() - 1); i++){
					for(int j = 1; j <= (lista.size() - 1); j++){
						if(alumno[j].getCurso_mas_alto() > alumno[j+1].getCurso_mas_alto()){
							// aux = alumno[j]
							aux.setNombre(alumno[j].getNombre());
							aux.setApellidos(alumno[j].getApellidos());
							aux.setEmail(alumno[j].getEmail());
							aux.setDireccion(alumno[j].getDireccion());
							aux.setDni(alumno[j].getDni());
							aux.setFecha_nacimiento(alumno[j].getFecha_nacimiento());
							aux.setTelefono(alumno[j].getTelefono());
							aux.setCurso_mas_alto(alumno[j].getCurso_mas_alto());
							aux.setGrupo(alumno[j].getGrupo());
							aux.setLider(alumno[j].getLider());
							// alumno[j] = alumno[j+1]
							alumno[j].setNombre(alumno[j+1].getNombre());
							alumno[j].setApellidos(alumno[j+1].getApellidos());
							alumno[j].setEmail(alumno[j+1].getEmail());
							alumno[j].setDireccion(alumno[j+1].getDireccion());
							alumno[j].setDni(alumno[j+1].getDni());
							alumno[j].setFecha_nacimiento(alumno[j+1].getFecha_nacimiento());
							alumno[j].setTelefono(alumno[j+1].getTelefono());
							alumno[j].setCurso_mas_alto(alumno[j+1].getCurso_mas_alto());
							alumno[j].setGrupo(alumno[j+1].getGrupo());
							alumno[j].setLider(alumno[j+1].getLider());
							// alumno[j+1] = aux
							alumno[j+1].setNombre(aux.getNombre());
							alumno[j+1].setApellidos(aux.getApellidos());
							alumno[j+1].setEmail(aux.getEmail());
							alumno[j+1].setDireccion(aux.getDireccion());
							alumno[j+1].setDni(aux.getDni());
							alumno[j+1].setFecha_nacimiento(aux.getFecha_nacimiento());
							alumno[j+1].setTelefono(aux.getTelefono());
							alumno[j+1].setCurso_mas_alto(aux.getCurso_mas_alto());
							alumno[j+1].setGrupo(aux.getGrupo());
							alumno[j+1].setLider(aux.getLider());
						}
					}
				}
				
				if(orden == 1){ // Lista ascendente
					if(opcion == 1){ // Lista ascendente completa (se comprueba aquí para no copiar dos veces el mismo código)
						lista_asc_comp(lista, alumno);
					}
					else{
						if(opcion == 2){ // Lista ascendente reducida
							lista_asc_redu(lista, alumno);
						}
					}
				}
				else{
					if(orden == 2){ // Lista descendente
						if(opcion == 1){ // Lista descendente completa
							lista_desc_comp(lista, alumno);
						}
						else{
							if(opcion == 2){ // Lista descendente reducida
								lista_desc_redu(lista, alumno);
							}
						}
					}
				}
			
				break;
				
				
			default:
				cout<<"	Opción inválida."<<endl;
		
		}
	
	}
	else{
		cout<<"\n	No hay alumnos en la agenda."<<endl;
	}

}





bool Agenda::Buscar_apellidos(list <Alumno> lista, string apellidos) {

	list<Alumno>::iterator pos;
	
	for(pos = lista.begin(); pos != lista.end(); pos++){
		
		if(pos->getApellidos() == apellidos){
			return true;
		}
	}
	
	return false;
	
}



bool Agenda::Buscar_dni(list <Alumno> lista, string dni) {
	
	list<Alumno>::iterator pos;
	
	for(pos = lista.begin(); pos != lista.end(); pos++){
		
		if(pos->getDni() == dni){
			return true;
		}
		else{
			return false;
		}
	}	
}


bool Agenda::Buscar_grupo(list <Alumno> lista, int grupo) {
	
	list<Alumno>::iterator pos;
	
	for(pos = lista.begin(); pos != lista.end(); pos++){
		
		if(pos->getGrupo() == grupo){
			return true;
		}
		else{
			return false;
		}
	}
	
}


bool Agenda::Buscar_lider(list <Alumno> lista, int grupo){

	list<Alumno>::iterator pos;
	
	for(pos = lista.begin(); pos != lista.end(); pos++){
	
		if(pos->getGrupo() == grupo){
		
			if(pos->getLider() == 1){
				return true;
			}
		}
	}
}



