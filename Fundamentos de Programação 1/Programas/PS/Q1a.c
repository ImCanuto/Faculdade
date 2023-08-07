#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 30


int consulta_livro(int n, int livros[], int cod);


int main()
{

    int quant, cod, cod_livros[N], i, livro;

    printf("Digite a quantidade de livros (ate 30): ");
    scanf("%d", &quant);

    if (quant > N)
        quant = N;

    srand(time(NULL));

    for (i=0; i<quant; i++)                       //<-- Criação dos códigos dos livros
    {
        cod_livros[i] = rand() % 101;
        printf("%d\n", cod_livros[i]);
    }

    printf("Digite o codigo do livro: ");
    scanf("%d", &cod);

    livro = consulta_livro(quant, cod_livros, cod);


        printf("O livro esta na posicao: %d", livro);


return 0;
}

int consulta_livro(int n, int livros[], int cod)
{
    int i, posicao;

    for (i=0; i<n; i++)
    {
        if (cod == livros[i])
            posicao = i;
        else
            posicao = -1;
    }

return posicao;
}
