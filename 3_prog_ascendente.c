/*/*Autor:Edgar Alejandro Hernandez Hernandez		                      */
/*E-mail:edgarh2014.94@gmail.com			                      */
/*Fecha de creación:12/04/2018				                      */
/*Fecha de actualizacion:13/04/2018			                      */
/*Descripción:Programa que imprimere los numeros de forma ascendente          */
#include <stdio.h>

int main(void)
{
   printf("orden ascendente\n");
  int array[]={2,0,2,3,10,11,4,100,9};

  for (int i = 0; i < 9; i++)
  {
    for (int j = i+1; j < 9; j++)
    {
      if (array[i]>array[j])
      {
        int auxiliar=array[j];
            array[j]=array[i];
            array[i]=auxiliar;
      }
     }
     printf("num= %d \n",array[i]);
  }
  return 0;
}
