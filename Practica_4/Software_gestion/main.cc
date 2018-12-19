#include<iostream>
#include"profesor.h"
#include"funtion.h"
#include<string.h>
using namespace std;

int main(){

	int eleccion=0;
	cout<<"---------------------------"<<endl;
	cout<<"1.-Iniciar sesion"<<endl;
	cout<<"2.-Registrarse"<<endl;
	cout<<"3.-Salir"<<endl;
	cout<<"---------------------------"<<endl;
	cin>>eleccion;


switch(eleccion){

	case 1:
	{
		profesor p;
		char aux[30];

		cout<<"¿Cual es su nombre de usuario?"<<endl;
		cin>>aux;

		p.setUser(aux);

		cout<<"¿Cual es su contraseña?"<<endl;
		cin>>aux;

		p.setPassword(aux);	

		VerificarCredenciales(p);
	}	

	break;

	case 2:{

		profesor q;
		char aux2[30];

		cout<<"¿Cual será tu nombre de usuario?"<<endl;
		cin>>aux2;

		q.setUser(aux2);

		cout<<"¿Cual será tu contraseña?"<<endl;
		cin>>aux2;

		q.setPassword(aux2);

		cout<<"¿Eres administrador o ayudante?"<<endl;
		cin>>aux2;

		q.setType(aux2);

		registrar_profesor(q);

	}

	case 3:
	{
		exit(1);
	}
	break;

	default:cout<<"El numero introduccido no corresponde con ninguna eleccion"<<endl;

}



}
