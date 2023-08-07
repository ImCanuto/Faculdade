#include<stdio.h>

int main()
{
   int dia, mes, ano, d_atual, m_atual, a_atual;

   printf("Digite o dia do seu nascimento\n");
   scanf("%d", &dia);
   printf("\nDigite o mes do seu nascimento (somente os numeros)\n");           //coleta de dados
   scanf("%d", &mes);
   printf("\nDigite o ano do seu nascimento\n");
   scanf("%d", &ano);

   printf("\nDigite o dia de hoje\n");
   scanf("%d", &d_atual);
   printf("\nDigite o mes atual (somente os numeros)\n");
   scanf("%d", &m_atual);
   printf("\nDigite o ano atual\n");
   scanf("%d", &a_atual);

   if ((d_atual >= dia) && (m_atual >= mes))
      printf("\nSua idade eh: %d\n", a_atual - ano);
   else
      printf("\nSua idade eh: %d\n", (a_atual - ano) - 1);


return 0;
}
