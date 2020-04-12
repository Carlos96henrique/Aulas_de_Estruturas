#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubble_recursivo(int* array, int qtd);
void swap(int* a, int* b);

void bubble_recursivo(int* array, int qtd){
    int fim = qtd, continua;
    do{
        continua = 0;
        for (int i = 0; i < fim-1; i++) {
            if (array[i] > array[i+1]) {
                swap(&array[i], &array[i+1]);
                continua = i;
            }
        }
        fim--;
    }while (continua != 0);
}

void swap(int* a, int* b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int arr[50], i, j, n=51;

    srand(time(NULL));

    for (i = 0; i < 50; i++) {
        arr[i] = rand() % 1000;
        for (j = 0; j < 50; j++) {
            if (rand() % 1000 == arr[j]) {
                arr[i] = rand() % 1000;
            }
        }
    }

    printf("Antes de ordenar:\n");

    for (i = 0; i < n-1; i++) {
        printf("[%d] ", arr[i]);
    }
    printf("\n");

    bubble_recursivo(arr, n-1);

    printf("Ordenado:\n");
    for (i = 0; i < n-1; i++) {
        printf("[%d] ", arr[i]);
    }

    return 0;
}