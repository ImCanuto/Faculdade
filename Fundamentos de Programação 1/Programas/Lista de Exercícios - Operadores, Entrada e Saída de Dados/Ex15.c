#include<stdio.h>

int main()
{

int dia=86400, hora=3600, minuto=60;
int segundos;

printf("Digite a quantidade de segundos:\n");
scanf("%d", &segundos);

printf("\n%d segundos correspondem a %d dias, %d horas, %d minutos e %d segundos\n",
segundos, segundos/dia, segundos%dia/hora, segundos%dia%hora/minuto, segundos%dia%hora%minuto);



return 0;
}
