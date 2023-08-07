#include<stdio.h>

int main()
{

    int valor, positivos=0;
    float soma=0;


    while (valor != -1000)
    {
    printf("Digite um valor: ");
    scanf("%d", &valor);

        if (valor > 0)
        {
        positivos++;
        soma = soma + valor;
        }
    }

    printf("\n%d valores positivos\n", positivos);
    printf("Media: %.1f\n", soma/positivos);



return 0;
}
