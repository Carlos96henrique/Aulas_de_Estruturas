#include <stdio.h>
#include <stdlib.h>
#include "no.h"

No* cria_no(int i) {
    No* n = (No*) malloc (sizeof(No));
    if (!n) {
        return NULL;
    }
    n->info = i;
    n->proximo = NULL;

    return n;
}

int libera_no(No** n){
    if (*n) {
        free(*n);
        *n = NULL;
        return 1;
    }
    return 0;
}