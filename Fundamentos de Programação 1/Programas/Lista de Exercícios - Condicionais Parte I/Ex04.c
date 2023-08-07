#include<stdio.h>

int main()
{
    int base, altura, perimetro, area;

    printf("Digite o valor da base:\n");
    scanf("%d", &base);
    printf("\nDigite o valor da altura:\n");    //captura do valor da base e da altura
    scanf("%d", &altura);

    perimetro = (2 * base) + (2 * altura);
    area = base * altura;

    printf("\nPerimetro: %d\nArea: %d\n", perimetro, area);

    if (perimetro > area)
        printf("\nO perimetro eh maior que a area!\n");
    else if (perimetro == area)
        printf("\nO perimetro e a area sao iguais!\n"); //verificão de qual é o maior, ou se são iguais
    else
        printf("\nA area eh maior que o perimetro!\n");

    return 0;
}
