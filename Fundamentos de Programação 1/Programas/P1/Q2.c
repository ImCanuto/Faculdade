#include<stdio.h>

int main()
{

    int numero_n, i, j, k;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero_n);

    for (i = 1; i <= numero_n; i++)
    {
       for (j = 1; j <= i; j++)
       {
            k++;
            printf("%d ", k);
       }

        printf ("\n");
    }





return 0;
}
