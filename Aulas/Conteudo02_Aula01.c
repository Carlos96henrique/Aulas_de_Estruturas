#include <stdio.h>
#include <stdlib.h>

int* f1(int n) {
    int i;
    int *v1 = (int*) malloc(n*sizeof(int));
    for (i=0; i<n; i++) {
        scanf("%d", &v1[i]);
    }
    return v1;
}
int main(){
    int *v1;
    v1 = f1(4);
    return 0;
}