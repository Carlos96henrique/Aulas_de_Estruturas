#ifndef FILA_H_
#define FILA_H_
#include "no.h"

struct fila{
    No* ini;
    No* fim;
};

typedef struct fila Fila;
void inicia_fila(Fila*);
int fila_vazia(Fila*);
int insere(Fila*, int);
int remove_fila(Fila*, int*);
void mostra_fila(Fila*);


#endif