#include<stdio.h>

int main()
{
    int alunos, monitores;

    printf("Digite o numero de alunos:\n");
    scanf("%d", &alunos);
    printf("\nDigite o numero de monitores:\n");
    scanf("%d", &monitores);

    if (alunos + monitores <= 50)
        printf("\nEh possivel levar todos os alunos e monitores em uma unica viagem!\n");
    else
        printf("\nNao eh possivel levar todos os alunos e monitores em uma unica viagem!\n");

    return 0;
}

