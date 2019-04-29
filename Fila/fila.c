#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila {
    int* dados;
    int prim, ult, cont, capacidade;
};

Fila* cria_fila(int capacidade) {
    Fila* f = (Fila*) malloc (sizeof(Fila));

    if (f) {
        f->dados = (int*) malloc (capacidade * sizeof(int));
        if (f->dados) {
            f->prim = 0;
            f->ult = 0;
            f->cont = 0;
            f->capacidade = capacidade;
        }
        else {
            return NULL;
        }
    }
    return f;
}
//Funcao para facilitar o giro da fila
int proxima (int pos, Fila* f) {
    return (pos+1) % f->capacidade;
}
int fila_vazia(Fila* f) {
    return !f->cont;
}
int fila_cheia(Fila* f){
    return f->cont == f->capacidade;
}
int insere_fila(Fila* f, int n) {
    if (fila_cheia(f)){
        return 0;
    }
    f->dados[f->ult] = n;
    f->ult = proxima(f->ult, f);
    f->cont++;

    return 1;
}

int remove_fila(Fila* f, int* n) {
    if (fila_vazia(f)){
        return 0;
    }
    *n = f->dados[f->prim];
    f->prim = proxima(f->prim, f);
    f->cont--;

    return 1;
}
int ocupacao(Fila* f){
    return f->cont;
}

void mostra_fila(Fila* f){
    int i;
    if (fila_vazia(f)){
        printf("Nao ha elementos dentro da fila");
        return ;
    }
    printf("\n");
    for (i = f->prim; i!=f->ult; i = proxima(i,f)) {
        printf("[%d]-", f->dados[i]);
    }
}
void mostra_vetor(Fila* f){
    int i;
    printf("\n");
    if(f->prim < f->ult){
        for (i=0; i<f->prim; i++){
            printf("[*]-");
        }
        for (i=f->prim; i<f->ult; i++){
            printf("[%d]-", f->dados[i]);
        }
        for(i=f->ult; i<f->capacidade; i++) {
            printf("[*]-");
        }
    }
    else {
        for(i=0; i<f->ult; i++){
            printf("[%d]-", f->dados[i]);
        }
        for(i=f->ult; i<f->prim; i++) {
            printf("[*]");
        }
        for(i=f->prim; i<f->capacidade; i++){
            printf("[%d]-",f->dados[i]);
        }
    }
}