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












/*
void Agenda::Editar_alumno(list<Alumno>&lista){

	char apellidochar[255];

	string apellido;
	string dni;


	cout<<"Introduzca los apellidos del alumno a mostrar(editar)"<<endl;
	cin.ignore();
	cin.getline(apellidochar, 255,'\n');

	apellido=apellidochar;

	list<Alumno>::iterator it;

	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(apellido==it->getApellidos()){	
			//Aqui editamos los campos del alumno

		}

	}


	//Si se produce la coincidendia de apellidos

	cout<<"Introduzca el dni del alumno a mostrar"<<endl;
	cin>>dni;

	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(dni==it->getDni()){
			//Aqui editamos los campos del alumno
		}

	}

	//Paso de char a string
	cout<<"DNI introducido STRING--> "<<dni<<endl;

}
*/


void Agenda::Editar_alumno(list <Alumno> &Lista){

	string dni, cad;
	char extra;
	int opcion, dat, grupo;
	int cambioG = 0; /* Para comprobar si se ha cambiado el grupo. Esta variable se utilizará a la hora de cambiar el campo de líder */
	bool lider;
	list<Alumno>::iterator pos;
	list<Alumno>::iterator pos2;
	
	cout<<"	Introduzca los apellidos para comprobar si existe el alumno: ";
	cin>>dni;
	cin.ignore();
	cout<<"\n"<<endl;
	
	if(!lista.empty()){
		if(Buscar_dni(lista, dni) == true){
		
			for(pos = lista.begin(); pos != lista.end(); pos++){
				if(pos->getDni() == dni){
				
					do{
				
						cout<<"	Datos del alumno:\n"<<endl;
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
						
						if(cambioG == 0){
							grupo = pos->getGrupo();
						}
					
						cout<<"	[1] Nombre"<<endl;
						cout<<"	[2] Apellidos"<<endl;
						cout<<"	[3] email"<<endl;
						cout<<"	[4] Dirección"<<endl;
						cout<<"	[5] DNI"<<endl;
						cout<<"	[6] Fecha de nacimiento"<<endl;
						cout<<"	[7] Teléfono"<<endl;
						cout<<"	[8] Curso más alto"<<endl;
						cout<<"	[9] Grupo"<<endl;
						cout<<"	[10] ¿Es líder?"<<endl;
						cout<<"	[0] Ninguno\n"<<endl;
						cout<<"	Introduzca el campo que quiere modificar: ";
						cin>>opcion;
						cin.ignore();
						cout<<"\n"<<endl;
					
						switch(opcion){
					
							case 1:
								cout<<"	Nuevo nombre: ";
								getline(cin, cad);
								pos->setNombre(cad);
								cout<<"\n"<<endl;
								
								break;
						
						
							case 2:
								cout<<"	Nuevos apellidos: ";
								getline(cin, cad);
								pos->setApellidos(cad);
								cout<<"\n"<<endl;
								
								break;
						
						
							case 3:
								cout<<"	Nuevo email: ";
								cin>>cad;
								pos->setEmail(cad);
								cin.ignore();
								cout<<"\n"<<endl;
								
								break;
							
							
							case 4:
								cout<<"	Nueva dirección: ";
								getline(cin, cad);
								pos->setDireccion(cad);
								cout<<"\n"<<endl;
								
								break;
							
							
							case 5:
								cout<<"	Nuevo DNI: ";
								cin>>cad;
								pos->setDni(cad);
								cin.ignore();
								cout<<"\n"<<endl;
								
								break;
							
							
							case 6:
								cout<<"	Nueva fecha de nacimiento (DD-MM-AA): ";
								cin>>cad;
								pos->setFecha_nacimiento(cad);
								cin.ignore();
								cout<<"\n"<<endl;
								
								break;
							
							
							case 7:
								cout<<"	Nuevo teléfono: ";
								cin>>cad;
								dat = atoi(cad.c_str());
								pos->setTelefono(dat);
								cin.ignore();
								cout<<"\n"<<endl;
								
								break;
							
							
							case 8:
								cout<<"	Nuevo curso más alto: ";
								cin>>cad;
								dat = atoi(cad.c_str());
								pos->setCurso_mas_alto(dat);
								cin.ignore();
								cout<<"\n"<<endl;
								
								break;
							
							
							case 9:
								cout<<"	Nuevo grupo: ";
								cin>>cad;
								dat = atoi(cad.c_str());
								pos->setGrupo(dat);
								cin.ignore();
								cambioG = 1;
								grupo = pos->getGrupo();
								if(Buscar_lider(lista, grupo) == true){
									pos->setLider(lider);
									cout<<"	El nuevo grupo ya tenía un líder, por lo que este alumno no puede serlo."<<endl;
								}
								cout<<"\n"<<endl;
								
								break;
							
							
							case 0:
								
								cout<<"	¿Es líder? Introduzca '1' si lo es o '0' si no lo es: ";
								cin>>lider;
								cin.ignore();
								if(lider == 0){ // No va a ser líder
									pos->setLider(lider);
									cout<<"\n"<<endl;
								}
								else{
									if(lider == 1){ // Va a ser líder
										if(Buscar_lider(lista, grupo) == false){ // Comprobamos si el grupo ya tiene líder
											pos->setLider(lider);
											cout<<"\n"<<endl;
										}
										else{
											cout<<"	Este grupo ya tiene líder, por lo que este alumno no puede serlo."<<endl;
										}
									}
								}	
						
								break;
								
								
							default:
								cout<<"	Opción inválida."<<endl;
							
					
						}
					
					}while(opcion != 0);
				
				}
			}
				
		}
		else{
			cout<<"	El alumno no existe."<<endl;
		}
	}
	else{
		cout<<"	La agenda está vacía."<<endl;
	}

}











/*
void Agenda::Eliminar_alumno(list<Alumno>&lista){

	char apellidochar[255];

	string apellido;
	string dni;


	cout<<"Introduzca los apellidos del alumno a eliminar(editar)"<<endl;
	cin.ignore();
	cin.getline(apellidochar, 255,'\n'); 

	apellido=apellidochar;

	list<Alumno>::iterator it;

	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(apellido==it->getApellidos()){

			//Aqui eliminamos al alumno
		}
	}




	//Si se produce la coincidendia de apellidos entonces pedidos al usuario que introduzca el dni por teclado

	cout<<"Introduzca el dni del alumno a mostrar"<<endl;
	cin>>dni;

	//Paso de char a string
	cout<<"DNI introducido STRING--> "<<dni<<endl;


	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(dni==it->getDni()){
			//Aqui eliminamos al alumno

		}
	}
}

*/
/*

void Agenda::Eliminar_alumno(list <Alumno> &lista){

	char apellidos;
	
	cout<<"

}*/














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
		
			system("pause");
		
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






// -------- LISTAR JOSE ---------
/*
void listarAlumnos(list<Alumno>&lista){

	//LISTAR ALUMNOS POR TERMINAL
	//Estructura de tabla
	printf("LISTA DE ALUMNOS\n");
*/

	//LISTAR ALUMNOS MEDIANTE ARCHIVO ****HTML****
/*
	int n_alumnos=lista.size();
	
	string nombre="Jose";
	string apellidos="Dominguez Garcia";

	ofstream ficheroSalida;

	ficheroSalida.open("temporal.html");

	//Ejemplo de archivo html todo introducido manualmente (Es decir, así no se hace, es unicamente una comprobación de formato)
	//ficheroSalida << "<html><head><title>Lista de Alumnos</title></head><body><h1 align=center>LISTA DE ALUMNOS</h1><table border=5  align=center><tr><th>Nombre</th><th>Apellidos</th><th>Email</th><th>Dirección</th><th>DNI</th><th>Fecha Nacimiento</th><th>Teléfono</th><th>Curso más alto</th><th>Grupo</th><th>Líder</th></tr><tr><td>Robert</td><td>Downey Jr</td><td>i62dogaj@uco.es</td><td>Callese Viejo Lesbiano</td><td>738924341V</td><td>23/2/1912</td><td>824238324</td><td>3</td><td>1</td><td>No</td></tr></table></body></html>";


	//Introduccion de datos en html mediante el recorrido de la lista (falta comprobar su funcionamiento)
	ficheroSalida << "<html><head><title>Lista de Alumnos</title></head><body><h1 align=center>LISTA DE ALUMNOS</h1><table border=5  align=center><tr><th>Nombre</th><th>Apellidos</th><th>Email</th><th>Direccion</th><th>DNI</th><th>Fecha Nacimiento</th><th>Telefono</th><th>Curso mas alto</th><th>Grupo</th><th>Lider</th></tr>";


	//Supuesto correcta funcion, falta probarla
	list<Alumno>::iterator it;

	for (it=lista.begin(); it!=lista.end(); it++)
	{
		ficheroSalida << "<tr><td>"<<it->getNombre()<<"</td><td>"<<it->getApellidos()<<"</td><td>"<<it->getEmail()<<"</td><td>"<<it->getDireccion()<<"</td><td>"<<it->getDni()<<"</td><td>"<<it->getFecha_nacimiento()<<"</td><td>"<<it->getTelefono()<<"</td><td>"<<it->getCurso_mas_alto()<<"</td><td>"<<it->getGrupo()<<"</td><td>"<<it->getLider()<<"</td></tr>";
	}


	//Prueba que funciona
	for (int i = 0; i < 5; ++i)
	{
				ficheroSalida << "<tr><td>"<<nombre<<"</td><td>"<<apellidos<<"</td><td>"<<it->getEmail()<<"</td><td>"<<it->getDireccion()<<"</td><td>"<<it->getDni()<<"</td><td>"<<it->getFecha_nacimiento()<<"</td><td>"<<it->getTelefono()<<"</td><td>"<<it->getCurso_mas_alto()<<"</td><td>"<<it->getGrupo()<<"</td><td>"<<it->getLider()<<"</td></tr>";

	}


	ficheroSalida.close();

	sleep(1);
	system("open temporal.html");

	sleep(1);

	system("rm temporal.html");
	*/
//}














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



