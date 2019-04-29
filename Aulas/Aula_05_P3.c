#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n, cont1=0;
    srand(time(0));
    printf("Numero de lacamentos de moeda:\n");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        cont1 += rand() %2;
    }
    printf("\nResultado: \n%d caras, %d coroas\n", cont1, n-cont1);
    return 0;
}