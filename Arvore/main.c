#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){

    //No* p1, *p2;
    /*p1 = cria_no(10);
    p2 = cria_no(20);

    printf("%d\n", p1->info);
    printf("%d\n", p2->info);

    libera_no(&p2);
    printf("%d\n", p2);
    
    p1 = libera(p1);

    printf("%d\n", p1);*/
    Arvore* a = cria_arvore();

    insere_arvore(12, a);
    insere_arvore(34, a);
    insere_arvore(2, a);
    insere_arvore(5, a);
    insere_arvore(9, a);
    insere_arvore(41, a);
    insere_arvore(20, a);
    insere_arvore(11, a);
    insere_arvore(5, a);
    insere_arvore(34, a);
    insere_arvore(12, a);
    printf("Arvore em ordem.\n");
    mostra_em_ordem(a);
    printf("\nArvore pos ordem.\n");
    pos_ordem(a); 
    printf("\nArvore pre ordem.\n");
    pre_ordem(a);

    printf("\nExistem %d nos na franja.", franja(a));
    printf("\nExistem %d nos nesta arvore.", conta_no(a));
    printf("\nA altura da arvore e de %d nos", altura(a));

    return 0;
}
