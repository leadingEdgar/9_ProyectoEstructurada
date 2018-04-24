/*Autor:Edgar Alejandro Hernandez  Hernandez    */
/*E-mail:edgarh2014.94@gmail.com                */
/*Fecha de creación:21/04/2018                  */
/*Fecha de modificación:22/04/2018              */
/*Descripción:Crear matrices                    */

/*Declaración de la biblioteca*/

#include <stdio.h>

/*Declaracion del tamaño de la matriz con define*/

#define N 3
#define M 5
#define O 4

/*Declaracion de la función principal*/
int main(void)
{
      int matriz [N][M],i,j;      /*Declaración de las variables*/
      int matriz2 [N][N];
      int matriz3 [N][N];

      for (i=0; i<N; i++)
      {
          for (j= 0;j<M; j++)
          {

              printf("Inserte valores a las posiciones [%d][%d]:\n",i+1,j+1);
              scanf("%d",&matriz[i][j]);
          }

      }

  for (i=0; i<N; i++)
  {
      for (j= 0;j<M; j++)
      {
        printf("%d\t",matriz[i][j]);
      }
      printf("\n");
  }

 for (i=0; i<N; i++)
      {
          for (j= 0;j<N; j++)
          {

              printf("Inserte valores a las posiciones [%d][%d]:\n",i+1,j+1);
              scanf("%d",&matriz2[i][j]);
          }

      }

  for (i=0; i<N; i++)
  {
      for (j= 0;j<N; j++)
      {
        printf("%d\n",matriz2[i][j]);
      }
      printf("\n");
  }
 


  for (i=0; i<N; i++)
      {
          for (j= 0;j<N; j++)
          {

              printf("Inserte valores a las posiciones [%d][%d]:\n",i+1,j+1);
              scanf("%d",&matriz3[i][j]);
          }

      }

  for (i=0; i<N; i++)
  {
      for (j= 0;j<N; j++)
      {
        printf("%d",matriz3[i][j]);
      }
      printf("\n");
  }

  return 0;
}
