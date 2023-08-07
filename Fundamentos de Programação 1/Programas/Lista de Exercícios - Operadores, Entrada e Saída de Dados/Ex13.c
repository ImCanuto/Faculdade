#include<stdio.h>

int main()
{

int distancia;
float combustivel, consumo_medio;

printf("Digite a distancia em Km:\n");
scanf("%d", &distancia);
printf("\nDigite a quantidade de combistivel em litros\n");
scanf("%f", &combustivel);

consumo_medio = distancia / combustivel;

printf("\nConsumo medio: %.3f\n", consumo_medio);

return 0;
}
