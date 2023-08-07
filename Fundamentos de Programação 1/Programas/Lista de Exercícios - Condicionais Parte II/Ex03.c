#include<stdio.h>
#include<math.h>

int main()
{
    int numero, centena, dezena, unidade;

    printf("Digite um numero no intervalo de 100 a 999: ");
    scanf("%d", &numero);


    centena = numero/100;
    dezena = numero%100/10;
    unidade = numero%100%10;


    if ((numero < 100) || (numero > 999))
        printf("\n\aERRO! O numero esta fora do intervalo!\n");

    else if (numero == (pow(centena,3) + pow(dezena,3) + pow(unidade,3)))
        printf("\nEh um numero de Angstron!\n");

    else
        printf("\nNao eh um numero de Angstron!\n");

return 0;
}
