#include <stdio.h>
#include <stdlib.h>
#include <>
int main(){
	FILE *arq;
	
	arq = fopen("arq.txt","w");
	if(arq == NULL){
		printf("Ocorreu um erro no arquivo, favor verificar.\n");
		exit(1);
	}
	char gravador; 
	scanf("%c",&gravador);
	while (gravador != '0'){
		fputc(gravador,arq);
		scanf("%c",&gravador);
	}
	fclose(arq);
	
	arq = fopen("arq.txt","rb");
	if(arq == NULL){
		printf("Ocorreu um erro na leitura do arquivo, favor verificar.\n");
		exit(1);
	}
	char leitor = fgetc(arq);
	while(!feof(arq)){
		printf("%c",leitor);
		leitor = fgetc(arq);
	}
	fclose(arq);
	return 0;
}
