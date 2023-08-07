#include<stdio.h>

int main()
{


    int n1, n2, maior, menor, i;

    printf("Digite dois valores: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        maior = n1;
        menor = n2;
    }

    else
    {
        maior = n2;
        menor = n1;
    }

    i = maior;
    while ( (i % menor != 0) && (i % maior != 0) )
    {i++;}

    printf("O MMC entre %d e %d eh: %d", n1, n2, i);




return 0;
}
