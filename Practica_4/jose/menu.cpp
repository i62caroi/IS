#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
using namespace std;



int menu()
{

	list<alumno> listaAlumnos;



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
			char dnichar[50];

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

			cout<<"Funcion 2"<<endl;
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


	return 0; 
}





