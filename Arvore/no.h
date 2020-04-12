#ifndef NO_H_
#define NO_H_

// Interface de nós para arvore binária
typedef struct no{
    int info;
    struct no* left;
    struct no* right;
} No;
typedef No* pont_no;
No* cria_no(int);
void libera_no (No**);

pont_no libera(pont_no p);



#endif