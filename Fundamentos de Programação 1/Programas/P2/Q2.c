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

    // Aqui entraria o "chamado" da função determinaTriplas e a impressão do resultado,
    //mas não sei muito bem como aplicar, só entendi o raciocínio em si.
    //Peço perdão pis tive alguns problemas pessoais esse mês e não consegui estudar direito.




}

