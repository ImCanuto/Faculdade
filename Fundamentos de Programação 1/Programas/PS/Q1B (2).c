#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void mostra_estoque(int n, int livros[], int est[], int cod)
{
    int i, j, k, contador=0;

    for(i=0; i<n; i++)
    {
        if (est[i] == 0){
            printf("\nNao disponivel no estoque ou nao cadastrado!");
            break;}
    }

    for(j=0; j<n; j++)
    {
        if (cod != livros[j])
            contador++;

        else if (contador == n){
            printf("\nNao disponivel no estoque ou nao cadastrado!");
            break;}

        else
            printf("\nQuantidade em estoque do livro desejado: %d", est[i]);
    }

}



int main()
{
    int numero=10, codigos[10], estoque[10], i, j;

    srand(time(NULL));

    for(i=0; i<10; i++)
        codigos[i] = rand() % 99999;

    for(i=0; i<10; i++)
        estoque[i] = rand() % 101;


    mostra_estoque(numero, codigos, estoque, rand() % 99999);



return 0;
}

//Não deu tempo de terminar :/


