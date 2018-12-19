#ifndef ALUMNO_H
#define ALUMNO_H

#include<iostream>
#include<string.h>
using namespace std;

class alumno{

	private:

		char nombre_[30];
		char apellidos_[60];
		char direccion_[30];
		char dni_[10];
		char email_[20];
		char fecha_[10];
		int telefono_;
		int curso_;
		int grupo_;
		char lider_[30];

	public:

//OBSERVERS

		inline const char *getNombre() const{return nombre_;};
		inline const char *getApellidos() const{return apellidos_;};
		inline const char *getDireccion() const{return direccion_;};
		inline const char *getDni() const{return dni_;};
		inline const char *getEmail() const{return email_;};
		inline const char *getFecha() const{return fecha_;};
		inline const int getTelefono() const{return telefono_;};
		inline const int getCurso() const{return curso_;};
		inline const int getGrupo() const{return grupo_;};
		inline const char *getLider() const{return lider_;};

//MODIFIERS

		void setNombre(char *nombre);
		void setApellidos(char *apellidos);
		void setDireccion(char *direccion);
		void setDni(char *dni);
		void setEmail(char *email);
		void setFecha(char *fecha);
		void setTelefono(int telefono);
		void setCurso(int curso);
		void setGrupo(int grupo);
		void setLider(char *lider);

};

#endif
