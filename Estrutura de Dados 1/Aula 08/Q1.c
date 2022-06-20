#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int MaiorNumero(int *V, int tam){ //Da o maior numero do vetor
    int maior=0, i;

    for(i=0; i<tam; i++){
        if(maior<V[i])
            maior = V[i];
    }

return maior;
}

void CountingSort (int *A, int *B, int tam, int maior) {
    int i, j, k, l;
    int *C = (int *)malloc(maior*sizeof(int));
    for(i=0; i<maior; i++){
        C[i] = 0;
        B[i] = 0;
    }
    for(j=0; j<tam; j++){
        C[A[j]] = C[A[j]] + 1;
    }
    for(k=1; k<maior; k++){
        C[k] = C[k] + C[k-1];
    }
    for(l=(tam-1); l>=0; l--){
        B[C[A[l]] - 1] = A[l];
        C[A[l]] = C[A[l]] - 1;
    }
}


void Imprimir (int A[], int n) {
  int i;
  printf ("Vetor: ");
  for (i = 0; i < n; i++) {
     printf ("%d ", A[i]);
  }
  printf ("\n");
}

int main () {

  int i, n;
  printf ("Digite a quantidade de elementos: ");
  scanf ("%d", &n);
  int *A = (int *)malloc(n*sizeof(int));
  int *B = (int *)malloc(n*sizeof(int));
  int k = 100; /*número máximo limite a ser sorteado!*/
  srand(time(NULL));
  for (i = 0; i < n; i++) {
     A[i] = rand() % k; /*Sorteio de elementos até limite k-1*/
  }
  Imprimir (A, n);
  CountingSort(A, B, n, k);
  Imprimir (B, n);

return 0;
}

