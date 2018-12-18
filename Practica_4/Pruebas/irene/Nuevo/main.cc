#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include "Alumno.h"
#include "Profesor.h"
#include "Agenda.h"
#include "funciones.h"
using namespace std;


int main(){

	cout<<endl;
	
	cout<<"\n	BIENVENIDO\n"<<endl;
	
	list<Alumno> lista;
	
	crear_coordinador();
	
	menu_inicio(lista);
	
	cout<<endl;

}
