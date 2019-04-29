#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int* v, int n){
    int i;
    for (i=0; i<n; i++) {
        v[i] = rand();
    }
}
void printar(int* v, int n, char* msg){
    int i;
    printf("\n");
    for (i=0; i<n; i++) {
        printf("[%d] - ",v[i]);
    }
    printf("\n");
}
//Algoritmo insertion
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
//Algoritmo bubble
void bubble(int* v, int n){
    int i, j, aux;
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
int main(){
    int* v, n;
    time_t ini, fim;
    printf("Digite o tamanho do vetor\n");
    scanf("%d",&n);
    v = (int*) malloc(n * sizeof(int));
    if (v){
        srand(time(0));
        fill(v,n);
        //printar(v,n,"vetor 1");
        ini = time(0);
        bubble(v,n);
        //printar(v,n,"vetor ordenado bubble");
        fim = time(0);
        printf("\nO bubble Demorou %d segundos para ordenar o vetor\n", fim-ini);
        fill(v,n);
        //printar(v,n,"vetor 2");
        ini = time(0);
        insertion(v,n);
        //printar(v,n,"vetor ordenado insertion");
        fim = time(0);
        printf("\nO insertion Demorou %d segundos para ordenar o vetor\n", fim-ini);
    }
    return 0;
}