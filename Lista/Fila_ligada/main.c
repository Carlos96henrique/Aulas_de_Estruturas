#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila* f;
    inicia_fila(f);

    insere(f, 10);
    insere(f, 2);
    insere(f, 6);
    insere(f, 10);
    mostra_fila(f);


    return 0;
}