# include <stdio.h>

int main()
{
    int n1, n2, n3, aux;

    if (n2>= n3)                       //Se atribuírmos 1, 2 e 3 respectivamente a saída será 1, 2 e 3.
    {                                  //Se atribuírmos 20, 10 e 30 respectivamente a saída será 10, 20 e 30.
        aux = n2;                      //Se atribuírmos 5*5, n1/2 e n2+1 respectivamente a saída será 12, 13 e 25.
        n2 = n3;                       //O programa organiza os números inseridos do maior para o menor, ordenando-os através dos "if's".
        n3 = aux;
    }
    if (n1 >= n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;

        if (n2 >= n3)
        {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    }
    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}
