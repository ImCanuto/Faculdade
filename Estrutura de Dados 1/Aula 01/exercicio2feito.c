#include <stdio.h>
#include <stdlib.h>

typedef struct{
   int ini;
   int fim;
   int tam;
   int *vetor;
}Fila;

Fila* criar_fila (int tamanho) {

    Fila *fila = (Fila *) malloc(sizeof(Fila));
    fila->ini = 0;
    fila->fim = 0;
    fila->tam = tamanho;
    fila->vetor = (int *) malloc(tamanho * sizeof(int));

    return fila;

   /*Para implementar uma fila sem struct era necessário um malloc para alocar
   o vetor com os elementos. Note que agora são necessários dois mallocs, um
   para a estrutura tipo fila e outro para o vetor que a fila contém!*/
}

void destruir_fila (Fila *f) {

    free(f->vetor);
    free(f);

   /*Para cada malloc da função criar_fila é necessário um free!*/
}

void enqueue (Fila *f, int elemento) {

    f->vetor[f->fim] = elemento;
    (f->fim)++;

   /*Criar uma lógica para armazenar o elemento na posição
   fim (que está dentro da variável tipo fila f e dentro do
   vetor que também está dentro da variável f)!
   Lembre de deixar a variável fim apontando
   para a próximo posição livre na fila.*/
}

int dequeue (Fila *f) {

    int retirar = f->vetor[f->ini];
    (f->ini)++;

    return retirar;

   /*Criar uma lógica para remover o elemento na posição
   ini (que está dentro da variável tipo fila f e dentro do
   vetor que também está dentro da variável f) e retornar
   este valor! Lembre de deixar a variável ini apontando
   para o próximo elemento da fila.*/
}

int main () {

   /*Inicializando a estrutura de dados fila!*/
    int tam = 10, i, elem = 1;
    Fila *f = criar_fila (tam);

   //Preenchendo a fila
   for (i=0 ; i<tam ; i++) {
   enqueue (f, elem);
   elem++;
   }

   /* Fazendo com que o programa imprima os 2 primeiros valores retirados*/
   for (i=0 ; i<2 ; i++) {
   printf("Valor retirado: %d\n", dequeue (f));

   }

   destruir_fila (f);

   return 0;
}
