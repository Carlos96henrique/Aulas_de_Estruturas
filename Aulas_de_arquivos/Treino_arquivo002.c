#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Esse programa cria um arquivo com a frase (Meu programa em C)
int main(){
	FILE *f;
	char texto[20] = "Meu programa em C";
	int i;
	
	f = fopen("arquivo002.txt","w");
	if(f==NULL){
		printf("Ocorreu um erro, favor verificar\n");
		exit(1);
	}
	else{
		printf("Arquivo criado com sucesso\n");
	}
	//primeira vez que uso a funcao strlen, ela retorna a quantidade de caracteres da string
	for(i=0; i<strlen(texto); i++){
		fputc(texto[i],f);
	}
	fclose(f);
	return 0;
}
