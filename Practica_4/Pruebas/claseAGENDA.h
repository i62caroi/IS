#ifndef CLASEAGENDA_H
#define CLASEAGENDA_H
#include<iostream>
#include<string>

class Agenda{

	private:

		list<alumno> lista_alumno;

	public:

//MODIFICADORES

		void Anadir_alumno();
		void Editar_alumno();
		void Buscar_alumno();
		void Eliminar_alumno();
		void Listar_alumnos();

};
#endif
