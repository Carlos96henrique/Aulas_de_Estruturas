#include <stdio.h>
#include <stdlib.h>
struct cadastro{
	char nome[40], endereco[40];
	int codigo, idade;
};

int main(){
	FILE *arq;
	
	arq = fopen("arquivo010.txt","wb");
	if(arq == NULL){
		printf("Ocorreu um problema no arquivo, favor verficar.\n");
		exit(1);
	}
	
	struct cadastro cad[4] = {"Carlos","Muritinga",001,22,
	"Cleiton","Paraguacu",002,28,
	"Viviane","Selco",003,17,
	"Willian","Natividade",004,23};
	fwrite(cad,sizeof(struct cadastro),4,arq);
	fclose(arq);
	return 0;
}
