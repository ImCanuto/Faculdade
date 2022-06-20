#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   int info;
   struct node *next;
} Lista;

int conta_nos_itr (Lista *lista) {
    Lista *aux;
    int i = 0;

    for(aux = lista; aux != NULL; aux = aux->next){
        i++;
    }
return i;
}


int conta_nos_rec (Lista *lista) {
    if(lista == NULL)
        return 0;
    else
        return 1 + conta_nos_rec(lista->next);
}
