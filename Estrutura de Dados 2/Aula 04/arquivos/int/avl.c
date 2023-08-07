#include "avl.h"

/*Função que devolve o maior entre dois números inteiros!*/
int maior (int esq, int dir) {
   return (esq > dir ? esq : dir);
}

/*Função que devolve a altura de uma árvore ou ramo*/
int altura (Arvore* a) {
   return (a == NULL ? -1 : a->altura);
}

/*Função que atualiza a altura de uma árvore ou ramo*/
int atualizar_altura (Arvore *a) {
    return (maior(altura(a->esq), altura(a->dir)) + 1);
}

/*Função que devolve o fator de balanceamento de uma árvore ou ramo*/
int balanceamento (Arvore *a) {
    return (altura(a->dir) - altura(a->esq));
}

/*Função para efetuar uma rotação simples à esquerda em um ramo*/
Arvore* rotacao_simples_esq (Arvore* a) {
    No *t = a->dir;
    a->dir = t->esq;
    t->esq = a;
    a->altura = atualizar_altura(a);
    t->altura = atualizar_altura(t);

    return t;
}

/*Função para efetuar uma rotação simples à direita em um ramo*/
Arvore* rotacao_simples_dir (Arvore* a) {
    No *t = a->esq;
    a->esq = t->dir;
    t->dir = a;
    a->altura = atualizar_altura(a);
    t->altura = atualizar_altura(t);

    return t;
}

/*Função para efetuar uma rotação dupla à esquerda em um ramo*/
Arvore* rotacao_dupla_esq (Arvore* a) {
    a->dir = rotacao_simples_dir (a->dir);

    return rotacao_simples_esq (a);
}

/*Função para efetuar uma rotação dupla à direita em um ramo*/
Arvore* rotacao_dupla_dir (Arvore* a) {
    a->esq = rotacao_simples_esq (a->esq);

    return rotacao_simples_dir (a);
}

/*Função que atualiza o fator de balanceamento de uma árvore ou ramo à direita*/
Arvore* atualizar_fb_dir (Arvore *a) {
   a->altura = atualizar_altura(a);
   if (balanceamento(a) == +2) {
      if (balanceamento(a->dir) >= 0) {
         a = rotacao_simples_esq (a);
      }
      else {
         a = rotacao_dupla_esq (a);
      }
   }

   return a;
}

/*Função que atualiza o fator de balanceamento de uma árvore ou ramo à esquerda*/
Arvore* atualizar_fb_esq (Arvore *a) {
   a->altura = atualizar_altura(a);
   if (balanceamento(a) == -2) {
      if (balanceamento(a->esq) <= 0) {
         a = rotacao_simples_dir (a);
      }
      else {
         a = rotacao_dupla_dir (a);
      }
   }

   return a;
}

/*Função para inserir uma nova chave à árvore*/
Arvore* inserir (Arvore *a, int chave) {
   if (a == NULL){
      a = (No*)malloc(sizeof(No));
      a->chave = chave;
      a->altura = 0;
      a->esq = a->dir = NULL;
   }
   else if (chave < a->chave){
      a->esq = inserir (a->esq, chave);
      a = atualizar_fb_esq (a);
   }
   else{
      a->dir = inserir (a->dir, chave);
      a = atualizar_fb_dir (a);
   }

   return a;
}

/*Função para remover um nó de uma árvore binária de busca balanceada!*/
Arvore* remover (Arvore *a, int chave) {
   if (a == NULL) {
      return NULL;
   }
   else {
      if (chave < a->chave) {
         a->esq = remover (a->esq, chave);
         a = atualizar_fb_dir (a);
      }
      else if (chave > a->chave) {
         a->dir = remover (a->dir, chave);
         a = atualizar_fb_esq (a);
      }
      else {
         if ((a->esq == NULL) && (a->dir == NULL)) {
            free (a);
            a = NULL;
         }
         else if (a->esq == NULL) {
            No *tmp = a;
            a = a->dir;
            free (tmp);
         }
         else if (a->dir == NULL) {
            No *tmp = a;
            a = a->esq;
            free (tmp);
         }
         else {
            No *tmp = a->esq;
            while (tmp->dir != NULL) {
               tmp = tmp->dir;
            }
            a->chave = tmp->chave;
            tmp->chave = chave;
            a->esq = remover (a->esq, chave);
            a = atualizar_fb_dir (a);
         }
      }
      return a;
   }
}

/*Função para imprimir os nós de uma árvore binária de acordo com um percurso in-ordem!*/
void imprimir_in_order (Arvore* a, int nivel) {
   if (a != NULL) {
      int i;
      for (i = 0; i < nivel; i++) {
         printf("      ");
      }
      printf("Chave: %d (altura: %d, fb: %+d) no nível: %d\n", a->chave, a->altura, balanceamento(a), nivel);
      imprimir_in_order (a->esq, nivel + 1);
      imprimir_in_order (a->dir, nivel + 1);
   }
}

int main () {

   Arvore *AVL = NULL;

   AVL = inserir (AVL,14);
   AVL = inserir (AVL,5);
   AVL = inserir (AVL,28);
   AVL = inserir (AVL,2);
   AVL = inserir (AVL,8);
   AVL = inserir (AVL,18);
   AVL = inserir (AVL,33);
   AVL = inserir (AVL,1);
   AVL = inserir (AVL,3);
   AVL = inserir (AVL,6);
   AVL = inserir (AVL,11);
   AVL = inserir (AVL,15);
   AVL = inserir (AVL,20);
   AVL = inserir (AVL,30);
   AVL = inserir (AVL,38);
   AVL = inserir (AVL,4);
   AVL = inserir (AVL,7);
   AVL = inserir (AVL,10);
   AVL = inserir (AVL,12);
   AVL = inserir (AVL,16);
   AVL = inserir (AVL,19);
   AVL = inserir (AVL,21);
   AVL = inserir (AVL,29);
   AVL = inserir (AVL,31);
   AVL = inserir (AVL,35);
   AVL = inserir (AVL,39);
   AVL = inserir (AVL,13);
   AVL = inserir (AVL,22);
   AVL = inserir (AVL,32);
   AVL = inserir (AVL,34);
   AVL = inserir (AVL,36);
   AVL = inserir (AVL,40);
   AVL = inserir (AVL,37);


   imprimir_in_order (AVL, 0);
   printf("\n\n");
   AVL = remover(AVL, 1);
   imprimir_in_order(AVL, 0);


   return 0;
}

