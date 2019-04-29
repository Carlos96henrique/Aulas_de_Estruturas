#ifndef PILHA_H_
#define PILHA_H_

struct pilha {
    int* dados; //vetor de dados
    int topo; //idicador de topo (1ª posição disponivel)
    int capacidade; //tamanho do vetor escolhido pelo usuário
};

struct pilha* inicia_pilha(int );
int pilha_cheia(struct pilha*);
int pilha_vazia(struct pilha*);
int push(int, struct pilha*);
int pop(int*, struct pilha*);
int consulta_topo(struct pilha*);
void mostrar_pilha(struct pilha*);

#endif