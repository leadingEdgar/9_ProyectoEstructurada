/*Autor: Edgar Alejandro Hernandez Hernandez              */
/*E-mail: edgarh2014.94@gmail.com                         */
/*Fecha de creacion:12/02/2018                            */
/*Fecha de actualizacion:12/04/2018                       */
/*Descripcion:Programa que permite encontrar las veces que*/
/*se repite los números del 0 - 9 en un arreglo           */
/*unidimensional dado                                     */

/*Declaracion de la bibloteca*/
#include <stdio.h>

int main(void)
{
/*Declaracion del arreglo*/

int a[]={2,0,2,3,10,11,4,100,9}, aux;
for(int i=0; i<10-1; i++)//Inicializa, condiciona, incrementa
{
   for(int j=1; j<9; j++)//Inicializa, condiciona, incrementa
   {
      if(a[i]<a[j])//Compara
      {
         aux=a[j];//Se le asina valor
         a[j]=a[i];//Se le asina valor
         a[i]=aux;//Se le asina valor
      }
   }
}
   for(int i=0; i<9; i++)//Para recorrer el arreglo, i inicia en 0, compara si es menor a N y si sí entra al for, evalúa, e incrementa.
      {
         printf("%d\n",a[i]);//Imprime valor, de la posición de i
      }


  return 0;
}
