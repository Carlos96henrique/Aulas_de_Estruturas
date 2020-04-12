#include <stdio.h>
#include <stdlib.h>

int main (){
	/*E nescessaro uma string para ler a string dentro do arquivo 
	porem se ela não for do mesmo tamanho que a do arquivo ela nao ira
	exibir tudo*/
	char str[20];
	FILE *f;
	f = fopen("arquivo006.txt","r");
	if (f == NULL){
		printf("Ocorreu um problema com o arquivo, favor verificar.\n");
		exit(1);
	}
	char *result = fgets(str,20 ,f);
	if(result == NULL){
		printf("Ocorreu um erro na leitura\n");
	}
	else{
		printf("%s",str);
	}
	printf("\n");
	fclose(f);
	return 0;
}
