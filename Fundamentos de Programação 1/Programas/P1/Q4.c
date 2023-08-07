#include<stdio.h>

int main()
{

    int dia_nasc, mes_nasc, ano_nasc,
        dia_festa, mes_festa, ano_festa,
        resposta, brindes, idade, cinquetoes;

        printf ("Digite o dia da festa: ");
        scanf("%d", &dia_festa);
        printf ("Digite o mes da festa (somente numeros): ");
        scanf("%d", &mes_festa);
        printf ("Digite o ano da festa: ");
        scanf("%d", &ano_festa);

        resposta = 0;
        cinquetoes = 0;
        while (resposta != 2)
        {
            printf ("\nDigite o dia de nascimento do funcionario: ");
            scanf("%d", &dia_nasc);
            printf ("Digite o mes de nascimento do funcionario (somente numeros): ");
            scanf("%d", &mes_nasc);
            printf ("Digite o ano de nascimento do funcionario: ");
            scanf("%d", &ano_nasc);

            if ((dia_festa >= dia_nasc) && (mes_festa >= mes_nasc))
                idade = ano_festa - ano_nasc;

            else
                idade = (ano_festa - ano_nasc) - 1;

            if (idade == 50)
                cinquetoes++;

            printf("\nDeseja inserir as informacoes de outro funcionario?\n\nSim (1)\nNao (2)\n");
            scanf("%d", &resposta);
        }

    printf("\n%d brinde(s) sera(o) distribuido(s)!\n", cinquetoes);



return 0;
}
