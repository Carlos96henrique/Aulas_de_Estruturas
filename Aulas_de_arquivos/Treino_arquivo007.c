#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	f = fopen("arquivo006.txt","w");
	if (f==NULL){
		printf("Ocorreu um erro no arquivo, favvor verificar\n");
		exit(1);
	}
	char text[20] = "Meu programa em C";
	/*quando uma string esta vinclulada a uma variavel e dessa forma que usamos o 
	fputs*/
	int retorno = fputs(text,f);
	if (retorno == EOF){
		printf("Ocorreu um problema na gravacao do arquivo, favor verificar\n");
	}
	fclose(f);
	return 0;
}
