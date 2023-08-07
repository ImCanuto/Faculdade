#include "arvore.h"


Arvore* cria_arv_vazia (void) {
   return NULL;
}

Arvore* constroi_arv (char c, Arvore *e, Arvore *d) {
   Arvore *no = (Arvore*)malloc(sizeof(Arvore));
   no->info = c;
   no->esq = e;
   no->dir = d;
   return no;
}

int verifica_arv_vazia (Arvore *a) {
   return (a == NULL);
}

void arv_libera (Arvore* a) {
   if (!verifica_arv_vazia(a)) {
      arv_libera (a->esq);
      arv_libera (a->dir);
      free(a);
   }
}

/*========= Exercício 1 - pré-ordem ====
a, b, d, c, e, f
*/

//========= Exercício 1 - in-ordem ====




//========= Exercício 1 - pós-ordem ====


//========= Exercício 2 - pré-ordem ====


//========= Exercício 2 - in-ordem ====


//========= Exercício 2 - pós-ordem ====


//========= Exercício 3 - pertence ====


//========= Exercício 4 - conta nós ====


//========= Exercício 5 - calcula altura ====



//========= Exercício 6 - conta folhas ====



int main (int argc, char *argv[]) {

   Arvore *a = constroi_arv ('a',
       constroi_arv('b',
       cria_arv_vazia(),
       constroi_arv('d', cria_arv_vazia(),cria_arv_vazia())
     ),
     constroi_arv('c',
       constroi_arv('e',cria_arv_vazia(),cria_arv_vazia()),
       constroi_arv('f',cria_arv_vazia(),cria_arv_vazia())
     )
   );

   arv_libera (a);

   return 0;
}
