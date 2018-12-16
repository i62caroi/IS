#include "Agenda.h"
#include "Alumno.h"
#include <list>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/*
void Agenda::Anadir_alumno(list<Alumno>&lista){

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

		lista.push_back(p);*/

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

/*
	}else{

		cout<<"La lista está completa, no se pueden añadir más alumnos"<<endl;

	}

}*/












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




















/*
void Agenda::Listar_alumnos(list<Alumno>&lista){

	list<Alumno>::iterator it;

	//if(!lista.empty()){

		for(it=lista.begin();it != lista.end();it++){

			cout<<"Nombre ---> "<<it->getNombre()<<endl;
			cout<<"Apellidos ---> "<<it->getApellidos()<<endl;
			cout<<"Direccion ---> "<<it->getDireccion()<<endl;
			cout<<"Email ---> "<<it->getEmail()<<endl;
			cout<<"Dni ---> "<<it->getDni()<<endl;
			cout<<"Fecha de nacimiento ---> "<<it->getFecha_nacimiento()<<endl;
			cout<<"Telefono ---> "<<it->getTelefono()<<endl;
			cout<<"Curso mas alto en el que esta matriculado ---> "<<it->getCurso_mas_alto()<<endl;
			cout<<"Grupo al que pertenece ---> "<<it->getGrupo()<<endl;
			cout<<"Lider ---> "<<it->getLider()<<endl;

		}


	//}else{cout<<"La lista esta vacia, debe cargar primero un fichero"<<endl;};

}*/






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
