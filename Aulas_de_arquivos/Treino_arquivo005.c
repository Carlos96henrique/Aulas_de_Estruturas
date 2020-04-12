#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	
	f = fopen("arquivo002.txt","r");
	if(f==NULL){
		printf("Ocorreu erro no arquivo, favor verifica.\n");
		exit(1);
	}
	char c = fgetc(f);
	/*Esse código é idetico ao treino003, porém usando a função feof ao invés de EOF*/
	while(!feof(f)){
		printf("%c",c);
		c = fgetc(f);
	}
	fclose(f);
	return 0;
}
