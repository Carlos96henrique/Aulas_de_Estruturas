#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int i;
	FILE *f1, *f2;
	f1 = fopen("arquivo002.txt","r");
	f2 = fopen("arqMaiusculo.txt","w");
	if (f1 == NULL || f2 == NULL){
		printf("Ocorreu um erro nos ");
		exit(1);
	}
	char leitor = fgetc(f1);
	while(leitor != EOF){
		/*toupper para colocar os caracteres em maisculo, e alem disso e nescesario a 
		biblioteca <ctype>*/
		fputc(toupper(leitor),f2);
		printf("%c",leitor);
		//Nao se esqueça de mandar a proxima letra do arquivo
		leitor = fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
