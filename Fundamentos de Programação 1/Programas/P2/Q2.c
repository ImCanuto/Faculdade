#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void determinaTriplas (int v[], int tam, int *qtdeTriplas, int indices[])
{
    int i;

    *qtdeTriplas = 0;

    for (i=0; i<tam ; i++)
    {
        if (v[i] == v[i+1] || v[i+1] == v[i+2])
        {
            indices[i] = i;
            *qtdeTriplas++;
        }
    }
}


int main()
{
    int i, j, matriz[10][10];
    srand (time(NULL));

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            matriz[i][j] = rand()%11;
            //printf("%d ", matriz[i][j]);
        }
    }

    // Aqui entraria o "chamado" da fun��o determinaTriplas e a impress�o do resultado,
    //mas n�o sei muito bem como aplicar, s� entendi o racioc�nio em si.
    //Pe�o perd�o pis tive alguns problemas pessoais esse m�s e n�o consegui estudar direito.




}

