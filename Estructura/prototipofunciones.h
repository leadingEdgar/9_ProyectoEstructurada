/*----------------------------------------------------------------*/
/* Autor: Hernadez Hernandez Edgar Alejandro                      */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MAT      12        /* Tamanio de la matricula del alumno                */
#define TAM_EST      12        /* Tamanio de la fecha de nacimiento                 */
#define TOTAL_EQUIPO 10        /* Tamanio total del alumno                          */


/* Se define una estructura para modelar los datos de una alumno. */
/* Los miembros de la estructura son:                             */
/*                                    - nombre                    */
/*                                    - matricula                 */
/*                                    - fechaNacimiento           */
/*                                    - sexo                      */
/*                                    - estatura                  */
/*                                    - peso                      */
typedef struct
{
	char nombre[TAM_NOM];
	char directorTecnico[TAM_MAT];
	char estadio[TAM_EST];
	char diferenciaDeGoles;
	int  posicion;
	int  partidosPendientes;
}Equipo;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarEquipo(Equipo);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de alumnos */
Equipo crearNuevoEquipo(void);
void mostrarListaEquipo(Equipo [], int);
void buscarEquipo(Equipo []);
void actualizarEquipo(Equipo []);
void eliminarEquipo(Equipo []);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarAlumno() */
Equipo * eliminarUnEquipo(Equipo [], int);


/* Funciones que permiten ordenar los datos de los alumnos */
int * ordenarAscendente(Equipo [], int []);
int * ordenarDescendente(Equipo [], int []);


#endif
