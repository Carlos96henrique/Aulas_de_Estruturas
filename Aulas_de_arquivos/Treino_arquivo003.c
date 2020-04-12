#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Este programa apenas lê o arquivo criado pelo programa (Treino_arquivo002), exibe na tela

int main(){
	FILE *f;
	int i;
	
	f = fopen("arquivo002.txt","r");
	if (f==NULL){
		printf("Ocorreu um erro na leitura do arquivo, favor verficar\n");
		exit(1);
	}
	char c = fgetc(f);
	while(c!=EOF){
		printf("%c",c);
		c = fgetc(f);
	}
	printf("\nEncerra\n");
	fclose(f);
	return 0;
}
