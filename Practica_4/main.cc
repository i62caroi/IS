#include<iostream>
#include<string>
#include<fstream>
#include "clasePROFESOR.h"
using namespace std;

int main(){

	int eleccion=0;

	cout<<"1.-Iniciar sesion"<<endl;
	cout<<"2.-Salir"<<endl;
	cin>>eleccion;


switch (eleccion) {

	case 1:

		Profesor p;

		string user;
		char *aux_user;
		string password;
		string aux_password;

		ifstream fichero_entrada;	 //lectura

		cout<<"Nombre de usuario"
		cin>>user;

		cout<<"Password"<<endl;
		cin>>password;

		fichero_entrada.open("registro_usuarios.bin",ios::in | ios::binary);

		

	break;


	case 2: exit(1);

	break;

	default:cout<<"El numero introduccido no corresponde con ninguna eleccion"<<endl;



}



}
