#include<stdio.h>

int main()
{
    int consumo;

    printf("Digite o consumo: ");
    scanf("%d", &consumo);

    if ((consumo >= 0) && (consumo <= 10))
        printf("\nValor a ser pago: R$7.00\n");

    else if ((consumo >= 11) && (consumo <= 30))
        printf("\nValor a ser pago: R$%.2f\n", 7.0 + ((consumo - 10) * 1) );

    else if ((consumo >= 31) && (consumo <= 100))
        printf("\nValor a ser pago: R$%.2f\n", 7.0 + 20 + ((consumo - 30) * 2) );

    else
        printf("\nValor a ser pago: R$%.2f\n", 7.0 + 20 + 140 + ((consumo - 100) * 5) );




return 0;
}
