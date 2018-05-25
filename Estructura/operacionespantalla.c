/*--------------------------------------------------*/
/*Autor:Edgar Alejandro Hernández Hernández         */
/*E-mail:edgarh2014.94@gmail.com                    */
/*Fecha de creación:22/05/2018                      */
/*Fecha de actualizacion:                           */
/*Descripción:Implementación de las funciones del   */
/*menú principal                                    */
/*--------------------------------------------------*/

//Declaración de las bibliotecas

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L   D E    L O S     E Q U I P O S " _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de equipos");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de los equipos");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de los equipos  de manera ascendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de los equipos  de manera descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar equipo");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar equipo");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar equipo");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\tDIFERENCIA DE GOLES\t|   PARTDIOS PENDIENTES    |      POSICION     |", "NOMBRE", "DIRECTOR TECNICO", "\tESTADIO");
  printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarEquipo(Equipo equipo)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|\t\t\t%-18s|\t%d\t|\t%d\t|\t%d\t|", equipo.nombre, equipo.directorTecnico, equipo.estadio, equipo.posicion, equipo.diferenciaDeGoles, equipo.partidosPendientes);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
