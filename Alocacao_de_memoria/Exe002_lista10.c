#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, i;
	int *e;
	
	printf("Quantos dados voce deseja alocar:\n");
	scanf("%d",&t);
	 e = (int*) malloc(t*sizeof(int));
	 if (e == NULL){
	 	printf("Erro: memoria insuficiente\n");
	 	exit(1);
	 }
	 for (i=0; i<t; i++){
	 	printf("Digite os valores a serem guardados: e[%d]\n",i);
	 	scanf("%d",&e[i]);
	 }
	 for (i=0; i<t; i++){
	 	printf("Os valores guardados foram: %d\n", e[i]);
	 }
	 free(e);
	return 0;
}
