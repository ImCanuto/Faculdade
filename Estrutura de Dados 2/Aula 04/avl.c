#include "avl.h"

Arvore* cria_arvore_vazia (void) {
   return NULL;
}

int Atualizar (Arvore *a){
    return (maior(Altura(a->esq), Altura(a->dir)) + 1);
}

int Balanceamento (Arvore *a){
    return (Altura(a->dir) - Altura(a->esq));
}

int Altura (Arvore *a){
    return (a == NULL ? -1 : a->altura);
}

Arvore* Rotacao_simples_esq (Arvore *a){
    No *t = a->dir;
    a->dir = t->esq;
    t->esq = a;
    a->altura = Atualizar(a);
    t->altura = Atualizar(t);

    return t;
}

Arvore* Rotacao_simples_dir (Arvore *a){
    No *t = a->esq;
    a->esq = t->dir;
    t->dir = a;
    a->altura = Atualizar(a);
    t->altura = Atualizar(t);
    
    return t;
}

Arvore* Rotacao_dupla_esq (Arvore *a){
    a->dir = Rotacao_simples_dir (a->dir);
    
    return Rotacao_simples_esq (a);
}

Arvore* Rotacao_dupla_dir (Arvore *a){
    a->esq = Rotacao_simples_esq (a->esq);

    return Rotacao_simples_dir (a);
}


