#include "Arvore.h"
#include <stdio.h>
#include <stdlib.h>

Arvore * cria_arvore(){
    Arvore * a = (Arvore *) malloc (sizeof(Arvore));
    if(a){
        a->raiz = NULL;
    }
    return a;
}
void insere_rec(No *novo, No *atual){
    if(novo->info > atual->info){ //destra
        if(atual->dir == NULL){
            atual->dir = novo;
        }
        else{
            insere_rec(novo, atual->dir);
        }
    }
    else{
        if(atual->esq == NULL){
          atual->esq = novo;
        }
        else{
           insere_rec(novo, atual->esq);
        }
    }
}

void insere_rec(No *novo, No *atual){
    if(novo->info > atual->info){ //destra
        if(atual->dir == NULL){
            atual->dir = novo;
        }
        else{
            insere_rec(novo, atual->dir);
        }
    }
    else{
        if(atual->esq == NULL){
          atual->esq = novo;
        }
        else{
           insere_rec(novo, atual->esq);
        }
    }
}
int insere_arvore (int i, Arvore *a){  //*a ponteiro da raiz da arvore
    No * novo = cria_no(i);
    if(novo){
      if(arvore_v(a)){
            a->raiz = novo;
    }
    else{
        insere_rec(novo, a->raiz);
    }
return 1;
    }
    return 0;
}
int arvore_v(Arvore *a){
    if (a->raiz == NULL){
        return 1;
    }
    return 0;
    //return !a->raiz;
}
void mostra_rec(No *atual){
    if(atual->esq != NULL){
        mostra_rec(atual->esq);
    }
    printf("%d", atual->info);
    if(atual->dir != NULL){
        mostra_rec(atual->dir);
    }
}
void mostra_em_ordem (Arvore *a){
printf("\n");
    if(arvore_v(a)){
        printf("arvore sem nada");
    }
    else{
        mostra_rec(a->raiz);
    }
    printf("\n");
}
void pos_ordem_rec(No * a){
	if(a->esq != NULL){
		pos_ordem_rec(a->esq);
	}
	if(a->dir != NULL){
	 pos_ordem_rec(a->dir);	
	}
	 printf("[%d]<- ", a->info);
}
void pos_ordem(Arvore* a){
    if (arvore_vazia(a)){
        printf("Arvore esta vazia.");
    }
    else {
        pos_ordem_rec(a->raiz);
    }
}
void pre_ordem_rec(No* atual){
    printf("[%d]<- ", atual->info); //imprime a raiz primeiro 
    if (atual->esq != NULL){
        pre_ordem_rec(atual->esq);
    }
    if (atual->dir != NULL){
        pre_ordem_rec(atual->dir);
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
	

//precisa devolver o valor com n inteiros 
// conta o n de nós 
//conta o nível 0  da franja 
int franja(No * a){
	if(a == NULL){
	return 0; 
	}
	if(a->esq == NULL && a->dir == NULL){
		return 1; 
	}
	return franja(a->esq) + franja(a->dir);
}
//modula uma função para descobrir o maior
int maiorzao(int x, int y){
	if (x > y){
		return x; 
	}	
	else{
		return y; 
	}
}
// ver agora a h da arvore não esquecendo o maiorzao 
int altura(No * a){
	if((a==NULL) ||(a->esq == NULL && a->dir==NULL)){ //se todos os ponteiros forem 0, então retorna 0
		return 0;
	}
	else{
		//chama a função de comparação e põe como parametro a função altura e seus ponteiros
		return maiorzao(altura(a->esq), altura(a->dir)) + 1;
	}
}