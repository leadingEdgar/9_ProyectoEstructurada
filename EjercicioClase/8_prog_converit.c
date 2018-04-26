/*-----------------------------------------------------------*/
/*Autor:Edgar Alejandro Hernandez Hernandez                  */
/*E-mail: edgarh2014.94@gmail.com                            */
/*Fecha de creacion:24/04/2018                               */
/*Fecha de modificación:25/04/2018                           */
/*Descripcion:Convertir un numero a decimal a binario        */
/*-----------------------------------------------------------*/


/*Declaración de la bibñlioteca estandar*/

#include <stdio.h>
#include <math.h>
/*Declaración de la función principal*/

int main(void)
{

  /*Declaración de las variables*/
    printf("C  O  N  V  E  R  S  I  Ó  N     D   E     D  E  C  I  M  A  L      A     B  I  N  A  R  I  O\n");
    int num, num1=0, num2=1,bin,bin2,decimal,N;
    int bina[N];
    
    printf("Ingresa un número para convertir a binario: ");
    scanf("%d",&num);
    while (num > 0)
     {
      num1 = num1+(num%2)*num2;
      num /=2;
      num2 *=10;
    }

    printf("El numero decimal en binario es:%d\n",num1);

    printf("C  O  N  V  E  R  S  I  Ó  N     D   E     B  I  N  A  R  I  O      A    D  E  C  I  M  A  L  \n");


    printf("Ingrese el numero de posiciones del arreglo binario");
    scanf("%d",&bin);
    for (int i = 0; i<=N;i++)
     {
      printf("Ingrese el numero %d del binario",i);
      scanf("%d\n",&bin);
      bina[i]=bin;
      decimal=bina[i]*pow(2,i)+decimal;
     }

     printf("El numero decimal es %d\n",decimal);



     return 0;
}
