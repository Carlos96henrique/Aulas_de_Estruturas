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
	/*Esse c�digo � idetico ao treino003, por�m usando a fun��o feof ao inv�s de EOF*/
	while(!feof(f)){
		printf("%c",c);
		c = fgetc(f);
	}
	fclose(f);
	return 0;
}
