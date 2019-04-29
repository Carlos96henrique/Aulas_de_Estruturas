#ifndef FILA_H_
#define FILA_H_


typedef struct fila Fila;
Fila* cria_fila(int);

int fila_cheia(Fila*);
int fila_vazia(Fila*);

int insere_fila(Fila* , int);
int remove_fila(Fila* , int*);

void mostra_fila(Fila* );
int ocupacao_fila(Fila* );

void mostra_vetor(Fila*);
#endif