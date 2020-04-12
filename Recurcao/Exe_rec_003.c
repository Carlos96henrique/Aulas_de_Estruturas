#include <stdio.h>
#include <stdlib.h>

int fat(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n", fat(n));
    return 0;
}
int fat(int n){
    int i = 0;
    if (n == 0) 
        return 1;
    else 
        return n * fat(n-1);
}