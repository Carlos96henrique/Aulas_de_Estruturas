#include <stdio.h>
#include <stdlib.h>
#include "no.h"

No* cria_no(int i){
    No* aux = (No*) malloc (sizeof(No));
    if(aux){
        aux->right = NULL;
        aux->left = NULL;
        aux->info = i;
    }
    return aux;
}

void libera_no (No** pn) {
    if (*pn) {
        free(*pn);
        *pn = NULL;
    }
}
pont_no libera(pont_no p){
    if (p){
        free(p);
    }
    return NULL;
}