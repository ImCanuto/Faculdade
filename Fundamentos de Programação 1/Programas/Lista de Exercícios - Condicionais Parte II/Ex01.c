#include<stdio.h>

int main()
{

    int ano;

    printf("Digite o ano (Ex: aaaa): ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
        printf("\nO ano eh bissexto!\n");

    else
        printf("\nO ano nao eh bissexto!\n");

return 0;
}
