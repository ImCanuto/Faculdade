#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort_dec (int *vetor, int tamanho) {
    int i, j, aux;

    for(i=1 ; i<tamanho ; i++){
        for(j=0 ; j<tamanho - 1 ; j++){
            if(vetor[j] < vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}
