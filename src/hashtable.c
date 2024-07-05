#include "hashtable.h"
#include <stdlib.h>
#include <stdbool.h>

typedef struct h{
    char *chave;
    Value v;
    DescTpValue d;
    struct h *prox;
} hash;

HashTable newHashTable(char *fstat){
    hash *h = (hash *)malloc(sizeof(hash));
    h->chave = NULL;
    h->v = NULL;
    h->d = 0;
    h->prox = NULL;
    return h;
}

void addHt(HashTable h, char *chave, Value v, DescTpValue d){
    hash *aux = (hash *)h;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = (hash *)malloc(sizeof(hash));
    aux->prox->chave = chave;
    aux->prox->v = v;
    aux->prox->d = d;
    aux->prox->prox = NULL;
}

void getHt(HashTable h, char *chave, Value *v, DescTpValue *d){
    hash *aux = (hash *)h;
    while(aux->prox != NULL){
        aux = aux->prox;
        if(aux->chave == chave){
            *v = aux->v;
            *d = aux->d;
            return;
        }
    }
    *v = NULL;
    *d = 0;
}

bool existsHt(HashTable h, char *chave){
    hash *aux = (hash *)h;
    while(aux->prox != NULL){
        aux = aux->prox;
        if(aux->chave == chave){
            return true;
        }
    }
    return false;
}

void getRelatorioHt(HashTable h, char *buf, int n){
    hash *aux = (hash *)h;
    while(aux->prox != NULL){
        aux = aux->prox;
        //TODO
    }
}

void killHt(HashTable h){
    hash *aux = (hash *)h;
    hash *aux2;
    while(aux->prox != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    free(aux);
}


