/*Autor:Edgar Alejandro Hernandez Hernandez		                */
/*E-mail:edgarh2014.94@gmail.com			                        */
/*Fecha de creación:14/04/2018				                        */
/*Fecha de actualizacion:15/04/2018			                      */
/*Descripción: Programa que muestre la declaracion de constan-*/
/*tes con #define y const y que muestre en pantalla los valores*/
/* de las constantes, definir 6 macros para simular las       */
/*operaciones(suma,resta,multiplicación,división y potencia)  */
/* e imprimir los valores en pantalla y simular los ciclos for*/
/* y do while						                                      */

/*Declaracion de la biblioteca*/

#include <stdio.h>

#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100

/*Utilizacion de macro*/

#define SUMA(x, y) x + y
#define RESTA(x, y) x - y
#define MULT(x, y) x * y
#define DIV(x, y) x / y
#define POTCUADRADO(x, y) x * x
#define POTCUBO(x,y) x * x * x

/*Ciclo con macro*/
#define CICLOFOR(x, y) for(x = 0; x < y;x++)
#define CICLOWHILE(a, b) while(a  < b)
#define CICLODOWHILE(c , d) do while (c < d)

/*Declaracion de las constantes con const*/

const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max =100;

/*Declaracion de la funcion funcion principal*/
int main (void)
{
	printf("%f\n",PI);
	printf("%f\n",G);
	printf("%d\n",TAMANIO);
	printf("%d\n",MIN);
	printf("%d\n",MAX);

	printf("%f",pi);
	printf("%f\n",g);
	printf("%d\n",tamanio);
	printf("%d\n",min);
	printf("%d\n",max);


	/*Imprimir el macro*/

	printf("SUMA: %d\n",SUMA(4, 8));
	printf("RESTA: %d\n",SUMA(4, 8));
	printf("MULT: %d\n",MULT(4, 8));
	printf("DIV: %d\n",DIV(4, 8));
	printf("POTCUADRADO: %d\n",POTCUADRADO(4, 8));
	printf("POTCUBO: %d\n",POTCUBO(4,8));

	/*Macros para el ciclo*/
  /*CICLO FOR*/

	int x;
	int y=10;

	CICLOFOR(x, y)
	{
		printf("HOLA MUNDO\n");
	}

	/*Macros para el ciclo while*/
	int a;
	int b= 10;

	CICLOWHILE (a, b)
	{
		printf("%d",a);
		a++;
	}
	
	return 0;
}
