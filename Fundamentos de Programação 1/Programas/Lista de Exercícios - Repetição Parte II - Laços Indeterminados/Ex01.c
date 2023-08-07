#include<stdio.h>

int main()
{

    float maior=0, numero;


    while (numero >= 0)
    {
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > maior)
        maior = numero;

    }

    printf("\nO maior dos valores digitados eh: %.2f\n", maior);

return 0;
}
