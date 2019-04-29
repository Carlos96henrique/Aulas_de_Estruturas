#include <stdio.h>
#include <stdlib.h>

//Aula 2, realloc

// Estamos trabalhando com um vetor "mágico" que muda de tamanho conforme os dados 
//entram e saem dos lugares alocados
struct magic_array{
    int tamanho;
    int ocupacao;
    int *v;
};

int main(){
    struct magic_array vm;
    struct magic_array *p_vm;
    printf("%d \n",sizeof(struct magic_array));
    printf("%d \n",sizeof(vm));
    printf("%d \n",sizeof(p_vm));

    vm.tamanho = 10;
    vm.ocupacao = 0;
    vm.v = (int*) malloc (10 * sizeof(int));
    p_vm = (struct magic_array*) malloc(sizeof(struct magic_array));
    p_vm->tamanho = 10;
    p_vm->ocupacao = 0;
    p_vm->v = (int*) malloc(10 * sizeof(int));
    return 0;
}
