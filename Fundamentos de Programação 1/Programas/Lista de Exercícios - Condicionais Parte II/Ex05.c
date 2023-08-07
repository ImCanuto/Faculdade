#include<stdio.h>

int main()
{

    float preco_A, preco_G, rendimento_A, rendimento_G;

    printf("Digite o preco por litro do alcool: ");
    scanf("%f", &preco_A);
    printf("Digite o preco por litro da gasolina: ");
    scanf("%f", &preco_G);
    printf("Digite o rendimento (km/l) do carro utilizando alcool: ");
    scanf("%f", &rendimento_A);
    printf("Digite o rendimento (km/l) do carro utilizando gasolina: ");
    scanf("%f", &rendimento_G);

    if ((preco_A / rendimento_A) > (preco_G / rendimento_G))
        printf("\nG\n");

    else if ((preco_A / rendimento_A) < (preco_G / rendimento_G))
            printf("\nA\n");

    else
        printf("\nG\n");




return 0;
}
