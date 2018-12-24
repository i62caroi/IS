#ifndef FUNTION_H
#define FUNTION_H

#include<iostream>
#include<list>
#include"profesor.h"
#include"alumno.h"
using namespace std;

void VerificarCredenciales(profesor p);
void registrar_profesor(profesor q);
void menu(profesor p);
void cargar_fichero(list<alumno>&lista);
void guardar_fichero(list<alumno>&lista);
void listar_alumnos(list<alumno>&lista);
void mostrar_alumno(list<alumno>&lista);
void anadir_alumno(list<alumno>&lista);
void editar_datos(list<alumno>&lista);
void eliminar_alumno(list<alumno>&lista);
void realizar_copia_seguridad(list<alumno>&lista);

#endif
