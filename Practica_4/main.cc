#include<iostream>
#include<string>
#include<fstream>
#include "clasePROFESOR.h"
#include "claseALUMNO.h"
#include "funciones.h"
using namespace std;

int main(){

	int eleccion=0;

	cout<<"1.-Iniciar sesion"<<endl;
	cout<<"2.-Salir"<<endl;
	cin>>eleccion;


switch(eleccion){

	case 1:
	{
		Datos p;

		cout<<"¿Cual es su nombre de usuarios?"<<endl;
		cin>>p.user;

		cout<<"¿Cual es su contraseña?"<<endl;
		cin>>p.password;

		VerificarCredenciales(p);
	}	

	break;


	case 2:
	{
		exit(1);
	}
	break;

	default:cout<<"El numero introduccido no corresponde con ninguna eleccion"<<endl;

}



}
