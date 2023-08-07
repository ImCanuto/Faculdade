#include<stdio.h>

int main()
{

int base, altura, perimetro;

printf("Digite o valor da base:\n");
scanf("%d", &base);
printf("\nDigite o valor da altura:\n");
scanf("%d", &altura);

perimetro = (2 * base) + (2 * altura);

printf("\nO perimetro do retangulo eh: %d", perimetro);

return 0;
}
