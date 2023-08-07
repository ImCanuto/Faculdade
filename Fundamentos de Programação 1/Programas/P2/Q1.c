#include<stdio.h>
#define N 46  // A maior palavra existente tem 46 letras

int ehAnagrama (char palavraum[N], char palavradois[N])
{


    int anagrama, i, j, k, contador;

    for(k=0 ; k<N ; k++)
    {
        palavraum[k] = '$';
        palavradois[k] = '$';
    }

    contador = 0;
    for(i=0 ; i<N ; i++)
    {
        for (j=1 ; j<N ; j++)
        {
            if (palavraum[i] == palavradois[j])
            contador++;
            continue;
        }
    }

    if (contador == N)
        anagrama = 1;

    else
        anagrama = 0;

    return anagrama;
}

int main()
{
    int Eh_Ou_Nao;
    char primeira[N], segunda[N];

    scanf("%s", &primeira);
    scanf("%s", &segunda);

    Eh_Ou_Nao = ehAnagrama(primeira, segunda);
    printf("%d", Eh_Ou_Nao);
}
