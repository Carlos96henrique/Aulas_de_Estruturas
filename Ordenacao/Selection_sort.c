#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int* v, int n);
void show(int* v, int n);
void selection(int* v, int n);

int main(){
    int* v;
    int n;

    printf("Digite quantos valores deseja guardar:\n");
    scanf("%d",&n);

    v =(int*) malloc (n * sizeof(int));
    if (v) {
        srand(time(0));
        fill(v, n);
        show(v, n);
        selection(v, n);
        show(v, n);
    }
    return 0;
}
void fill(int* v, int n) {
    int i;
    for (i=0; i<n; i++) {
        v[i] = rand() % 100;
    }
}

void show(int* v, int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("[%d] - ", v[i]);
    }
    printf("\n");
}
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