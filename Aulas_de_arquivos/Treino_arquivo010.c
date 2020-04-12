#include <stdio.h>
#include <stdlib.h>

/*Essa e a funcao fwrite que escreve blocos binario em arquivos, e mais complexo que as 
fucoes vistas anteriormente*/

int main(){
	FILE *arq;
	arq = fopen("vetor_arquivo007.txt","wb");
	if(arq == NULL){
		printf("Ocorreu um erro com o arquivo, favor verificar.\n");
		exit(1);
	}
	int total_gravado, v[10] = {1,2,3,4,5,6,7,8,9,10};
	total_gravado = fwrite(v, sizeof(int), 10, arq);
	if (total_gravado!=10){
		printf("Ocorreu um erro na escrita do aruivo, favor verificar.\n");
		exit(1);
	}
	fclose(arq);
}
