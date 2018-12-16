#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string>
#include "Agenda.h"
#include "Profesor.h"
#include "funciones.h"
using namespace std;


class Alumno{

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

		/* OBSERVADORES */

		inline string getNombre() const{return nombre_;};
		inline string getApellidos() const{return apellidos_;};
		inline string getEmail() const{return email_;};
		inline string getDireccion() const{return direccion_;};
		inline string getDni() const{return dni_;};
		inline string getFecha_nacimiento() const{return fecha_nacimiento_;};
		inline int getTelefono() const{return telefono_;};
		inline int getCurso_mas_alto() const{return curso_mas_alto_;};
		inline int getGrupo() const{return grupo_;};
		inline bool getLider() const{return lider_;};

		
		/* MODIFICADORES */

		inline void setNombre(string n_nombre){nombre_=n_nombre;};
		inline void setApellidos(string n_apellidos){apellidos_=n_apellidos;};
		inline void setEmail(string n_email){email_=n_email;};
		inline void setDireccion(string n_direccion){direccion_=n_direccion;};
		inline void setDni(string n_dni){dni_=n_dni;};
		inline void setFecha_nacimiento(string n_fecha){fecha_nacimiento_=n_fecha;};
		inline void setTelefono(int n_telefono){telefono_=n_telefono;};
		inline void setCurso_mas_alto(int n_curso){curso_mas_alto_=n_curso;};
		inline void setGrupo(int n_grupo){grupo_=n_grupo;};
		inline void setLider(bool lider){lider_=lider;};

};

#endif
