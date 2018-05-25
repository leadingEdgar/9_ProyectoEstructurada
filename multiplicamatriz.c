#include <stdio.h>
#include <stdbool.h> /* Valores booleanos */

#define ROW 10
#define COL 10

bool validarMultiplicacionMatriz(int colA, int filaB);
void leerDatosMatriz(int matriz[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);

void multiplicaMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL],
  int matrizResultado[ROW][COL], int filaA, int colB);

int main(void)
{
  int filaA, colA;
  int filaB, colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizResultado[ROW][COL];

  printf("\nIntroduce la fila de la matriz A: ");
  scanf("%d",&filaA);

  printf("\nIntroduce la columna de la matriz A: ");
  scanf("%d",&colA);

  printf("\nIntroduce la fila de la matriz B: ");
  scanf("%d",&filaB);

  printf("\nIntroduce la columna de la matriz B: ");
  scanf("%d",&colB);

  if(validarMultiplicacionMatriz(colA, filaB) == true)
  {
    leerDatosMatriz(matrizA, filaA, colA);
    leerDatosMatriz(matrizB, filaB, colB);

    imprimirMatriz(matrizA, filaA, colA);
    imprimirMatriz(matrizB, filaB, colB);

    sumarMatriz(matrizA, matrizB, matrizResultado, filaA, colA);

    printf("\nEl resultado de la suma es: \n");
    imprimirMatriz(matrizResultado, filaA, colB);
  }else{
    printf("\nNo se puede realizar la suma de matrices\n");
  }

  return 0;
}


void multiplicaMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL],
  int matrizResultado[ROW][COL], int colA, int filB)
{
  for(int i = 0; i < fila; i++)
  {
    for(int j = 0; j < col; j++)
    {
      int suma = 0;
      for(int k = 0; k < filB; k++)
      {
        suma = suma + matrizA[i][k] * matrizB[k][i];
      }
      matrizResultado[i][j] = suma;
    }
  }
}


void leerDatosMatriz(int matriz[ROW][COL], int fila, int col)
{
  printf("\n\n");
  for(int i = 0; i < fila; i++)
  {
    for(int j = 0; j < col; j++)
    {
      printf("Introduce el elemento [%d][%d]", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void imprimirMatriz(int matriz[ROW][COL], int fila, int col)
{
  printf("\n\n");
  for(int i = 0; i < fila; i++)
  {
    printf("|");
    for(int j = 0; j < col; j++)
    {
      printf("  %d  ", matriz[i][j]);
    }
    printf("| \n");
  }
}


bool validarMultiplicacionMatriz(int colA, int filaB)
{
  if(colA == filaB)
  {
    return true;
  }
  return false;
}
