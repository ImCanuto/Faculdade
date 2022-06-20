#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Função que retorna 1 se a ordenação estiver correta e 0 caso contrário.*/
int Verifica_Ordenacao (int *vetor, int tamanho) {
  int i;
  for (i = 0; i < tamanho-1; i++) {
    if (vetor[i] > vetor[i+1]) {
       return 0;
    }
  }
  return 1;
}

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

void QuickSort (int *vetor, int esq, int dir) {
    int pivo;

    if(esq < dir){
        pivo = Particiona(vetor, esq, dir);
        QuickSort(vetor, esq, pivo-1);
        QuickSort(vetor, pivo+1, dir);
    }
}

/*Função principal.*/
int main (int argc, char *argv[]) {
   clock_t start, end;
   double elapsed_time;
   srand(time(NULL));
   int i;
   int tamanho = 10000;
   int *vetor = (int *)malloc(tamanho * sizeof(int));
   for (i = 0; i < tamanho; i++) {
      vetor[i] = tamanho - i;
   }
   //Imprimir (vetor, tamanho);
   start = clock();
   QuickSort (vetor, 0, tamanho-1);
   end = clock();
   elapsed_time = (end - start)/(double)CLOCKS_PER_SEC;
   printf("Tempo de execucao (Quick-Sort): %.2f\n", elapsed_time);
   if (!Verifica_Ordenacao(vetor, tamanho)) {
      printf("Erro: a ordenacao nao esta correta!\n");
   }
   //Imprimir (vetor, tamanho);
   free (vetor);
   return 0;
}
