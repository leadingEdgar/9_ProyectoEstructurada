/*        Nombre: Hernandez Hernandez Edgar Alejandro */
/*        Email:edgarh2014.94@gmail.com               */
/*        Fecha de creación: 11/Abril/2018            */
/*        Fecha de actualización: 13/Abril/2018       */
/* Descripción: Programa que determine cuantas veces
 se repite un número dentro de un arreglo             */

#include <stdio.h>

int main(void)
{
     int Arreglo[10];
     int contador = 0;
     int i,num;

     for (i=0; i<10; i++)
     {
         printf("\nIngrese el número %d del arreglo", i);
         scanf("%d", &num);
         Arreglo[i]=num;
     }

     for (i=0; i<10; i++)
     {
         contador=0;

         for (int j=1; j<10; j++)
         {
             if (i == Arreglo[j])
             {
                 contador++;
             }
           }


             printf("\nEl numero %d se repite %d veces", i, contador);
           }
     return 0;
}
