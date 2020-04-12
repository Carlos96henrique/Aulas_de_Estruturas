#ifndef NO_H_
#define NO_H_

struct no{
    int info;
    struct no* proximo;
};

typedef struct no No;

No* cria_no(int );
int libera_no(No** );

#endif