#include<iostream>
#include<string>
#include "clasePROFESOR.h"
using namespace std;


Profesor::Profesor(string user,string password,string tipo){

	user_=user;
	password_=password;
	tipo_=tipo;
	
}

void Profesor::setUser(string user){

	if(tipo_=="ayudante" || tipo_=="Ayudante"){

		cout<<"No tiene permiso para realizar esta accion"<<endl;

	}else{

		if(user==user_){

			cout<<"El nombre de usuario que se desea cambiar es el mismo"<<endl;

		}else{

			user_=user;

		}
	}
}
void Profesor::setPassword(string password){

	if(tipo_=="ayudante" || tipo_=="Ayudante"){

		cout<<"No tiene permiso para realizar esta accion"<<endl;

	}else{

		if(password==password_){

			cout<<"La contraseña que se desea cambiar es la misma"<<endl;

		}else{

			password_=password;

		}

	}

}

void Profesor::setTipo(string tipo){

	if(tipo_=="ayudante" || tipo_=="Ayudante"){

		cout<<"No tiene permiso para realizar esta accion"<<endl;

	}else{

		if(tipo_==tipo){

			cout<<"El tipo al que se desea cambiar es el mismo"<<endl;

		}else{

			tipo_=tipo;

		}

	}

}


void Profesor::Cargar_fichero(){

	string fichero;

	cout<<"Introduzca el nombre del fichero"<<endl;
	cin>>fichero;

	//incompleto, queda terminarlo


}

void Profesor::Guardar_copia_seguridad(string tipo){

	if(tipo=="coordinador"){

		//incompleto, queda terminarlo


	}else{cout<<"No tienes permiso para realizar esta accion"<<endl;}




}
