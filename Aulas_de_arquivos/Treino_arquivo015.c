#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	arq = fopen("arquivo009.txt","r");
	if (arq == NULL){
		printf("Ocorreu um erro, favor verificar.\n");
		exit(1);
	}
	char ltexto[20],lnome[20];
	int lidade;
	float lpeso;
	fscanf(arq,"%s %s",ltexto,lnome);
	printf("%s %s\n",ltexto,lnome);
	fscanf(arq,"%s %d",ltexto, &lidade);
	printf("%s %d\n",ltexto, lidade);
	fscanf(arq,"%s %f",ltexto, &lpeso);
	printf("%s %f\n",ltexto, lpeso);
	fclose(arq);
	return 0;
}
