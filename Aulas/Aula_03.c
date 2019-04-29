#include <stdio.h>
#include <stdlib.h>

//Vetor magico com uso de função 
//Nesta aula nós continuamos o com o código, mas com 

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
int redimensiona(int novo_tamanho, struct vetor_magic* p) {
    int j;
    int* aux;
    aux = (int*) malloc(novo_tamanho * sizeof(int));
        if (!aux)
            return 0;
        for (j=0; j < p->ocupacao; j++){
            aux[j] = p->v[j];
        }
        free(p->v);
        p->v = aux;
        p->tamanho = novo_tamanho;
    return 1;
}
int insere(int i,struct vetor_magic* p){
    if (full(p)){//Aumenta
        if (!redimensiona(2 * p->tamanho, p))
            return 0;
    }
    p->v[p->ocupacao++] = i;
    /* Ou 
    p->v[p->ocupaco] = i;
    p->ocupacao++; */
    return 1;
}
int remover(int* i, struct vetor_magic* p){
    if (empty(p))
        return 0;
    *i = p->v[--p->ocupacao];
    if (p->ocupacao <= p->tamanho/4) //Diminui
        if (!redimensiona(p->tamanho/2, p))
            return 0;
    return 1;
}
void printar (struct vetor_magic* p){
    int i;
    printf("\nTamanho atual = %d, ocupacao atual = %d", p->tamanho, p->ocupacao);
    if (empty(p)) {
        printf("\nO vetor esta vazio\n");
    }
    else {
        for (i = 0; i<p->ocupacao; i++) {
            printf("%d \n", p->v[i]);
        }
    }
}
int main(){
    int t, n;
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
        for (n = 0; n<42; n++) {
            if (insere(n, apont)){
                printar(apont);
            }
            else{
                printf("Ocorreu um erro\n");
            }
        }
        while (remover(&n, apont)) {
            printf("\nO elemento %d foi removido\n",n);
            printar(apont);
        }
        apont = libera(apont);
    }
    return 0;
}