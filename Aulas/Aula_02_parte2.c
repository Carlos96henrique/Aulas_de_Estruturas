#include <stdio.h>
#include <stdlib.h>

//Vetor magico com uso de função 

struct vetor_magic{
    int tamanho;
    int ocupacao;
    int* v;
};

//Funcação que cria a alocaçao para o vetor
struct vetor_magic* cria_vetor (int t){
    struct vetor_magic* p;
    p = (struct vetor_magic*) malloc(sizeof(struct vetor_magic));

    //Sempre que alocar espaço é crucial que verifique se a alocação realmente funcionou
    if (p) {
    //ou if (p != NULL) {
        p->v = (int*) malloc(t * sizeof(int));
        if (!p->v) {
        //ou if (p->v == NULL) {
            return NULL;
        }
        p->tamanho = t;
        p->ocupacao = 0;
    }
    
    return p;
}
//Função para liberar memória após usar o vetor
struct vetor_magic* libera(struct vetor_magic* p){
    free(p->v);
    free(p);
    return NULL;
}
//Função que verifica se o vetor está cheio
int full(struct vetor_magic* p) {
    //Meio de retornar apenas a resposta ps:pode ser usado if
    return (p->tamanho == p->ocupacao);
}
int empty(struct vetor_magic* p) {
    //Metodo de negação
    return !p->ocupacao;
}
int insere(int i,struct vetor_magic* p){
    int* aux;
    int j;
    if (full(p)){
        aux = (int*) malloc(2 * p->tamanho * sizeof(int));
        if (aux){
            for (j=0; j < p->ocupacao; j++){
                aux[j] = p->v[j];
            }
            free(p->v);
            p->v = aux;
            p->tamanho = 2 * p->tamanho;
        }
        else{
            return 0;
        }
    }
    p->v[p->ocupacao++] = i;
    /* Ou 
    p->v[p->ocupaco] = i;
    p->ocupacao++; */
    return 1;
}
int main(){
    int t;
    struct vetor_magic* apont;
    //Digita p tamanho do vetor
    printf("Digite o tamanho inicial do vetor:\n");
    scanf("%d",&t);
    apont = cria_vetor(t);
    if (!apont) {
    /*ou if (apont == NULL) { */
        //verificando se a alocação funcionou
        printf("Ocorreu um erro na alocacao da struct\n");
    }
    else {
        printf("Alocacao efetuada\n");
        insere(2,apont);
    }

    return 0;
}