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

		void Cargar_fichero();
		void Guardar_copia_seguridad(string tipo);
};


#endif
