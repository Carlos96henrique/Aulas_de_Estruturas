#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int* v, int n);
void show(int* v, int n);
void insertion(int* v, int n);

int main(){
    int* v, n;
    printf("Digite o numero de dados que voce deseja quardar:\n");
    scanf("%d",&n);

    v = (int*) malloc(n* sizeof(int));
    if (v) {
        srand(time(0));
        fill(v, n);
        show(v, n);
        insertion(v, n);
        show(v, n);
    }
    return 0;
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