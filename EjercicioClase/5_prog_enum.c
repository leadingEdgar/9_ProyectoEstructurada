/*Autor:Edgar Alejandro Hernandez Hernandez             */
/*E-mail: edgarh2014.94@gmail.com                       */
/*Fecha de creacion:22/04/2018                          */
/*Fecha de modificación:23/04/2018                      */
/*Descripcion:Matriz cuadrada                           */

/*Declaración de la libreria estantar*/

#include <stdio.h>

/*DEclaracion de enum*/
/*tipo identificador{lista de identificadores}*/

enum DIAS{L, M, MI, J, V, S, D};
enum MESES{EN, FE, MAR ,AB ,MAY, JUN, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manzana, mango, durazno, pera, uva, pina};

enum PRECIOAUTO{NUEVO=10, SEMINUEVO=-5, USADO, INSERVIBLE};
enum {PROG, MATEDIS, MATEII,TGS,ELECI} var1, var2, var3;    /*Enum anonimo*/


/*Declaración de la función principal*/

int main(void)
{
 
 printf("%d\n",USADO);

/*Imprimir el printf para el dia lunes var1,var2,var3*/
  


  for (enum MESES index =EN; index<=DI; index++)
  {
    printf("%d\n",index);

    switch (index)
    {
      case EN:
      printf("\nEnero\n");
      break;
      case FE:
      printf("\nFebrero\n");
      break;
      case MAR:
      printf("\nMarzo\n");
      break;
      case AB:
      printf("\nAbril\n");
      break;
      case MAY:
      printf("\nMayo\n");
      break;
      case JUN:
      printf("\nJunio\n");
      break;
      case JUL:
      printf("\nJulio\n");
      break;
      case AG:
      printf("\nAgosto\n");
      break;
      case SE:
      printf("\nSeptiembre\n");
      break;
      case OC:
      printf("\nOctubre\n");
      break;
      case NO:
      printf("\nNoviembre\n");
      break;
      case DI:
      printf("\nDiciembre\n");
      break;
    }

  }

  /*Imprimiendo los var*/

  printf("\n");
  printf("%d\n",var1);
  printf("%d\n",var2);
  printf("%d\n",var3);
  
     return 0;
}
