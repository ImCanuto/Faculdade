#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Imprimir (int *vetor, int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf ("\n");
}

int Particiona (int *vetor, int esq, int dir) {
    int i, j, aux, pivo;
    i = esq;
    j = dir;
    pivo = vetor[esq];

    while(i < j){
        while(vetor[i] <= pivo){
            i++;
        }
        while(vetor[j] > pivo){
            j--;
        }
        if(i < j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
    vetor[esq] = vetor[j];
    vetor[j] = pivo;

return j;
}

int QuickFind (int *vetor, int esq, int dir, int k) {
    int pivo;

    if(esq < dir){
        pivo = Particiona(vetor, esq, dir);
        if(pivo != k){
            if(pivo < k)
                QuickFind(vetor, pivo+1, dir, k);
            else
                QuickFind(vetor, esq, pivo-1, k);
        }
    }
    return vetor[pivo];
}

/*Função principal.*/
int main (int argc, char *argv[]) {
   clock_t start, end;
   double elapsed_time;
   srand(time(NULL));
   int i;

   //int tamanho = 10;
   //int *vetor = (int *)malloc(tamanho * sizeof(int));
   //for (i = 0; i < tamanho; i++) {
   //   vetor[i] = rand() % (tamanho+1);
   //}

   int tamanho = 8;
   int vetor[] = {7, 1, 3, 10, 17, 2, 21, 9};

   Imprimir (vetor, tamanho);
   start = clock();
   int pos = 2;
   printf("O elemento procurado na posicao %d e %d\n", pos, QuickFind(vetor, 0, tamanho-1, pos));
   end = clock();
   elapsed_time = (end - start)/(double)CLOCKS_PER_SEC;
   free (vetor);
   return 0;
}
