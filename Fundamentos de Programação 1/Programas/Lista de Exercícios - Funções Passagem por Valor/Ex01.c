#include<stdio.h>

int ehBissexto (int ano)
{
    int bissexto;

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        bissexto = 1;
    else
        bissexto = 0;

return bissexto;
}

int main()
{
    int ano, Eh_Ou_Nao;

    scanf("%d", &ano);                            // <--- Teste para saber se a função retorna o que foi pedido.
    Eh_Ou_Nao = ehBissexto(ano);
    printf("%d", Eh_Ou_Nao);
}
