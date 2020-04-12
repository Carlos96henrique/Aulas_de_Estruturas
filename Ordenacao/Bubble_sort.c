#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int* arr, int qtd);

int main(){
    int array[50], i, j;
    int n = 51;   
    //Criando array com numeros aleatórios
    //O time pode receber NULL tambem, mas isso faz repetir
    srand(time(0));

    for (i = 0; i<50; i++) {
        array[i] = rand() % 1000;
        for (j = 0; j < 50; j++) {
            if(rand()%1000 == array[j]){
                array[i] = rand() % 1000;
            }
        }
    }

    printf("Antes de ordenar:\n");
    for (int i = 0; i<n-1; i++) {
        printf("[%d] ",array[i]);
    }
    printf("\nOrdenado:\n");
    bubble_sort(array, n-1);
    for (int i = 0; i<n-1; i++) {
        printf("[%d] ",array[i]);
    }
    return 0;
}

void bubble_sort(int* arr, int qtd){
    int i, aux, continua, fim=qtd;

    do{
        continua = 0;
        for (i = 0; i<fim-1; i++) {
            if (arr[i] > arr[i+1]) {
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    } while (continua != 0);
}