#include <stdio.h>
#include <stdlib.h>
struct dados{
	char nome[50], endereco[50];
	int codigo, idade;
};
int main (){
	FILE *arq;
	arq = fopen("arquivo008.txt","rb");
	if (arq ==NULL){
		printf("Ocorreu um erro, favor verificar.\n");
		exit(1);
	}
	struct dados cad;
	fread(&cad,sizeof(struct dados), 1,arq);
	
	printf("Os dados gravados nessa estrutura foram:\n%s\n%s\n%d\n%d",cad.nome,cad.endereco,cad.codigo,cad.idade);
	fclose(arq);
	return 0;
}
