#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int* v, int n){
    int i;
    for (i=0; i<n; i++) {
        v[i] = rand();
    }
}
void printar(int* v, int n){
    int i;
    printf("\n");
    for (i=0; i<n; i++) {
        printf("[%d] - ",v[i]);
    }
    printf("\n");

}
//Algoritmo bubble sort
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
        printar(v,n);
        ini = time(0);
        bubble(v,n);
        fim = time(0);
        printf("\n Demorou %d segundos para ordenar o vetor\n", fim-ini);
        printar(v,n);
    }
    return 0;
}