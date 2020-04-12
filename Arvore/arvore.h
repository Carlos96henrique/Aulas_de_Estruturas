#ifndef ARVORE_H_
#define ARVORE_H_
#include "no.h"
// Estrutura da arvore
typedef struct{
    No* raiz;
} Arvore;
//Função de criar arvore
Arvore* cria_arvore();
int arvore_vazia (Arvore*);
//Insere  na arvore
//O usuario não precisa saber para que lado vai ser inserido
int insere_arvore(int , Arvore* );
//Imprime a arvore mostrando: esquerda, raiz e direita.
void mostra_em_ordem(Arvore* ) ;
//Exercicio 1: Conta os números de nós.
int conta_no(Arvore*);
//Exercicio 1: Conta nós da franja.
int franja(Arvore* );
//Exercicio 1: Altura da arvore.
int altura(Arvore* );
//2º Exercicio: Implementação do pós ordem.
void pos_ordem(Arvore* );
//2º Exercicio: Implementação do pré ordem.
void pre_ordem(Arvore* );

#endif