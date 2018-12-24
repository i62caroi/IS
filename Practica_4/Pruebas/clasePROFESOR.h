#ifndef CLASEPROFESOR_H
#define CLASEPROFESOR_H
#include<iostream>
#include<string>
using namespace std;

class Profesor{

	private:

		string user_;
		string password_;
		string tipo_;

	public:

//CONSTRUCCTOR

		Profesor(string user="",string password="",string tipo="");

//OBSERVADORES

		inline string getUser() const{return user_;};
		inline string getPassword() const{return password_;};
		inline string getTipo() const{return tipo_;};


//MODIFICADORES

		void setUser(string user);
		void setPassword(string password);
		void setTipo(string tipo);
		void Cargar_fichero();
		void Guardar_copia_seguridad(string tipo);
};


#endif
