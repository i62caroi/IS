#ifndef CODIGO_ANADIR_ALUMNO_H
#define CODIGO_ANADIR_ALUMNO_H
#include<iostream>
#include<string>
using namespace std;


class Añadir_alumno{

	private:

		string nombre_;
		string apellidos_;
		string email_;
		string direccion_;
		string dni_;
		string fecha_nacimiento_;
		int telefono_;
		int curso_mas_alto_;
		int grupo_;
		bool lider_;


	public:

//OBSERVADORES

		inline string getNombre() const{return nombre_;};
		inline string getApellidos() const{return apellidos_;};
		inline string getEmail() const{return email_;};
		inline string getDireccion() const{return direccion_;};
		inline string getDni() const{return dni_;};
		inline string getFecha_nacimiento() const{return fecha_nacimiento_;};
		inline int getTelefono() const{return telefono_;};
		inline int getCurso_mas_alto() const{return curso_mas_alto_;};
		inline int getGrupo() const{return grupo_;};
		int bool getLider() const{return lider_;};

//MODIFICADORES

		void setNombre(string n_nombre);
		void setApellidos(string n_apellidos);
		void setEmail(string n_email);
		void setDireccion(string n_direccion);
		void setDni(string n_dni);
		void setFecha_nacimiento(string n_fecha);
		void setTelefono(int n_telefono);
		void setCurso_mas_alto(int n_curso);
		void setGrupo(int n_grupo);
		void setLider();



}
#endif
