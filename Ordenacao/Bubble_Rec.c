#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 10

void Bubble_recursivo(int array[], int tam){
    int i, j, aux;

    if (tam > 0){
        for (i = 1; i < tam; i++){
            for (j = 0; j < tam - 1; j++){
                if (array[j] > array[j+1]) {
                    aux = array[j];
                    array[j] = array[j+1];
                    array[j+1] = aux;
                }
            }
        Bubble_recursivo(array, tam-1);
        }
    }
}

int main(){
    int arr[T], i, n=T;

    srand(time(0));

    printf("Gerando vetor\n");
    for (i = 0; i < T; i++) {
        arr[i] = rand() %100;
    }

    printf("Vetor gerado antes de ordenar.\n");

    for (i = 0; i < T; i++) {
        printf("[%d]-",arr[i]);
    }

    Bubble_recursivo(arr, n);

    printf("\nVetor ordenado.\n");
    for (i = 0; i < T; i++) {
        printf("[%d]-", arr[i]);
    }
    return 0;
}
