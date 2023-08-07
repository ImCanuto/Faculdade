#include<stdio.h>
#include<stdlib.h>

int main()
{
int valor_A, valor_B, valor_C;
float maxAB, maxFinal;

printf("Insira o primeiro valor inteiro\n");
scanf("%d", &valor_A);
printf("\nInsira o segundo valor inteiro\n");
scanf("%d", &valor_B);
printf("\nInsira o terceiro valor inteiro\n");
scanf("%d", &valor_C);

maxAB = (valor_A + valor_B + abs(valor_A-valor_B)) / 2;
maxFinal = (maxAB + valor_C + abs(maxAB-valor_C)) / 2;

printf("\nO maior eh: %.0f", maxFinal);

return 0;
}
