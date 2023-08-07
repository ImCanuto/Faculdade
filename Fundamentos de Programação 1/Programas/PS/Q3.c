#include<stdio.h>
#include<stdlib.h>


typedef struct{
    int dia;
    int mes;
    int ano;

}Data;

typedef struct{
    char nome;
    Data nasc;

}DadosAniv;

void imprimeData(DadosAniv *niver, char c)
{
    if (niver.nome[0] == c)
        printf("%d / %d / %d", niver.nasc.dia, niver.nasc.mes, niver.nasc.ano);
}

int main()
{
    int i, j, k, pessoas;
    DadosAniv *dados;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    dados = (DadosAniv*) malloc (pessoas * sizeof(DadosAniv));

    printf("Digite os %d nomes: \n", pessoas);
    for(i=0; i<pessoas; i++)
        scanf("%s", dados[i].nome);

    printf("Digite as %d datas (dd mm aaaa): \n", pessoas);
    for(i=0; i<pessoas; i++)
        scanf("%d %d %d", dados[i].nasc.dia, dados[i].nasc.mes, dados[i].nasc.ano);

    for (k=0; k<pessoas; k++)
    {
        printf("\n");
        imprimeData(dados, "A");
        printf("\n");
    }

    for (k=0; k<pessoas; k++)
    {
        printf("\n");
        imprimeData(dados, "E");
        printf("\n");
    }

    for (k=0; k<pessoas; k++)
    {
        printf("\n");
        imprimeData(dados, "I");
        printf("\n");
    }

    free(v);


//Fiquei sem tempo para corrigir


}
