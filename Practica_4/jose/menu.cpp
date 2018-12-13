#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <list>

#include "menu.h"
#include "claseALUMNO.h"
using namespace std;


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

void editarAlumno(list<Alumno>&lista){


}





void menu(string user, string password, string tipo)
{

	list<Alumno>listaAlumnos;



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
			mostrarAlumno(listaAlumnos);

		}

			break;


		case 2:

			cout<<"Funcion 2"<<endl;
			break;

		case 3:

		{
			editarAlumno(listaAlumnos);
		}

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

		default:

			cout<<"El numero introducido es incorrecto"<<endl;
	}


	
}





