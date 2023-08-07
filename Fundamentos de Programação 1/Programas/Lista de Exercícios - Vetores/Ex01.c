#include<stdio.h>
#define N 5

int main()
{

    int vetor[N],  v_teste[N], i, j, k;

    for (i=0 ; i<N ; i++)               //Limpa o vetor
    {
        vetor[i] = -1;
        v_teste[i] = -1;
        //printf("vetor:%d\nteste:%d\n", vetor[i], v_teste[i]);
    }

    int flag = 0;
    j = 0;
    while (j<N)
    {
        printf("Digite um valor positivo e inteiro: ");
        scanf("%d", &v_teste[j]);

        for (k=0 ; k<N ; k++)
        {
            if (v_teste[j] == vetor[k])
            {
                printf("\a\nValor repetido! Digite um valor diferente!\n\n");
                j--;
                flag = 0;
            }

            else
            {
                flag = 1;
            }
        }

        if (flag == 1)
            vetor[j] = v_teste[j];

        j++;
    }





return 0;
}
