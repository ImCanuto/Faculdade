#include<stdio.h>
#include<math.h>

int main()
{

    float valor_A, valor_B, valor_C;


    printf("Digite o primeiro valor: ");
    scanf("%f", &valor_A);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor_B);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor_C);


    if ( (fabs(valor_B - valor_C) < valor_A) && (valor_A < (valor_B + valor_C)) || (fabs(valor_A - valor_C) < valor_B) && (valor_B < (valor_A + valor_C)) || (fabs(valor_A - valor_B) < valor_C) && (valor_C < (valor_A + valor_B)) ) //Condi��o de exist�ncia de um tri�ngulo
    {
        if (valor_A == valor_B && valor_B == valor_C)
            printf("\nEh possivel formar um triangulo equilatero com esses valores!\n");

        else if ((valor_A == valor_B && valor_B != valor_C) || (valor_A == valor_C && valor_C != valor_B) || (valor_B == valor_C && valor_C != valor_A))
            printf("\nEh possivel formar um triangulo isosceles com esses valores!\n");

        else
            printf("\nEh possivel formar um triangulo escaleno com esses valores!\n");
    }

    else
        printf("\n\aERRO! Nao eh possivel formar um triangulo com esses valores!\n");


/*
| b - c | < a < b + c
| a - c | < b < a + c           <--- Condi��o de exist�ncia de um tri�ngulo
| a - b | < c < a + b */

return 0;
}
