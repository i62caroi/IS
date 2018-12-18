#include "Agenda.h"
#include "Alumno.h"
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
	
		cout<<"	DNI: ";
		cin>>dni;
		a.setDni(dni);
		cin.ignore();
	
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
	
		cout<<"	Grupo: ";
		cin>>cad;
		grupo = atoi(cad.c_str());
		a.setGrupo(grupo);
		cin.ignore();
	
		cout<<"	¿Es líder? Introduzca '1' si lo es o '0' si no lo es: ";
		cin>>lider;
		a.setLider(lider);
		cin.ignore();

	
		lista.push_back(a);
	
		cout<<"\n	Alumno añadido."<<endl;
		cout<<"\n"<<endl;
	
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

void Agenda::Mostrar_alumno(list<Alumno>&lista){
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


	//Utilizamos un iterador para realizar la busqueda por apellido del alumno
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
	*/
/*------------------------------------------------------------*/

	//Si se produce la coincidendia de apellidos
/*
	cout<<"Introduzca el dni del alumno a mostrar"<<endl;
	cin>>dni;

	cout<<"DNI introducido STRING--> "<<dni<<endl;

	for (it=lista.begin(); it!=lista.end(); it++)
	{
		if(dni==it->getDni()){

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
}
*/





















void Agenda::Listar_alumnos(list <Alumno> &lista){

	list<Alumno>::iterator pos;
	
	if(!lista.empty()){

		for(pos = lista.begin(); pos != lista.end(); pos++){
	
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
	
		}
	
	}
	else{
		cout<<"	No hay alumnos en la agenda."<<endl;
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













/*
bool Agenda::Buscar_apellidos(char apellidos) {
	// TODO - implement Agenda::Buscar_apellidos
	throw "Not yet implemented";
}

bool Agenda::Buscar_dni(char dni) {
	// TODO - implement Agenda::Buscar_dni
	throw "Not yet implemented";
}

bool Agenda::Buscar_grupo(int grupo) {
	// TODO - implement Agenda::Buscar_grupo
	throw "Not yet implemented";
}*/
