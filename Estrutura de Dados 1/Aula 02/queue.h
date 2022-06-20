#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct fila {
   int ini; /*guarda o inicio da fila*/
   int fim; /*guarda o fim da fila*/
   int tam; /*tamanho da fila*/
   int *vetor; /*vetor de elementos inteiros*/
} Fila;

Fila* create_queue (int tam);

void enqueue (Fila *f, int e);

int dequeue (Fila *f);

int empty (Fila *f);

int full (Fila *f);

void free_queue (Fila *f);

int numero_aleatorio (int numero);

int compara (int v1, int v2, int v3);


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


int numero_aleatorio (int numero){
    srand(time(NULL));
    int num = rand() % (numero + 1);

    if (num == 0)
        num++;
    return num;
}

int compara (int v1, int v2, int v3){
    if (v1 == v2 && v2 == v3)
        return 1;
    else
        return 0;

}






