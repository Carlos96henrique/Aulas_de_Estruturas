#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicia_pilha(Pilha* p) { 
    p->prim = NULL;
    p->n_elementos = 0;
}
void push(Pilha* p, int i){
    No* novo = cria_no(i);
    if (novo != NULL) {
        if (!pilha_vazia(p)){
            novo->proximo = p->prim;
        }
        p->prim = novo;
        p->n_elementos++;
    }
}
int pop(Pilha* p, int* i){
    No* aux;
    if (pilha_vazia(p)){
        return 0;
    }
    aux = p->prim;
    *i = aux->info;
    p->prim = p->prim->proximo;
    libera_no(&aux);
    p->n_elementos--;
    return 1;
}
int pilha_vazia(Pilha* p) {
    return (p->prim==NULL);
}

void imprime(Pilha* p){
    No* aux;
    printf("\n");
    if (pilha_vazia(p)){
        printf("A pilha esta vazia.");
    }
    else{
        aux = p->prim;
        while (aux != NULL){
            printf("[%d] ", aux->info);
            aux = aux->proximo;
        }
    }
    printf("\n");
}

int num_elementos(Pilha* p){
    int i;
    if (pilha_vazia(p)){
        printf("Nao ha elementos.\n");
        return 0;
    }
    else
        i = p->n_elementos;
        return i;
}
