#include <stdio.h>
#include <stdlib.h>
//Estudando alocação dinamica
int main(){
	//Usando a funcao malloc
	int *p;
	int i;
	/* malloc reserva o espaco da memoria e trabalha como um ponteiro para 
	demonstrar onde esta o endereco dessa memoria*/
	p = (int*) malloc(5*sizeof(int));
	if (p == NULL){
		printf("Memoria insuficiente\n");
		exit(1);
	}
	for (i=0; i<5; i++){
		printf("Digite os valores: p[%d]\n", i);
		scanf("%d",&p[i]);
	}
	for(i=0; i<5; i++){
		printf("Valores digitados na memoria alocada: %d\n",p[i]);
	}
	//A fucao free liber o espaco de memoria reservado
	free(p);
	return 0;
}
