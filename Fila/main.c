#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fila.h"

int main(){
    Fila* f = cria_fila(10);
    int n;
    srand(time(0));

    do{
        if (rand() % 2){
            insere_fila(f, rand()%10);
            mostra_fila(f);
            mostra_vetor(f);
        }
        else{
            if (remove_fila(f, &n)){
                printf("\n%d foi removido\n",n);
                mostra_vetor(f);
            }
        }
        mostra_fila(f);
    } while (!fila_vazia(f));

    return 0;
}