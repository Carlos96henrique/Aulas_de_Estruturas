#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha* p;
    inicia_pilha(p);
    int n;

    imprime(p);
    push(p, 10);
    push(p, 75);
    push(p, 300);
    push(p, 40);
    imprime(p);

    pop(p,&n);
    imprime(p);

    printf(" Exitem %d elementos na pilha\n", num_elementos(p));
    
    return 0;
}