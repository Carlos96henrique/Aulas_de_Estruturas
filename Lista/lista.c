#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inicia_lista(struct lista* l){
    l->primeiro = NULL;
}

int lista_vazia (struct lista* l) {
    if (l->primeiro == NULL)
        return 1;
    return 0;
    //pode ser feito com !l->primero;
}

int insere_inicio(int i, struct lista* l){
    No* novo = cria_no(i);
    if (novo != NULL) {
        if (!lista_vazia(l)) {
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
        return 1;
    }
}
int insere_fim(int i, struct lista* l){
    No* aux,* novo;
    novo = cria_no(i);
    if (novo){
        if (lista_vazia(l)){
            l->primeiro = novo;
        }
        else{
            aux = l->primeiro;
            while(aux->proximo != NULL) {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
        return 1;
    }
    return 0;
}
void mostra_lista(struct lista* l, char* msg) {
    No* aux;
    printf("\n%s\n", msg);
    if (lista_vazia(l)){
        printf("Lista vazia!");
    }
    else{
        aux = l->primeiro;
        while (aux != NULL) {
            printf("<-[%d]", aux->info);
            aux = aux->proximo;
        }
    }
    printf("\n");
}
int remove_inicio(int* i, struct lista* l){
    No* aux;
    if (lista_vazia(l)) {
        return 0;
    }
    aux = l->primeiro;
    *i = aux->info;
    l->primeiro = l->primeiro->proximo;
    //Ou l->primeiro = aux->proximo;
    libera_no(&aux);
    return 1;
}
int remove_fim(int* i, struct lista* l){
    No* aux;
    if(lista_vazia(l)) {
        return 0;
    }
    aux = l->primeiro;
    if (l->primeiro->proximo == NULL) {
        *i = aux->info;
        l->primeiro = NULL;
    }
    else {
        while (aux->proximo->proximo != NULL) {
            aux = aux->proximo;
        }
        *i = aux->proximo->info;
        libera_no(&aux->proximo);
    }
    return 1;
}