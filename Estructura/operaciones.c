/*--------------------------------------------------*/
/*Autor:Edgar Alejandro Hernández Hernández         */
/*E-mail:edgarh2014.94@gmail.com                    */
/*Fecha de creación:22/05/2018                      */
/*Fecha de actualizacion:                           */
/*Descripción:Implementación de las funciones del   */
/*menú principal                                    */
/*--------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numEquipos;



  Equipo crearNuevoEquipo(void)
{
  Equipo equipo;

  printf(_TBLANCO _NEGRITA "Introduce el nombre del equipo: "              _NNEGRITA _TVERDE);
  fgets(equipo.nombre, TAM_NOM, stdin);                                    /* Solicita el nombre del alumno al usuario          */
  strcpy(equipo.nombre, strtok(equipo.nombre, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el nombre del director tecnico: "           _NNEGRITA _TVERDE);
  fgets(equipo.directorTecnico, TAM_MAT, stdin);                                 /* Solicita la matricula el alumno al usuario        */
  strcpy(equipo.directorTecnico, strtok(equipo.directorTecnico, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el nombre del estadio donde será el juego: " _NNEGRITA _TVERDE);
  fgets(equipo.estadio, TAM_EST, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(equipo.estadio, strtok(equipo.estadio, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Ingresa el numero de diferencia de goles: "                _NNEGRITA _TVERDE);
  scanf("%c", &equipo.diferenciaDeGoles);

  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

  printf(_TBLANCO _NEGRITA "Introduce la posicion del equipo: "            _NNEGRITA _TVERDE);
  scanf("%d", &equipo.posicion);

  printf(_TBLANCO _NEGRITA "Introduce los partidos pendientes: "                _NNEGRITA _TVERDE);
  scanf("%d", &equipo.partidosPendientes);
  printf("\n\n");

  return equipo;
}




void mostrarListaEquipo(Equipo listaEquipo[], int ordenar)
{
  int arrayTemp[numEquipos];
  for(int i = 0; i < numEquipos; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaEquipo, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaEquipo, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numEquipos; i++)
  {
    mostrarEquipo(listaEquipo[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarEquipo(Equipo listaEquipo[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char directorTecnicoBuscar[TAM_MAT];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar equipo por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. Director tecnico \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xNombre:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre del equipo: ");
        fgets(nombreBuscar, TAM_NOM, stdin);
        strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

        for(int i = 0; i < numEquipos; i++)
            if(strcmp(nombreBuscar, listaEquipo[i].nombre) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarEquipo(listaEquipo[i]);
            }
            break;

      case _xDirectorTecnico:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del director tecnico: ");
          fgets(directorTecnicoBuscar, TAM_NOM, stdin);
          strcpy(directorTecnicoBuscar, strtok(directorTecnicoBuscar, "\n"));

          for(int i = 0; i < numEquipos; i++)
          if(strcmp(directorTecnicoBuscar, listaEquipo[i].directorTecnico) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarEquipo(listaEquipo[i]);
          }
          break;
  }
}



void actualizarEquipo(Equipo listaEquipo[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char directorTecnicoBuscar[TAM_MAT];         /* Almacena el directorTecnico a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar el equipo a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. Director Tecnico \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numEquipos; i++)
          {
              if(strcmp(nombreBuscar, listaEquipo[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarEquipo(listaEquipo[i]);

                  printf("\n\n");

                  listaEquipo[i] = crearNuevoEquipo();

                  mostrarEncabezadoTabla();
                  mostrarEquipo(listaEquipo[i]);

                  break;
              }
          }
          break;

      case _xDirectorTecnico:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del director tecnico: ");
          fgets(directorTecnicoBuscar, TAM_MAT, stdin);
          strcpy(directorTecnicoBuscar, strtok(directorTecnicoBuscar, "\n"));

          for(int i = 0; i < numEquipos; i++)
          {
              if(strcmp(directorTecnicoBuscar, listaEquipo[i].directorTecnico) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarEquipo(listaEquipo[i]);

                  printf("\n\n");

                  listaEquipo[i] = crearNuevoEquipo();

                  mostrarEncabezadoTabla();
                  mostrarEquipo(listaEquipo[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarEquipo(Equipo listaEquipo[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char directorTecnicoBuscar[TAM_MAT];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar equipo por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "2. Director tecnico \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del equipo: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numEquipos; i++)
          {
              if(strcmp(nombreBuscar, listaEquipo[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarEquipo(listaEquipo[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaEquipo));
                    listaEquipo = eliminarUnEquipo(listaEquipo, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xDirectorTecnico:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del director tecnico: ");
          fgets(directorTecnicoBuscar, TAM_NOM, stdin);
          strcpy(directorTecnicoBuscar, strtok(directorTecnicoBuscar, "\n"));

          for(int i = 0; i < numEquipos; i++)
          {
              if(strcmp(directorTecnicoBuscar, listaEquipo[i].directorTecnico) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarEquipo(listaEquipo[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaEquipo = eliminarUnEquipo(listaEquipo, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Equipo * eliminarUnEquipo(Equipo listaEquipo[], int posicion)
{
  if(posicion < (numEquipos - 1))
  {
    for(int j = posicion; j < numEquipos-1; j++)
    {
      strcpy(listaEquipo[j].nombre,          listaEquipo[j+1].nombre);
      strcpy(listaEquipo[j].directorTecnico,       listaEquipo[j+1].directorTecnico);
      strcpy(listaEquipo[j].estadio, listaEquipo[j+1].estadio);
      listaEquipo[j].diferenciaDeGoles     = listaEquipo[j+1].diferenciaDeGoles;
      listaEquipo[j].posicion = listaEquipo[j+1].posicion;
      listaEquipo[j].partidosPendientes     = listaEquipo[j+1].partidosPendientes;
    }
  }

  strcpy(listaEquipo[numEquipos-1].nombre,          "");
  strcpy(listaEquipo[numEquipos-1].directorTecnico,       "");
  strcpy(listaEquipo[numEquipos-1].estadio, "");
  listaEquipo[numEquipos-1].diferenciaDeGoles     = '\0';
  listaEquipo[numEquipos-1].posicion = -1;
  listaEquipo[numEquipos-1].partidosPendientes     = -1;

  numEquipos--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaEquipo;
}
