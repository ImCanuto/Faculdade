#include <stdio.h>
#include <stdlib.h>

/*NAO USE VARIAVEIS GLOBAIS!!!!!!!!!!!!!*/

/*Função para enfileirar um dado elemento em um vetor: */
void enqueue (int elemento, int *fim, int *vetor) {
    vetor[*fim] = elemento;
    (*fim)++;
}

/*Função para desenfileirar um dado elemento em um vetor: */
int dequeue (int *vetor, int *ini) {
    int retirar = vetor[*ini];
    (*ini)++;
    return retirar;
}


int main () {

    int elem, i, tamanho = 10 /*Tamanho da fila*/ , ini = 0, fim = 0;
    int *fila = (int *)malloc(tamanho * sizeof(int));
    /*Reservando o espaco para o vetor na memoria!*/


    elem = 1;
    for (i=0 ; i<tamanho ; i++) {
        enqueue (elem, &fim, fila);
        //printf("%d\n", fila[i]); Verificando os valores contidos em *fila
        elem++;
   }

        /* Fazendo com que o programa imprima os 2 primeiros valores retirados */
        for (i=0; i<2 ; i++) {
        printf("Valor retirado: %d\n", dequeue(fila, &ini));

    }



   free(fila);

   return 0;
}

