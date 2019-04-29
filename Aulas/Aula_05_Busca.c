#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Busca Bruta
int busca_simples(int x, int v[], int n, int* cont){
    int i;
    for (i=0; i<n; i++) {
        *cont = *cont+1;
        if (x==v[i]) {
            return i;
        }
    }
    return -1;
}
//Busca Bianaria
int busca_binaria(int x, int v[], int n, int* cont){
    int ini=0, fim=n-1, meio;
    while (ini<=fim) {
        meio=(ini+fim)/2;
        *cont = *cont+1;
        if (x==v[meio]) {
            return meio;
        }
        else if (x>v[meio]) {
            ini = meio+1;
        }
        else {
            fim = meio-1;
        }
    }
    return -1;
}
void fill(int* v, int n) {
    for (int i=0; i<n; i++) {
        v[i] = rand() % 1000;
    }
}

void show(int* v, int n) {
    for (int i=0; i<n; i++) {
        printf("[%d] - ",v[i]);
    }
    printf("\n");
}

void insertion(int* v, int n){
    int i, j, ch;
    for (i=1; i<n; i++) {
        ch = v[i];
        j = i-1;
        while (j>=0 && v[j] > ch) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = ch;
    }
}
int main(){
    int v[2048], i;
    int cont_s=0, cont_b=0;
    for (i=0; i<2048; i++)
        v[i] = i+1;

    printf("\nA busca simples, achei o valor 50000 na posicao %d\n", busca_simples(500000, v, 2048, &cont_s));
    printf("A busca simples fez %d iteracoes.",cont_s);
    printf("\nA busca binaria, achei o valor 50000 na posicao %d\n", busca_binaria(500000, v, 2048, &cont_b));
    printf("A busca binaria fez %d iteracoes.",cont_b);
    return 0;
}