/*Autor:Edgar Alejandro Hernandez Hernandez           */
/*E-mail:edgarh2014.94@gmail.com                      */
/*Fecha de creacion:19/04/2018                        */
/*Feha de modificacion:                               */
/*Descripcion:Convertir de minuscula a mayuscula y de */
/*y de mayuscula a miniscula			      */


/*Declaración de la biblioteca estandar*/

#include <stdio.h>

const int tamanio = 5;    /*Definicion de constante*/

/*Declaración de la función principal*/

int main(void)
{
  
  /*Declaración de las variables*/

  char c;
  char array[tamanio],ar[tamanio];

  int index = 0;

  printf("palabra en MINUSCULA: ");

  while ((c = getchar()) != '\n')
  {
    if(c >= 97 && c <= 122)   /*Validando unicamente caracteres:letras minusculas*/
    {
    c = c-32;
    array[index] = c;
    index ++;
    }
  }
  printf("\n");
  for (int i = 0; i < tamanio; i++)
  {
    printf("%c", array[i]);
  }

  printf("\n");
 
  /*De mayusculas a minusculas*/
      index = 0;
      printf("palabra en MAYUSCULAS: ");
    while ((c = getchar()) != '\n')
    {
    if(c >=65 && c <=90)   /*Validando unicamente caracteres:letras minusculas*/
    {
    c = c+32;
    ar[index] = c;
    index ++;
    }
  }
  printf("\n\n");

  for (int i = 0; i < tamanio; i++)
  {
    printf("%c", ar[i]);
  }

  printf("\n");


  return 0;
}

