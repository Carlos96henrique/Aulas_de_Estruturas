#include <stdio.h>
#include <stdlib.h>
//Gravando arquivos com fprintf
int main(){
	FILE *arq;
	char nome[10]="Carlos";
	int idade = 22;
	float peso = 73.5;
	
	arq = fopen("arquivo009.txt","w");
	if (arq == NULL){
		printf("Ocorreu um erro com o arquivo, favor verificar.\n");
		exit(1);
	}
	printf("Nome: %s\nIdade: %d\nPeso: %f",nome, idade, peso);
	fprintf(arq,"Nome: %s\nIdade: %d\nPeso: %f",nome, idade, peso);
	fclose(arq);
	return 0;
}
