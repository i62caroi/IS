#include<iostream>
#include<string.h>
#include<list>
#include<fstream>
#include "claseALUMNO.h"
#include "clasePROFESOR.h"
#include "funciones.h"
using namespace std;

void menu(string user,string password,string tipo)
{

	list<Alumno> listaAlumnos;

	int opcion;

	//IMPRESION DEL MENÚ

	cout<<"Las distintas funcionalidades del sistema son:"<<endl<<endl;

	cout<<"[1]  Mostrar un alumno/a"<<endl;

	cout<<"[2]  Añadir alumno/a"<<endl;

	cout<<"[3]  Editar datos alumno/a"<<endl;

	cout<<"[4]  Eliminar alumno/a"<<endl;

	cout<<"[5]  Listar alumnos/as"<<endl;

	cout<<"[6]  Cargar fichero"<<endl;

	cout<<"[7]  Guardar fichero"<<endl;

	cout<<"[8]  Realizar copia de seguridad"<<endl;

	cout<<"[9]  Cargar copia de seguridad"<<endl<<endl;



	//RECOGIDA DE LA OPCIÓN ELEGIDA

	cout<<"Introduce el número de la opcion elegida"<<endl;
	cin >> opcion;

	//SWITCH CON CADA UNA DE LAS FUNCIONES

	switch(opcion){

		case 1:
		{
			//MOSTRAR ALUMNO
			char apellidochar[255];
			//char dni[50];

			cout<<"Introduzca el apellido del alumno a mostrar"<<endl;

			cin.ignore();
			cin.getline(apellidochar, 255,'\n');

			//Paso de char a string
			string apellido = apellidochar;
			cout<<"Apellido introducido STRING--> "<<apellido<<endl;


			//Aquí tenemos que pasarle el string apellido a la funcion que lo busca 
			//If no encontramos por apellido o hay coincidencia hacemos la busqueda por 

			








		}

			break;


		case 2:

			anadir_alumno(listaAlumnos);
			break;

		case 3:

			break;

		case 4:

			break;
		case 5:

			break;
		case 6:


			break;
		case 7:

			cout<<"Funcion 7"<<endl;
			break;

		case 8:

			break;
		case 9:

			break;
	}

}

void VerificarCredenciales(struct Datos p){

	ifstream f;
	Datos q;

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

void anadir_alumno(list<Alumno> &lista){

	if(lista.size()<150){

		Alumno p;
		Alumno m;
		string cad;
		int aux;
		bool cad1;

		cout<<"Introduzca el nombre del alumno que desea añadir"<<endl;
		cin.clear();
		cin>>cad;

		p.setNombre(cad);

		cout<<"Introduzca los apellidos del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setApellidos(cad);

		cout<<"Introduzca la direccion del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setDireccion(cad);

		cout<<"Introduzca el email corporativo del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setEmail(cad);

		cout<<"Introduzca el dni del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setDni(cad);

		cout<<"Introduzca la fecha de nacimiento del alumno"<<endl;
		cin.clear();
		cin>>cad;

		p.setFecha_nacimiento(cad);

		cout<<"Introduzca el telefono del alumno"<<endl;
		cin.clear();
		cin>>cad;

		aux=atoi(cad.c_str());
		p.setTelefono(aux);

		cout<<"Introduzca el curso más alto en el que está matriculado el alumno"<<endl;
		cin.clear();
		cin>>cad;

		aux=atoi(cad.c_str());
		p.setCurso_mas_alto(aux);

		cout<<"Introduzca el grupo al que pertenece el alumno"<<endl;
		cin.clear();
		cin>>cad;

		aux=atoi(cad.c_str());
		p.setGrupo(aux);

		cout<<"Introduzca '1' o 'true' si el alumno es lider o '0' o 'false' en caso de no serlo"<<endl;
		cin.clear();
		cin>>cad1;

		p.setLider(cad1);

		lista.push_back(p);

//SOLUCION DE LA PUTA LISTA

/*
		list<Alumno>::iterator it;

		for(it=lista.begin();it != lista.end(); it++){

			cout<< it->getNombre() <<endl;
			cout<< it->getApellidos() <<endl;

		}

		int j=lista.size();

		m=lista.back();

		cout<<"-----------------------"<<endl;
		cout<<"
		cout<<m.getNombre()<<endl;
*/


	}else{

		cout<<"La lista está completa, no se pueden añadir más alumnos"<<endl;

	}

}

void mostrarAlumno(list<Alumno>&lista){
	char apellidochar[255];

	string apellido;
	string dni;

	int tamList=lista.size();
	int aux=lista.max_size();

	Alumno p;

	
	cout<<"Tamano --> "<<tamList<<endl;
	cout<<"Tamano maximo --> "<<aux<<endl;


	cout<<"Introduzca los apellidos del alumno a mostrar"<<endl;

	cin.ignore();
	cin.getline(apellidochar, 255,'\n');

	//Paso de char a string
	apellido = apellidochar;
	cout<<"Apellido introducido STRING--> "<<apellido<<endl;

	list<Alumno>::iterator it;
	
	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(apellido==it->getApellidos()){

			cout<<it->getNombre()<<endl;
			cout<<it->getApellidos()<<endl;
			cout<<it->getEmail()<<endl;
			cout<<it->getDireccion()<<endl;
			cout<<it->getDni()<<endl;
			cout<<it->getFecha_nacimiento()<<endl;
			cout<<it->getTelefono()<<endl;
			cout<<it->getCurso_mas_alto()<<endl;
			cout<<it->getGrupo()<<endl;
			cout<<it->getLider()<<endl;



		}
		
	} 
	


	cout<<"Introduzca el dni del alumno a mostrar"<<endl;

	cin>>dni;

	//Paso de char a string
	cout<<"DNI introducido STRING--> "<<dni<<endl;


}
