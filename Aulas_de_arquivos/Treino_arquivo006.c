#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	f = fopen("arquivo005.txt","w");
	if (f == NULL){
		printf("Ocorreu um problema no arquivo, favor verficar\n");
		exit(1);
	}
	/*A funcao fputs coloca mais de um caractere por vez dentro do arquivo, porem ela
	reconhece a quebra de linha como um fim, logo ela nao escreve o que estiver na linha
	a baixo.*/
	fputs("Meu prgrama em C", f);
	fclose(f);
	return 0;
}
