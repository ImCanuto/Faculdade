#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   int info;
   struct node *next;
} Lista;

void imprime_descrescente_recursivo (Lista *l) {
    if(l != NULL){
        imprime_descrescente_recursivo(l->next);
        printf("%d ", l->info);
    }
}
