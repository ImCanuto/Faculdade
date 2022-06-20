#include "queue.h"

int main () {

    int n = 9;

    Fila *f1 = create_queue (n + 1);
    Fila *f2 = create_queue (n + 1);
    Fila *f3 = create_queue (n + 1);

    int i;
    for(i=1 ; i<=n ; i++){
        enqueue (f1, i);
        enqueue (f2, i);
        enqueue (f3, i);
    }

    int contador1 = 1;
    int contador2 = 0;
    int contador3 = 0;
    int sorteio1, sorteio2, sorteio3;

    while(!empty(f1)) {
        if (contador1 == numero_aleatorio(100)) {
            sorteio1 = dequeue(f1);
            contador1 = 0;
        }
        else {
            enqueue(f1, dequeue(f1));
            contador1++;
        }
    }

    while(!empty(f2)) {
        if (contador2 == numero_aleatorio(200)) {
            sorteio2 = dequeue(f2);
            contador2 = 0;
        }
        else {
            enqueue(f2, dequeue(f2));
            contador2++;
        }
    }

    while(!empty(f3)) {
        if (contador3 == numero_aleatorio(300)) {
            sorteio3 = dequeue(f3);
            contador3 = 0;
        }
        else {
            enqueue(f3, dequeue(f3));
            contador3++;
        }
    }

    printf("\n| %d | %d | %d |", sorteio1, sorteio2, sorteio3);
    if (compara (sorteio1, sorteio2, sorteio3))
        printf(" <-- Ganhou!\n");

    else
        printf(" <-- Que pena... Tente novamente!\n");


   return 0;
}
