#include<stdio.h>

int main()
{

    int numero_n, numero_m,
        i, soma, raiz, eh_quadradopf;


    printf("Digite um numero positivo e inteiro: ");
    scanf("%d", &numero_n);

    eh_quadradopf = 0;
    raiz = 0;
    soma = 0;
    for (i = 1; i <= numero_n; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
            raiz++;
        }

        if (soma == numero_n)
         {
            eh_quadradopf = 1;
            printf("\nEh quadrado perfeito!\nM = %d\n", raiz);
            break;
         }
    }

        if (eh_quadradopf == 0)
        printf("\nNao eh quadrado perfeito!\n");






return 0;
}
