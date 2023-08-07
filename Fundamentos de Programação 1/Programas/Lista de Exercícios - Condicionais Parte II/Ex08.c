#include<stdio.h>

int main()
{

    int dimen_A, dimen_B, dimen_C,
        dimen_H, dimen_L;

    int auxAB, auxAC, auxBC, auxHL;

    auxAB = dimen_A * dimen_B;
    auxAC = dimen_A * dimen_C;
    auxBC = dimen_B * dimen_C;
    auxHL = dimen_H * dimen_L;


    printf("Digite a primeira dimensao da caixa (1 a 100): ");
    scanf("%d", &dimen_A);
    printf("Digite a segunda dimensao da caixa (1 a 100): ");     //Dimensoes da caixa
    scanf("%d", &dimen_B);
    printf("Digite a terceira dimensao da caixa (1 a 100): ");
    scanf("%d", &dimen_C);

    printf("\nDigite a altura da janela (1 a 100): ");
    scanf("%d", &dimen_H);                              //Dimensoes da janela
    printf("Digite a largura da janela (1 a 100): ");
    scanf("%d", &dimen_L);

    if ( ((1 <= dimen_A) && (dimen_A <= 100))  && ((1 <= dimen_B) && (dimen_B <= 100)) && ((1 <= dimen_C) && (dimen_C <= 100)) &&  ((1 <= dimen_H) && (dimen_H <= 100)) && ((1 <= dimen_L) && (dimen_L <= 100)) )
    {
        if (auxAB > auxHL) || (auxAC > auxHL) || (auxBC > auxHL) || // travei, sei que está errado o raciocínio ;)
            printf("\nN\n");
        else
            printf("\nS\n");
    }

    else
        printf("\n\aERRO! As dimensoes estao fora do limite estipulado!\n");


return 0;
}
