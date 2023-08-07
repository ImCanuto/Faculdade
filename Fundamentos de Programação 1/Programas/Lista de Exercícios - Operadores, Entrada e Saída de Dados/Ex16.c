#include<stdio.h>

int main()
{

int numero;

printf("Digite um numero inteiro:\n");
scanf("%d", &numero);
printf("\nO ultimo digito eh: %d\n", numero%10);

return 0;
}
