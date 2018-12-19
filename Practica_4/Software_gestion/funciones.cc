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

	list<Alumno>listaAlumnos;
	list<Datos_alumno> aux;

	int opcion;

	//IMPRESION DEL MENÚ
do{
	cout<<"Las distintas funcionalidades del sistema son:"<<endl<<endl;

	cout<<"-------------------------------------"<<endl;

	cout<<"[1]  Mostrar un alumno/a"<<endl;

	cout<<"[2]  Añadir alumno/a"<<endl;

	cout<<"[3]  Editar datos alumno/a"<<endl;

	cout<<"[4]  Eliminar alumno/a"<<endl;

	cout<<"[5]  Listar alumnos/as"<<endl;

	cout<<"[6]  Cargar fichero"<<endl;

	cout<<"[7]  Guardar fichero"<<endl;

	cout<<"[8]  Realizar copia de seguridad"<<endl;

	cout<<"[9]  Cargar copia de seguridad"<<endl;

	cout<<"[0] Salir"<<endl;

	cout<<"-------------------------------------"<<endl;



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

			Listar_alumnos(aux);

			break;
		case 6:

			cargar_Fichero(aux);

			cout<<"componentes de la lista ---> "<<aux.size()<<endl;

			break;
		case 7:

			guardar_Fichero(listaAlumnos);
			break;

		case 8:

			break;
		case 9:

			break;

	//default:cout<<"El numero introducido no es correcto"<<endl;
	}
}while(opcion!=0);
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

//SOLUCION DE LA LISTA

/*
		list<Alumno>::iterator it;

		for(it=lista.begin();it != lista.end(); it++){

			cout<< it->getNombre() <<endl;
			cout<< it->getApellidos() <<endl;

		}

		int j=lista.size();

		m=lista.back();

		cout<<"-----------------------"<<endl;
		cout<<m.getNombre()<<endl;
*/


	}else{

		cout<<"La lista está completa, no se pueden añadir más alumnos"<<endl;

	}

}

void cargar_Fichero(list<Datos_alumno> &aux){

	//list<Alumno>::iterator it;
	Datos_alumno p;
	//list<Datos_alumno> aux;

	ifstream f;

	f.open("alumnos.bin",ios::in | ios::binary);

	//f.read((char *)&p, sizeof(p));

	//for(it=lista.begin();!f.eof();it++){

	while(!f.eof()){

		f.read((char *)&p, sizeof(p));
/*
		it->setNombre(p.nombre);
		it->setApellidos(p.apellidos);
		it->setDireccion(p.direccion);
		it->setEmail(p.email);
		it->setDni(p.dni);
		it->setFecha_nacimiento(p.fecha_nacimiento);
		it->setTelefono(p.telefono);
		it->setCurso_mas_alto(p.curso);
		it->setGrupo(p.grupo);
		it->setLider(p.lider);
*/

		aux.push_back(p);
/*
		cout<< it->getNombre() <<endl;
		cout<< it->getApellidos() <<endl;
		cout<< it->getDireccion() <<endl;
		cout<< it->getDni() <<endl;
		cout<< it->getEmail() <<endl;
		cout<< it->getFecha_nacimiento() <<endl;
		cout<< it->getTelefono() <<endl;
		cout<< it->getCurso_mas_alto() <<endl;
		cout<< it->getGrupo() <<endl;
		cout<< it->getLider() <<endl;
*/
		cout<<"¿Lista vacia? ---> "<<aux.empty()<<endl;

	}

	f.close();

}

void guardar_Fichero(list<Alumno> &lista){

	list<Alumno>::iterator it;
	Datos_alumno p;
	char nombre[50];
	string aux;

	ofstream f;

	f.open("alumnos.bin",ios::out |ios::binary);

	for(it=lista.begin();it != lista.end();it++){

		aux=it->getNombre();
		strcpy(p.nombre,aux.c_str());
		aux=it->getApellidos();
		strcpy(p.apellidos,aux.c_str());
		aux=it->getDireccion();
		strcpy(p.direccion,aux.c_str());
		aux=it->getDni();
		strcpy(p.dni,aux.c_str());
		aux=it->getEmail();
		strcpy(p.email,aux.c_str());
		aux=it->getFecha_nacimiento();
		strcpy(p.fecha_nacimiento,aux.c_str());
		p.telefono=it->getTelefono();
		p.curso=it->getCurso_mas_alto();
		p.grupo=it->getGrupo();
		p.lider=it->getLider();

		f.write((char *)&p, sizeof(p));

	}

	f.close();

}

void Listar_alumnos(list<Datos_alumno> &lista){

	list<Datos_alumno>::iterator it;

	//if(!lista.empty()){

		for(it=lista.begin();it != lista.end();it++){

			cout<<"Nombre ---> "<<it->nombre<<endl;
			cout<<"Apellidos ---> "<<it->apellidos<<endl;
			cout<<"Direccion ---> "<<it->direccion<<endl;
			cout<<"Email ---> "<<it->email<<endl;
			cout<<"Dni ---> "<<it->dni<<endl;
			cout<<"Fecha de nacimiento ---> "<<it->fecha_nacimiento<<endl;
			cout<<"Telefono ---> "<<it->telefono<<endl;
			cout<<"Curso mas alto en el que esta matriculado ---> "<<it->curso<<endl;
			cout<<"Grupo al que pertenece ---> "<<it->grupo<<endl;
			cout<<"Lider ---> "<<it->lider<<endl;

		}


	//}else{cout<<"La lista esta vacia, debe cargar primero un fichero"<<endl;};

}

void mostrarAlumno(list<Alumno> &lista){
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
