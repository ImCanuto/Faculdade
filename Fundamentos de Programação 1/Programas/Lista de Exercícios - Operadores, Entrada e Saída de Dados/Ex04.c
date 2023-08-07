#include<stdio.h>

int main()
{

int inteiro;
char caractere;
float real;

printf("Insira um numero inteiro: \n");
scanf("%d", &inteiro);
scanf("%c", &caractere);
printf("Insira um carctere: \n");
scanf("%c", &caractere);
printf("Insira um numero real//float: \n");
scanf("%f", &real);
printf(" Numero inteiro: %d\n Caractere: %c\n Numero real: %.2f", inteiro, caractere, real);
printf("\n\n Obrigado!");

return 0;
}
