#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void inicia_fila(Fila* f){
    f->ini = f->fim = NULL;
}

int fila_vazia(Fila* f){
    if (f->ini == NULL){
        return 1;
    }
    return 0;
}

int insere(Fila* f, int i){
    No* novo,*aux;
    novo = cria_no(i);
    if (novo){
        if (fila_vazia(f)){
            f->ini = f->fim = novo;
            printf("O primeiro %d ", f->info);
            return 1;
        }
        aux = f->ini;
        while(aux->proximo != NULL) {
            printf("%d ", aux->info);
            aux = aux->proximo;
        }
        f->fim = aux;
        return 1;
    }
    return 0;
}
int remove_fila(Fila* f, int* i){
    No* aux;
    if (fila_vazia(f)){
        return 0;
    }
    aux = f->ini;
    *i = aux->info;
    f->ini = f->ini->proximo;
    libera_no(&aux);
    return 1;
}
void mostra_fila(Fila* f){
    No* aux;
    if (fila_vazia(f)){
        printf("A fila esta vazia.");
    }
    else{
        aux = f->ini;
        while (aux != NULL){
            printf("[%d] ", aux->info);
            aux = aux->proximo;
        }
    }
    printf("\n");
}