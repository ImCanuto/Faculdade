#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5

int main()
{

    int i, v1[N], v2[N];

    srand (time(NULL));

    /*for (i=0 ; i<10 ; i++)
    {
        printf("%d %d\n", rand() % 21, rand() % 21);
    }*/

    for (i=0 ; i<N ; i++)
    {
        v1[i] = rand() % 11;
        v2[i] = rand() % 11;
        //printf("%d %d\n", v1[i], v2[i]);
    }

    printf("Primeiro vetor: ");
    for (i=0 ; i<N ; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\nSegundo vetor: ");
    for (i=0 ; i<N ; i++)
    {
        printf("%d ", v2[i]);
    }

    printf("\nSoma: ");
    for (i=0 ; i<N ; i++)
    {
        printf("%d ", v1[i] + v2[N-1-i]);
    }

    printf("\n");

return 0;
}
