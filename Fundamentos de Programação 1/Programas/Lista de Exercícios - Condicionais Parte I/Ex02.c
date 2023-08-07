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
    else
        printf("\nO perimetro nao eh maior que a area!\n");

    return 0;
}

