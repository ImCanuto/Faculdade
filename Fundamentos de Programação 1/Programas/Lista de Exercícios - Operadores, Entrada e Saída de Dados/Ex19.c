#include<stdio.h>

int main()
{

float nota_1, nota_2, nota_3, media;

printf("Digite a primeira nota:\n");
scanf("%f", &nota_1);
printf("\nDigite a segunda nota:\n");
scanf("%f", &nota_2);
printf("\nDigite a terceira nota:\n");
scanf("%f", &nota_3);

media = ((nota_1*2) + (nota_2*3) + (nota_3*5))/3;

printf("\nA media eh: %.1f\n", media);

return 0;
}
