#include<stdio.h>

int main()
{

int dinheiro;

printf("Digite o valor em dinheiro:\n");
scanf("%d", &dinheiro);
printf("\n%d notas de 50\n", dinheiro/50);
printf("%d notas de 5\n", dinheiro%50/5);
printf("%d notas de 1\n", dinheiro%50%5);
return 0;
}
