#include<stdio.h>

int main()
{

int pedagio;
float km, gasolina;

printf("Digite a distancia:\n");
scanf("%f", &km);
printf("\nDigite a quantidade de pedagios:\n");
scanf("%d", &pedagio);

gasolina = km/15;

printf("\nO gasto tolal da viagem sera de: R$%.2f\n", (gasolina * 2.6) + (pedagio * 8.0));

return 0;
}
