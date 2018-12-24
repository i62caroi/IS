#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<list>
#include"profesor.h"
#include"alumno.h"
#include"funtion.h"
using namespace std;

void VerificarCredenciales(profesor p){

	ifstream f;
	profesor q;
	char aux[20];

	f.open("credenciales.bin",ios::in | ios::binary);

	while(f.read((char *)&q, sizeof(q)) && (!f.eof())){

		//cout<<"User ---> "<<q.getUser()<<endl;
		//cout<<"Password ---> "<<q.getPassword()<<endl;

		if((strcmp(q.getUser(),p.getUser()))==0){

			if((strcmp(q.getPassword(),p.getPassword()))==0){

				strcpy(aux,q.getType());
				p.setType(aux);

				menu(p);

			}

		}

	}

	f.close();

}

void registrar_profesor(profesor q){

	ofstream f;

	f.open("credenciales.bin",ios::out | ios::app | ios::binary);

	f.write((char *)&q, sizeof(q));

	f.close();
}

void menu(profesor p){

	int opcion=-1;
	list<alumno> lista;

	while(opcion!=0){

		cout<<"-------------------------------------"<<endl;

		cout<<"[1]  Mostrar un alumno/a"<<endl;//HECHA

		cout<<"[2]  Añadir alumno/a"<<endl;	//HECHA

		cout<<"[3]  Editar datos alumno/a"<<endl;	//HECHA

		cout<<"[4]  Eliminar alumno/a"<<endl;

		cout<<"[5]  Listar alumnos/as"<<endl;	//FALTA LA ESTRUCTURA Y TODAS LAS ORDENACIONES

		cout<<"[6]  Cargar fichero"<<endl;	//HECHA

		cout<<"[7]  Guardar fichero"<<endl;	//HECHA

		cout<<"[8]  Realizar copia de seguridad"<<endl;

		cout<<"[9]  Cargar copia de seguridad"<<endl;

		cout<<"[0] Salir"<<endl;	//HECHA

		cout<<"-------------------------------------"<<endl;



		//RECOGIDA DE LA OPCIÓN ELEGIDA

		cout<<"Introduce el número de la opcion elegida"<<endl;
		cin >> opcion;

		switch(opcion){

			case 1:{

				mostrar_alumno(lista);

			}break;

			case 2:{

				anadir_alumno(lista);

			}break;

			case 3:{

				editar_datos(lista);

			}break;


			case 4:{

				eliminar_alumno(lista);

			}break;


			case 5:{

				listar_alumnos(lista);

			}break;


			case 6:{

				cargar_fichero(lista);

			}break;

			case 7:{

				guardar_fichero(lista);

			}break;


			case 8:{

				realizar_copia_seguridad(lista);

			}break;


			case 9:{



			}break;


		}

	}

}


void cargar_fichero(list<alumno>&lista){

//	list<alumno>::iterator it;
	ifstream f;
	alumno p;

	lista.clear();

	f.open("usuarios.bin",ios::in | ios::binary);

	while((f.read((char *)&p, sizeof(p))) && (!f.eof())){

		lista.push_back(p);

	}
/*
	for(it = lista.begin(); it != lista.end();it++){

		cout<<"Nombre 1 ---> "<<it->getNombre()<<endl;
		cout<<"Apellidos 1 ----> "<<it->getApellidos()<<endl;
		cout<<"Direccion 1 ---> "<<it->getDireccion()<<endl;
		cout<<"Dni 1 ---> "<<it->getDni()<<endl;
		cout<<"Email 1 ---> "<<it->getEmail()<<endl;
		cout<<"Fecha de nacimiento 1 ---> "<<it->getFecha()<<endl;
		cout<<"Curso mas alto 1 ---> "<<it->getCurso()<<endl;
		cout<<"Grupo 1 ---> "<<it->getGrupo()<<endl;
		cout<<"Telefono 1 ---> "<<it->getTelefono()<<endl;
		cout<<"Lider 1 ---> "<<it->getLider()<<endl;


	}
*/
	cout<<"Componentes en la lista ---> "<<lista.size()<<endl;

	f.close();


}

void guardar_fichero(list<alumno>&lista){

	ofstream f;
	alumno p;
	char aux[60];
	list<alumno>::iterator it;

	f.open("usuarios.bin",ios::out | ios::binary);

	for(it = lista.begin();it != lista.end();it++){

		strcpy(aux,it->getNombre());
		p.setNombre(aux);

		strcpy(aux,it->getApellidos());
		p.setApellidos(aux);

		strcpy(aux,it->getDireccion());
		p.setDireccion(aux);

		strcpy(aux,it->getDni());
		p.setDni(aux);

		strcpy(aux,it->getEmail());
		p.setEmail(aux);

		strcpy(aux,it->getFecha());
		p.setFecha(aux);

		p.setCurso(it->getCurso());
		p.setGrupo(it->getGrupo());
		p.setTelefono(it->getTelefono());

		strcpy(aux,it->getLider());
		p.setLider(aux);

		f.write((char *)&p, sizeof(p));

	}

	f.close();
}

void listar_alumnos(list<alumno>&lista){

	list<alumno>::iterator it;
	int opcion=0;

	if(lista.size()!=0){

		cout<<"1.-Lista reducida"<<endl;
		cout<<"2.-Lista compleja"<<endl;
		cin>>opcion;

		switch(opcion){

			case 1:{

				cout<<"1.-Ordenar por Nombre"<<endl;
				cout<<"2.-Ordenador por Apellidos"<<endl;
				cout<<"3.-Ordenador por Dni"<<endl;
				cout<<"4.-Ordenar por curso mas alto"<<endl;
				cin>>opcion;


				switch(opcion){

					case 1:{

						cout<<"1.-Ordenamiento Ascendente"<<endl;
						cout<<"2.-Ordenamiento Descendente"<<endl;
						cin>>opcion;

						switch(opcion){

							case 1:{

								//lista.sort();
								for(it = lista.begin(); it != lista.end();it++){

									cout<<"-------------------------------------"<<endl;
									cout<<"Nombre "<<"---> "<<it->getNombre()<<endl;
									cout<<"Apellidos "<<" ----> "<<it->getApellidos()<<endl;
									cout<<"Direccion "<<" ---> "<<it->getDireccion()<<endl;
									cout<<"Dni "<<" ---> "<<it->getDni()<<endl;
									cout<<"Email "<<" ---> "<<it->getEmail()<<endl;
									cout<<"Fecha de nacimiento "<<" ---> "<<it->getFecha()<<endl;
									cout<<"Curso mas alto "<<" ---> "<<it->getCurso()<<endl;
									cout<<"Telefono "<<" ---> "<<it->getTelefono()<<endl;
									cout<<"-------------------------------------"<<endl;

								}


							}break;

						}

					}break;

				}
				

			}break;





		}
/*
		for(it = lista.begin(); it != lista.end();it++){

			cout<<"-------------------------------------"<<endl;
			cout<<"Nombre "<<"---> "<<it->getNombre()<<endl;
			cout<<"Apellidos "<<" ----> "<<it->getApellidos()<<endl;
			cout<<"Direccion "<<" ---> "<<it->getDireccion()<<endl;
			cout<<"Dni "<<" ---> "<<it->getDni()<<endl;
			cout<<"Email "<<" ---> "<<it->getEmail()<<endl;
			cout<<"Fecha de nacimiento "<<" ---> "<<it->getFecha()<<endl;
			cout<<"Curso mas alto "<<" ---> "<<it->getCurso()<<endl;
			cout<<"Grupo "<<" ---> "<<it->getGrupo()<<endl;
			cout<<"Telefono "<<" ---> "<<it->getTelefono()<<endl;
			cout<<"Lider "<<" ---> "<<it->getLider()<<endl;
			cout<<"-------------------------------------"<<endl;

		}

*/
	}else{cout<<"La lista esta vacia, primero debe cargarla en el sistema"<<endl;};


}

void mostrar_alumno(list<alumno>&lista){

	list<alumno>::iterator it;
	char aux[20];

	if(lista.size() != 0){

		cout<<"¿Introduzca el apellido del alumno que desea ver?"<<endl;
		cin>>aux;

		for(it = lista.begin();it != lista.end();it++){

			if(strcmp(aux,it->getApellidos())==0){

				cout<<"-------------------------------------"<<endl;
				cout<<"Nombre ---> "<<it->getNombre()<<endl;
				cout<<"Apellidos ----> "<<it->getApellidos()<<endl;
				cout<<"Direccion ---> "<<it->getDireccion()<<endl;
				cout<<"Dni ---> "<<it->getDni()<<endl;
				cout<<"Email ---> "<<it->getEmail()<<endl;
				cout<<"Fecha de nacimiento ---> "<<it->getFecha()<<endl;
				cout<<"Curso mas alto ---> "<<it->getCurso()<<endl;
				cout<<"Grupo ---> "<<it->getGrupo()<<endl;
				cout<<"Telefono ---> "<<it->getTelefono()<<endl;
				cout<<"Lider ---> "<<it->getLider()<<endl;
				cout<<"-------------------------------------"<<endl;		

			}

		}

	}

}

void anadir_alumno(list<alumno>&lista){

	alumno p;
	char aux[60];
	int aux2;

	cout<<"¿Cual es el nombre del alumno?"<<endl;
	cin>>aux;

	p.setNombre(aux);

	cin.ignore();

	cout<<"¿Cuales son los apellidos?"<<endl;
	cin>>aux;

	p.setApellidos(aux);

	cin.ignore();

	cout<<"¿Cual es el email corporativo del alumno?"<<endl;
	cin>>aux;

	p.setEmail(aux);

	cin.ignore();

	cout<<"¿Cual es la direccion del alumno?"<<endl;
	cin>>aux;

	p.setDireccion(aux);

	cin.ignore();

	cout<<"¿Cual es el dni del alumno?"<<endl;
	cin>>aux;

	p.setDni(aux);

	cin.ignore();

	cout<<"¿Cual es la fecha de nacimiento del alumno?"<<endl;
	cin>>aux;

	p.setFecha(aux);

	cin.ignore();

	cout<<"¿Cual es el telefono del alumno?"<<endl;
	cin>>aux2;

	p.setTelefono(aux2);

	cin.ignore();

	cout<<"¿Cual es el curso mas alto donde esta matriculado el alumno?"<<endl;
	cin>>aux2;

	p.setCurso(aux2);

	cin.ignore();

	cout<<"¿A que grupo pertenece el alumno?"<<endl;
	cin>>aux2;

	p.setGrupo(aux2);

	cin.ignore();

	cout<<"Introduzca si el alumno es el lider del grupo o no"<<endl;
	cin>>aux;

	p.setLider(aux);

	cin.ignore();


	lista.push_back(p);

}

void editar_datos(list<alumno>&lista){

	char apellido[30];
	char aux[60];
	int aux2;
	list<alumno>::iterator it;

	cout<<"Introduzca el apellido del alumno del que sea modificar sus datos"<<endl;
	cin>>apellido;

	for(it = lista.begin();it != lista.end();it++){

		if((strcmp(apellido,it->getApellidos()))==0){


			cout<<"Introduzca el nuevo nombre"<<endl;
			cin>>aux;

			it->setNombre(aux);

			cin.ignore();

			cout<<"Introduzca la nueva direccion"<<endl;
			cin>>aux;

			it->setDireccion(aux);

			cin.ignore();

			cout<<"Introduzca el nuevo dni"<<endl;
			cin>>aux;

			it->setDni(aux);

			cin.ignore();

			cout<<"Introduzca el nuevo email"<<endl;
			cin>>aux;

			it->setEmail(aux);

			cin.ignore();

			cout<<"Introduzca la nueva fecha de nacimiento"<<endl;
			cin>>aux;

			it->setFecha(aux);

			cin.ignore();

			cout<<"Introduzca el nuevo telefono"<<endl;
			cin>>aux2;

			it->setTelefono(aux2);

			cin.ignore();

			cout<<"Introduzca el nuevo grupo"<<endl;
			cin>>aux2;

			it->setGrupo(aux2);

			cin.ignore();

			cout<<"Introduzca el nuevo curso"<<endl;
			cin>>aux2;

			it->setCurso(aux2);

			cin.ignore();

			cout<<"Introduzca si es lider o no"<<endl;
			cin>>aux;

			it->setLider(aux);

			cin.ignore();

		}


	}
}

void eliminar_alumno(list<alumno>&lista){

	list<alumno>::iterator it;
	char aux[30];

	cout<<"Introduzca el apellido del alumno que desea eliminar"<<endl;
	cin>>aux;


	for(it = lista.begin();it != lista.end();it++){

		if((strcmp(aux,it->getApellidos()))==0){

			lista.erase(it++);

		}

	}

}

void realizar_copia_seguridad(list<alumno>&lista){

	ofstream f;
	alumno p;
	char aux[60];
	list<alumno>::iterator it;

	f.open("usuarios.bin",ios::out | ios::binary);

	for(it = lista.begin();it != lista.end();it++){

		strcpy(aux,it->getNombre());
		p.setNombre(aux);

		strcpy(aux,it->getApellidos());
		p.setApellidos(aux);

		strcpy(aux,it->getDireccion());
		p.setDireccion(aux);

		strcpy(aux,it->getDni());
		p.setDni(aux);

		strcpy(aux,it->getEmail());
		p.setEmail(aux);

		strcpy(aux,it->getFecha());
		p.setFecha(aux);

		p.setCurso(it->getCurso());
		p.setGrupo(it->getGrupo());
		p.setTelefono(it->getTelefono());

		strcpy(aux,it->getLider());
		p.setLider(aux);

		f.write((char *)&p, sizeof(p));

	}

	f.close();

	system("gzip usuarios.bin");
}








