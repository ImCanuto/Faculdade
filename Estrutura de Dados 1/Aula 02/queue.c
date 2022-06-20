#include "queue.h"

Fila* create_queue (int tam) {
   Fila *f = (Fila *)malloc(sizeof(Fila));
   f->ini = 0;
   f->fim = 0;
   f->tam = tam;
   f->vetor = (int*)malloc(tam*sizeof(int));
   return f;
}

/*Função para enfileirar um elemento de uma fila
  circular implementada através de um vetor!*/
void enqueue (Fila *f, int e) {
   if (full(f)) {
      printf("fila cheia: capacidade esgotada!");
      exit(1); /*aborta programa*/
   }
   f->vetor[f->fim] = e;
   f->fim = (f->fim + 1) % f->tam;
}

/*Função para desenfileirar um elemento de uma fila
  circular implementada através de um vetor!*/
int dequeue (Fila *f) {
   if (empty(f)) {
      printf("fila vazia!");
      exit(1); /*aborta programa*/
   }
   int elemento = f->vetor[f->ini];
   f->ini = (f->ini + 1) % f->tam;
   return elemento;
}

int empty (Fila *f) {
   return (f->ini == f->fim);
}

int full (Fila *f) {
   return (f->ini == ((f->fim + 1) % f->tam));
}

void free_queue (Fila *f) {
   free(f->vetor);
   free(f);
}




