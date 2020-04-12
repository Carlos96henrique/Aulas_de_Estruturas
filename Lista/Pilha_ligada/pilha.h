#ifndef PILHA_H_
#define PILHA_H_
#include "no.h"

struct pilha {
    No* prim;
    int n_elementos;
};

typedef struct pilha Pilha;

void inicia_pilha(Pilha*p);
void push(Pilha*, int);
int pop(Pilha*, int*);
void imprime(Pilha*);
int pilha_vazia(Pilha*);
int num_elementos(Pilha*);
#endif