#include<stdio.h>
#include<math.h>

int main()
{

    char escolha;
    float valor_1, valor_2, valor_3, //valores inseridos pelo usuário
          media_A, media_P, media_G, media_H; //operações

    printf("A - Media Aritmetica \nP - Media Ponderada (com pesos 1, 2 e 3) \nG - Media Geometrica \nH - Media Harmonica\n"); //captura da escolha do usuário
    printf("\nEscolha uma das opcoes acima: ");
    scanf("%c", &escolha);

    if ((escolha == 'a') || (escolha == 'A'))
    {
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");         //captura dos valores
        scanf("%f", &valor_2);
        printf("Digite o terceiro valor: ");
        scanf("%f", &valor_3);

        media_A = (valor_1 + valor_2 + valor_3) / 3.0;

        printf("\nOpcao escolhida: A\n");
        printf("\nA media aritmetica entre %.2f, %.2f e %.2f eh: %.2f\n", valor_1, valor_2, valor_3, media_A);
    }

    else if ((escolha == 'p') || (escolha == 'P'))
    {
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");         //captura dos valores
        scanf("%f", &valor_2);
        printf("Digite o terceiro valor: ");
        scanf("%f", &valor_3);

        media_P = ((valor_1 * 1) + (valor_2 * 2) + (valor_3 * 3)) / (1.0 * 2.0 * 3.0);       // deixei o (valor_1 * 1) para facilitar uma alteração futura dos pesos

        printf("\nOpcao escolhida: P\n");
        printf("\nA media ponderada entre %.2f, %.2f e %.2f eh: %.2f\n", valor_1, valor_2, valor_3, media_P);
    }

    else if ((escolha == 'g') || (escolha == 'G'))
    {
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");         //captura dos valores
        scanf("%f", &valor_2);
        printf("Digite o terceiro valor: ");
        scanf("%f", &valor_3);

        media_G = pow((valor_1*valor_2*valor_3), (1.0/3.0));

        printf("\nOpcao escolhida: G\n");
        printf("\nA media geometrica entre %.2f, %.2f e %.2f eh: %.2f\n", valor_1, valor_2, valor_3, media_G);
    }

    else if ((escolha == 'h') || (escolha == 'H'))
    {
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");         //captura dos valores
        scanf("%f", &valor_2);
        printf("Digite o terceiro valor: ");
        scanf("%f", &valor_3);

        media_H = 3.0 / ((1.0/valor_1) + (1.0/valor_2) + (1.0/valor_3));

        printf("\nOpcao escolhida: H\n");
        printf("\nA media harmonica entre %.2f, %.2f e %.2f eh: %.2f\n", valor_1, valor_2, valor_3, media_H);
    }

    else
        printf("\n\aERRO! Digite uma opcao valida!\n");

return 0;
}
