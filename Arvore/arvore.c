#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Arvore* cria_arvore(){
    Arvore* a = (Arvore*) malloc (sizeof (Arvore));
    if (a){
        a->raiz = NULL;
    }
    return a;
}
void insere_rec(No* novo, No* atual){
    if (novo->info > atual->info) {
        if(atual->right == NULL){
            atual->right = novo;
        }
        else {
            insere_rec(novo, atual->right);
        }
    }
    else {
        if (atual->left == NULL){
            atual->left = novo;
        }
        else{
            insere_rec(novo, atual->left);
        }
    }

}

int insere_arvore (int i, Arvore* a){
    No* novo = cria_no(i);
    if (novo) {
        if (arvore_vazia(a)){
            a->raiz = novo;
        }
        else{
            insere_rec (novo, a->raiz);
        }
        return 1;
    }
    return 0;
}

int arvore_vazia (Arvore* a) {
    if (a->raiz == NULL){
        return 1;
    }
    return 0;
}
//Parte recursiva do em ordem
void mostra_rec(No* atual){
    if (atual->left != NULL) {
        mostra_rec(atual->left);
    }
    printf("[%d]<- ", atual->info);
    if (atual->right != NULL){
        mostra_rec(atual->right);
    }
}
/*Você deve visitar primeiro a sub-árvore esquerda, 
depois a raiz e por último a sub-árvore direita. */
void mostra_em_ordem(Arvore* a) {
    if (arvore_vazia(a)){
        printf("A arvore está vazia\n");
    }
    else{
        mostra_rec(a->raiz);
    }
}

//Parte recursiva do pos ordem
void pos_ordem_rec(No* atual){
    
    if (atual->left != NULL){
        pos_ordem_rec(atual->left);
    }
    if (atual->right != NULL){
        pos_ordem_rec(atual->right);
    }
    printf("[%d]<- ", atual->info);

}
/*Você deve visitar primeiro a sub-árvore esquerda, 
depois a sub-árvore direita e por último a raiz. */
void pos_ordem(Arvore* a){
    if (arvore_vazia(a)){
        printf("Arvore esta vazia.");
    }
    else {
        pos_ordem_rec(a->raiz);
    }
}
//Parte recursiva do pre oredem
void pre_ordem_rec(No* atual){
    printf("[%d]<- ", atual->info);
    if (atual->left != NULL){
        pre_ordem_rec(atual->left);
    }
    if (atual->right != NULL){
        pre_ordem_rec(atual->right);
    }
}
/*Você deve visitar primeiro a raiz, 
depois a sub-árvore esquerda e por último a sub-árvore direita. */
void pre_ordem(Arvore* a){
    if (arvore_vazia(a)){
        printf("A arvore esta vazia.\n");
    }
    else{
        pre_ordem_rec(a->raiz);
    }
    printf("\n");
}
void franja_rec(No* atual, int* x){
    if (atual->left !=NULL) {
        franja_rec(atual->left, x);
    }
    if (atual->right != NULL){
        franja_rec(atual->right, x);
    }
    if (atual->left == NULL && atual->right == NULL) {
        *x += 1;
    }
}
int franja(Arvore* a){
    int numNo=0;
    if (arvore_vazia(a)) {
        return 0;
    }
    else {
        franja_rec(a->raiz, &numNo);
        return numNo;
    }

}
void conta_no_rec(No* atual, int* x){
    if(atual->left != NULL){
        *x+=1;
        conta_no_rec(atual->left, x);
    }
    if (atual->right != NULL){
        *x+=1;
        conta_no_rec(atual->right, x);
    }
}
int conta_no(Arvore* a){
    int numNo=0;
    if (arvore_vazia(a)){
        return 0;
    }
    else {
        numNo++;
        conta_no_rec(a->raiz, &numNo);
        return numNo;
    }
}
void altura_rec(No* atual, int* x, int* auxalt){
    if (atual->left != NULL){
        *auxalt+=1;
        altura_rec(atual->left, x, auxalt);
        *auxalt-=1;
    }
    if(*auxalt > *x){
        *x = *auxalt;
    }

    if (atual->right != NULL){
        *auxalt+=1;
        altura_rec(atual->right, x, auxalt);
        *auxalt-=1;
    }

}
int altura(Arvore* a){
    int aux=0;
    int auxalt=0;
    if (arvore_vazia(a)){
        return 0;
    }
    else {
        altura_rec(a->raiz, &aux, &auxalt);
        return aux;
    }
}