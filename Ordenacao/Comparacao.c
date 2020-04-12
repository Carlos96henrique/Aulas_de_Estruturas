#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int* v, int n);
void show(int* v, int n);
void selection(int* v, int n);
void bubble(int* v, int n);
void insertion(int* v, int n);

int main(){
    int* v;
    int n;
    time_t ini, fim;

    printf("Digite quantos valores deseja guardar:\n");
    scanf("%d",&n);

    v =(int*) malloc (n * sizeof(int));
    if (v) {
        srand(time(0));
        fill(v, n);
        /*show(v, n);
        ini = time(0);
        selection(v, n);
        fim = time(0);
        //show(v, n);
        printf("O selection sort demorou %d segundos para ordenar o vetor\n", fim-ini);
        */
        //fill(v, n);
        //show(v, n);
        ini = time(0);
        bubble(v, n);
        fim = time(0);
        //show(v, n);
        printf("O bubble Demorou %d segundos para ordenar o vetor\n", fim-ini);
        //
        /*srand(time(0));
        fill(v, n);
        //show(v, n);
        ini = time(0);
        insertion(v, n);
        fim = time(0);
        //show(v, n);
        printf("O insertion demorou %d segundos para ordenar o vetor\n", fim-ini);*/
    }
    return 0;
}
void fill(int* v, int n) {
    int i;
    for (i=0; i<n; i++) {
        v[i] = rand() % 1000;
    }
}

void show(int* v, int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("[%d] - ", v[i]);
    }
    printf("\n");
}
//Algoritmo selection
void selection(int* v, int n){
    int i, j, menor, troca;
    for (i=0; i<n-1; i++) {
        menor = i;
        for (j = i+1; j<n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        if (i != menor) {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}
//Algoritmo bubble
void bubble(int* v, int n){
    int i, j, aux;
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            if (v[j] > v[j+1]){
                printf("%d <<>> %d\n",v[j], v[j+1]);
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
//Algoritmo insetion
void insertion (int* v, int n){
    int i, j, chave;
    for (i=1; i<n; i++) {
        chave = v[i];
        j = i-1;
        while (j>=0 && v[j] > chave) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }
}