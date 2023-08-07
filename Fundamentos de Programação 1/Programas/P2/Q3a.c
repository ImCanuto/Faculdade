#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
    int codigo;
    char nome[100];
    char categoria[50];
    float preco;
}Produto;

void defineCamposProduto(Produto* p)
{
    Produto pro;
    int i;

    srand(time(NULL));

    pro. codigo = 1 + rand() %1001;

    printf("Digite o nome: ");
    scanf("%s", pro.nome);

    printf("Digite a categoria: ");
    scanf("%s", pro.categoria);

    pro.preco = 1 + rand() %1000/10.0;

}
