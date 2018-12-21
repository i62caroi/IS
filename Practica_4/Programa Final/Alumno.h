#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <string.h>
using namespace std;

class Alumno{

	private:

		char nombre_[30];
		char apellidos_[60];
		char direccion_[80];
		char dni_[10];
		char email_[20];
		char fecha_[10];
		int telefono_;
		int curso_;
		int grupo_;
		char lider_[30];

	public:

//OBSERVERS

		inline char *getNombre(){return nombre_;};
		inline char *getApellidos(){return apellidos_;};
		inline char *getDireccion(){return direccion_;};
		inline char *getDni(){return dni_;};
		inline char *getEmail(){return email_;};
		inline char *getFecha_nacimiento(){return fecha_;};
		inline int getTelefono() const{return telefono_;};
		inline int getCurso_mas_alto() const{return curso_;};
		inline int getGrupo() const{return grupo_;};
		inline char *getLider() {return lider_;};

//MODIFIERS

		void setNombre(char *nombre);
		void setApellidos(char *apellidos);
		void setDireccion(char *direccion);
		void setDni(char *dni);
		void setEmail(char *email);
		void setFecha_nacimiento(char *fecha);
		void setTelefono(int telefono);
		void setCurso_mas_alto(int curso);
		void setGrupo(int grupo);
		void setLider(char *lider);

};

#endif
