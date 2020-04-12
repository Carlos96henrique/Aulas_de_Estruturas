#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    int i = n, j;
    if (n == 0) {
        return i;
    }
    else {
        return i + soma(n-1);
    }
}
int main(){
    int n, i;

    scanf("%d",&n);

    printf("A somatoria do valor %d e %d",n, soma(n));
    
    return 0;
}