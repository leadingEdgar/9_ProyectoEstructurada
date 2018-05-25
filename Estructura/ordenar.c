/*--------------------------------------------------*/
/*Autor:Edgar Alejandro Hernández Hernández         */
/*E-mail:edgarh2014.94@gmail.com                    */
/*Fecha de creación:22/05/2018                      */
/*Fecha de actualizacion:                           */
/*Descripción:Implementación de las funciones de    */
/*ordenacion                                        */
/*--------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numEquipos;

int * ordenarAscendente(Equipo listaEquipo[], int arrayTemp[])
{
  for(int i = 0; i < numEquipos; i++)
  {
    for(int j = i + 1; j < numEquipos; j++)
    {
      if(strcmp(listaEquipo[arrayTemp[i]].nombre, listaEquipo[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Equipo listaEquipo[], int arrayTemp[])
{
  for(int i = 0; i < numEquipos; i++)
  {
    for(int j = i + 1; j < numEquipos; j++)
    {
      if(strcmp(listaEquipo[arrayTemp[i]].nombre, listaEquipo[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
