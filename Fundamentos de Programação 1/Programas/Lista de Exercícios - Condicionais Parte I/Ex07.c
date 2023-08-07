#include<stdio.h>

int main()
{
    float valor_x, valor_y;

    printf("Digite o valor de x:\n");
    scanf("%f", &valor_x);
    printf("\nDigite o valor de y:\n");
    scanf("%f", &valor_y);

    if ((valor_x == 0) && (valor_y == 0))
        printf("\nOrigem\n");

    else if ((valor_x == 0) && (valor_y > 0))
        printf("\nEixo y\n");

    else if ((valor_x == 0) && (valor_y < 0))
        printf("\nEixo y\n");

    else if ((valor_x > 0) && (valor_y == 0))
        printf("\nEixo x\n");

    else if ((valor_x < 0) && (valor_y == 0))
        printf("\nEixo x\n");

    else if ((valor_x > 0) && (valor_y > 0))
        printf("\nQ1\n");

    else if ((valor_x > 0) && (valor_y < 0))
        printf("\nQ4\n");

    else if ((valor_x < 0) && (valor_y < 0))
        printf("\nQ3\n");

    else
        printf("\nQ2\n");

return 0;
}
