#include<stdio.h>

int main()
{

    int idade, opiniao, pontos=0;

    while (idade != -1)
    {
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

        if (idade != -1)
        {
        printf("\nQual sua opiniao em relacao ao filme?\n\n(1) Otimo\n(2) Bom\n(3) Regular\n(4) Ruim\n(5) Pessimo\n\n");
        scanf("%d", &opiniao);
        printf("\n");


            if (idade < 18 && opiniao == 1)
                pontos = pontos + 5;

           else if (idade < 18 && opiniao == 2)
                pontos = pontos + 4;

           else if (idade < 18 && opiniao == 3)
                pontos = pontos + 3;

           else if (idade < 18 && opiniao == 4)
                pontos = pontos + 2;

           else if (idade >= 18 && idade <=40 && opiniao == 1)
                pontos = pontos + 10;

           else if (idade >= 18 && idade <=40 && opiniao == 2)
                pontos = pontos + 7;

           else if (idade >= 18 && idade <=40 && opiniao == 3)
                pontos = pontos + 5;

           else if (idade >= 18 && idade <=40 && opiniao == 4)
                pontos = pontos + 3;

           else if (idade > 40 && opiniao == 1)
                pontos = pontos + 15;

           else if (idade > 40 && opiniao == 2)
                pontos = pontos + 12;

           else if (idade > 40 && opiniao == 3)
                pontos = pontos + 8;

           else if (idade > 40 && opiniao == 4)
                pontos = pontos + 5;

        }
    }


    printf("\nPontuacao = %d\n", pontos);


return 0;
}
