#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Criado apenas para aprender como criar numeros aleatorios em C
//e para auxiliar no exercicio Bubble_sort
int main(){
    int arr[10],i, j;

    srand(time(NULL));

    for (i = 0; i<10; i++) {
        arr[i] = rand() % 1000;
        for (j = 0; j < 10; j++) {
            if(rand()%1000 == arr[j]){
                arr[i] = rand() % 1000;
            }
        }
    }
    for (i = 0; i<10; i++) {
        printf("%d - ", arr[i]);
    }
    return 0;
}