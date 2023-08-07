#include<stdio.h>

int main()
{

    float Chico = 1.50, Ze = 1.10;
    int anos;

    anos = 0;
    while (Ze <= Chico)
    {
        Ze = Ze + 0.03;
        Chico = Chico + 0.02;
        anos++;

        //printf("%d %.2f %.2f\n", anos, Ze, Chico);        "debug" para ver o que ocorre com as variáveis
    }

    printf("\n\nSerao necessarios %d anos para que Ze seja maior que Chico!\n", anos);

return 0;
}
