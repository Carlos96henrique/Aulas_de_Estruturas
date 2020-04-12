#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, arq;
	FILE *f;		
	
	f = fopen("arquivo.txt","w");
	if (f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}
	else{
		printf("Arquivo criado com sucesso\n");
	}
	
	return 0;
}
