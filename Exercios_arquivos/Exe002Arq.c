#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq, *arq2;
	char nomeArq[100];
	char nomeArq2[100];
	
	printf("Digite o nome do arquivo [ate 100 caracteres]:\n");
	gets(nomeArq);
	printf("Nome criado\n");
	arq = fopen(nomeArq,"w");
	if (arq == NULL){
		printf("Ocorreu um erro, favor verificar.\n");
		exit(1);
	}
	printf("Digites os caracteres:\n");
	char leitor = fgetc(arq);
	f
	fclose(arq);
	printf("Digite o nome do arquivo de convercao [até 100 caracteres]:\n");
	gets(nomeArq2);
	
	arq = fopen(nomeArq,"r");
	arq2 = fopen(nomeArq2,"w");
	if (arq == NULL && arq2 == NULL){
		printf("Ocorreu um problema com os arquivos, favor verificar.\n");
		exit(1);
	}
	leitor = fgetc(arq);
	while(leitor != EOF){
		fputc(toupper(leitor),arq2);
		printf("%c",leitor);
		fgetc(arq);
	}
	fclose(arq);
	fclose(arq2);
	return 0;
}
