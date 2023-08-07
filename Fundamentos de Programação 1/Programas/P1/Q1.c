#include<stdio.h>

int main()
{

    int doacao, doacoes_total=0, capacidade_ocupada=0;
    float capacidade;

    printf("Digite a capacidade do container (multipla de 10): ");
    scanf("%f", &capacidade);
    printf("\n");

    while (capacidade_ocupada != capacidade)
      {
        printf("Digite a doacao (5kg ou 10kg): ");
        scanf("%d", &doacao);

        if ( (capacidade_ocupada + doacao) <= capacidade)
        {
            capacidade_ocupada = capacidade_ocupada + doacao;
            doacoes_total++;
        }

      }

    printf("\nQuantidade media: %.1f\n", capacidade / doacoes_total);








return 0;
}
