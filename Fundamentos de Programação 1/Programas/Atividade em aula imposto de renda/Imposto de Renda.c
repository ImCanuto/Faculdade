#include<stdio.h>

int main()
{
    float salario;

    printf("Digite o salario:\n");
    scanf("%f", &salario);

    if (salario < 1499.16)
        printf("\nValor a ser pago: R$0.00\n");

    else if (salario< 2246.76)
        printf("\nValor a ser pago: %.2f\n", (salario - 1499.16) *0.075);

    else if (salario<2995.71)
        printf("\nValor a ser pago: %.2f\n", ((2246.75 - 1499.16) * 0.075) + (salario - 2245.75) * 0.15);

    else if (salario<3743.20)
        printf("\nValor a ser pago: %.2f\n", (((2246.75 - 1499.16) * 0.075) + ((2995.70-2246.76) * 0.15) + ((salario - 2995.71) * 0.225)));

    else
        printf("\nValor a ser pago: %.2f\n", ((2246.75 - 1499.16) * 0.075) + ((2995.70-2246.76) * 0.15) + ((3743.19 - 2995.71) * 0.225) + ((salario - 3743.19) * 0.275));
    return 0;
}
