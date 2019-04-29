#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha* inicia_pilha (int capacidade){
    struct pilha* p;
    p = (struct pilha*) malloc (sizeof(struct pilha));
    if (p){
        p->dados = (int*) malloc(capacidade * sizeof(int));
        if (p->dados) {
            p->topo = 0;
            p->capacidade = capacidade;
        }
        else {
            return NULL;
        }
    }
    return p;
}
int pilha_cheia(struct pilha* p){
    return (p->topo == p->capacidade);
       
}
int pilha_vazia(struct pilha* p){
    if (p->topo == 0){
        return 1;
    }
    return 0;
}
int push (int i, struct pilha* p){
    if (pilha_cheia(p))
        return 0;
    else {
        p->dados[p->topo] = i;
        p->topo++;
        return 1;
    }
}
int pop(int* i, struct pilha* p){
    if (pilha_vazia(p))
        return 0;
    *i = p->dados[--p->topo];
    return 1;
}
int consulta_topo(struct pilha* p){
    return p->dados[p->topo-1];
}
void mostrar_pilha(struct pilha*p){
    int i;
    printf("\n");
    if (pilha_vazia(p))
        printf("A Pilha esta vazia\n");
    else{
        for (i=p->topo-1; i>=0; i--){
            printf("[%d] ", p->dados[i]);
        }
    }
    printf("\n");
}