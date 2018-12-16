#ifndef ALUMNO_H
#define ALUMNO_H
#include <string.h>

class Alumno {

	private:
		char nombre_;
		char apellidos_;
		char email_;
		char direccion_;
		char dni_;
		char fecha_nacimiento_;
		int telefono_;
		int curso_mas_alto_;
		int grupo_;
		bool lider_;

	public:
	
		/* OBSERVADORES */
		
		inline char getNombre() const{return nombre_;};
		inline char getApellidos() const{return apellidos_;};
		inline char getEmail() const{return email_;};
		inline char getDireccion() const{return direccion_;};
		inline char getDni() const{return dni_;};
		inline char getFecha_nacimiento() const{return fecha_nacimiento_;};
		inline int getTelefono() const{return telefono_;};
		inline int getCurso_mas_alto() const{return curso_mas_alto_;};
		inline int getGrupo() const{return grupo_;};
		inline bool getLider() const{return lider_;};
		
		
		/* MODIFICADORES */

		inline void setNombre(char n_nombre){nombre_=n_nombre;};
		inline void setApellidos(char n_apellidos){apellidos_=n_apellidos;};
		inline void setEmail(char n_email){email_=n_email;};
		inline void setDireccion(char n_direccion){direccion_=n_direccion;};
		inline void setDni(char n_dni){dni_=n_dni;};
		inline void setFecha_nacimiento(char n_fecha){fecha_nacimiento_=n_fecha;};
		inline void setTelefono(int n_telefono){telefono_=n_telefono;};
		inline void setCurso_mas_alto(int n_curso){curso_mas_alto_=n_curso;};
		inline void setGrupo(int n_grupo){grupo_=n_grupo;};
		inline void setLider(bool lider){lider_=lider;};
	};


#endif
