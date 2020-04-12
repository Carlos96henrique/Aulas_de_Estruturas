#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int fibo(int n){
    if (n == 0) {
        return 1;
    }
    else {
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int n;

    scanf("%d",&n);

    printf("%d \n", fibo(n));
    
    return 0;
}