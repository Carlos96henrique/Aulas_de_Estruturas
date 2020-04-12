#include <stdio.h>
#include <stdlib.h>
//Gravando uma struct com fwrite
struct dados{
	char nome[50], endereco[50];
	int codigo, idade;
};
int main(){
	FILE *arq;
	arq = fopen("arquivo008.txt","wb");
	if(arq == NULL){
		printf("Ocorreu um problema com o arquivo, favvor vrificar.\n");
		exit(1);
	}
	struct dados cad = {"Carlos Henrique", "Rua", 10, 22};
	fwrite(&cad, sizeof(struct dados),1,arq);
	fclose(arq);
	return 0;
}
