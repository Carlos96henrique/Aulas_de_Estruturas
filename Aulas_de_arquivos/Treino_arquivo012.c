#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	int i;
	arq = fopen("vetor_arquivo007.txt","rb");
	if (arq == NULL){
		printf("Ocorreu um erro na leitura, favor verificar.\n");
		exit(1);
	}
	int total_lido, v[10];
	total_lido = fread(v,sizeof(int),10,arq);
	if (total_lido != 10){
		printf("Ocorreu um erro na leitura, favor verificar.\n");
		exit(1);
	}
	fclose(arq);
	for (i=0; i<10; i++){
		printf("%d\n",v[i]);
	}
	return 0;
}
