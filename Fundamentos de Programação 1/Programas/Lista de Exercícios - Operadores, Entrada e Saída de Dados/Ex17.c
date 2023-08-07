#include<stdio.h>

int main()
{

float Celsius;


printf("Digite uma temperatura em graus Celsius:\n");
scanf("%f", &Celsius);
printf("\nA temperatura correspondente em graus Farenheit eh: %.1f\n", ((9*Celsius)/5)+32);

return 0;
}
