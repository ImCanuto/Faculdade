#ifndef AVL_H
#define AVL_H

#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    char chave;
    int altura;
    struct node* esq;
    struct node* dir;
} No, Arvore;

Arvore* cria_arvore_vazia (void);
Arvore* Rotacao_simples_esq (Arvore *a);
Arvore* Rotacao_simples_dir (Arvore *a);
Arvore* Rotacao_dupla_esq (Arvore *a);
Arvore* Rotacao_dupla_dir (Arvore *a);
Arvore* Atualizar_fb_esq (Arvore *a);
Arvore* Atualizar_fb_dir (Arvore *a);
int Altura (Arvore *a);
int Balanceamento (Arvore *a);
int Atualizar (Arvore *a);
Arvore* Inserir (Arvore *a, char chave);

#endif
