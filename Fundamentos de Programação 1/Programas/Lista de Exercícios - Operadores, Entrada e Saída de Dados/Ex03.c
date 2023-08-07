#include<stdio.h>

int main()
{

char caractere;
int inteiro;
float real;

printf("Insira um caractere: \n");
scanf("%c", &caractere);
printf("Insira um numero inteiro: \n");
scanf("%d", &inteiro);
printf("Insira um numero real//float: \n");
scanf("%f", &real);
printf(" Caractere: %c\n Numero inteiro: %d\n Numero real: %.2f", caractere, inteiro, real);
printf("\n\n Obrigado!");

return 0;
}
