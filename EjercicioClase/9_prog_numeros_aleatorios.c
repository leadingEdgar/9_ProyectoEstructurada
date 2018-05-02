/*Autor:Edgar Alejandro Hernandez Hernandez             */
/*E-mail: edgarh2014.94@gmail.com                       */
/*Fecha de creacion:24/04/2018                          */
/*Fecha de modificación:                                */
/*Descripcion:Ejemplo de matices                        */

/*Declaracion de las bibliotecas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Definicion de constantes*/

#define ROW 3                /*Número de filas de la matriz*/
#define COL 3                /*Número de columna de las matriz*/
#define MAX 100

/*Declaracion de la funcíon principal*/

int main(void)
{
  int array[ROW][COL];
  srand((unsigned)time(NULL));

  /*Inicializar el array con valores enteros aleatorios  de 1-100*/

  for (int i = 0; i < ROW; i++)       /*Ciclo que controla las fila del array*/
  {

    for (int j = 0; j < COL; j++)     /*Ciclo que controla las columnas del array*/
    {
    /*Asignación de datos al array*/
    /*Utilizar la funcion scanf para solicitar datos del usuario*/
    /*Utilizar la función rang() para obtener datos de forma aleatoria*/
    /*La función se encuentra definida dentro de la biblioteca stdlib.h*/

    array[i][j] = rand() % (MAX+1);

    /*Tarea: Para el 27 de abril*/
    /*Generar valores aleatorios de tipo flotante entre 0 -100*/
    /*Ver como no se repiten la misma matriz*/
    }
  }
  printf("\x1b[32m Datos aleatorios de la matriz: array [%d][%d]\n",ROW,COL);
  printf("\x1b[42m Otro mensaje\n");
  printf("\x1b[42m Otro mensaje\n");

  printf("{");
  for (int i = 0; i < ROW; i++)       /*Ciclo que controla las fila del array*/
  {
      printf("{");
    for (int j = 0; j < COL; j++)     /*Ciclo que controla las columnas del array*/
    {
      printf("%d",array[i][j]);
    }
      printf("}");
  }
  printf("}");










  return 0;
}
