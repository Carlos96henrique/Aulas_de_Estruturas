#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[20];
	FILE *f;
	f = fopen("arquivo006.txt","r");
	if(f == NULL){
		printf("Ocorreu um problema, favor verificar");
		exit(1);
	}
	fgets(str,20,f);
	printf("%s",str);
	
	fclose(f);
	return 0;
}
