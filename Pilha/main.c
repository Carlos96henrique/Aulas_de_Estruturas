#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <time.h>

int main(){
    struct pilha* p = inicia_pilha(10);
    int i;
    if(p){
        printf("\nPilha criada com sucesso\n");
        srand(time(0));
        do {
            if (rand()%2){
                push(rand()%10, p);
                mostrar_pilha(p);
            }
            else
                pop(&i, p);
            mostrar_pilha(p);
        } while (!pilha_vazia(p));
    }
    else{
        printf("\nOcorreu um erro na alocacao de memoria\n");
    }

    return 0;
}
