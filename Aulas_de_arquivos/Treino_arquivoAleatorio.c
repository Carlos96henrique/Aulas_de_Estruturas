#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	FILE *f;
	f = fopen("arquivo004.txt","w");
	if(f==NULL){
		printf("Ocorreu um problema no arquivo, favor verificar\n");
		exit(1);
	}
	char leitor = fgetc(f);
	while(!feof(f)){
		scanf("%c",&leitor);
		leitor = fgetc(f);
	}
	fclose(f);
	return 0;
}
