#include<stdio.h>

int main()
{

float n1, n2, aux;

printf("Digite o primeiro valor: \n");
scanf("%f", &n1);
printf("Digite o segundo valor: \n");
scanf("%f", &n2);

aux = n1 + n2;

printf("\nA soma eh: %.2f", aux);

return 0;
}
