#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void aloca_matriz(int l, int c)
{
    int **matriz, i;

    matriz = (int **) malloc (l * sizeof(int *));
    for (i=0; i<l; i++)
        matriz[i] = (int *) malloc (c * sizeof(int));
}

void inicializa_matriz(int **matriz, int l, int c)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
}

void imprime_matriz(int **matriz, int l, int c)
{
    int i, j;

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }
}

int main()
{
    int linhas, colunas, matriz[][];


    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);


    aloca_matriz(linhas, colunas);
    inicializa_matriz(matriz, linhas, colunas);
    imprime_matriz(matriz, linhas, colunas);

    //Não entendi muito bem, perdão.

}
