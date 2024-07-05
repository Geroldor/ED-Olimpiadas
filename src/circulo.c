//
// Created by Geraldo Neto on 21/06/2024.
//

#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct cir{
    int id;
    float diametro;
    float x;
    float y;
    char* corb;
    char* corp;
} circulo;

Circulo criarCirculo(int id, float diametro, float x, float y, char* corb, char* corp)
{
    circulo* novo = malloc(sizeof(struct cir));
    Circulo out;
    novo->id = id;
    novo->diametro = diametro;
    novo->x = x;
    novo->y = y;
    novo->corb = corb;
    novo->corp = corp;
    out = novo;
    return out;
}

void circuloSetId(Circulo set, int id){
    circulo* cir = (circulo*) set;
    cir->id = id;
}


void circuloSetDiametro(Circulo set, float diametro){
    circulo* cir = (circulo*) set;
    cir->diametro = diametro;
}


void circuloSetX(Circulo set, float x){
    circulo* cir = (circulo*) set;
    cir->x = x;
}


void circuloSetY(Circulo set, float y){
    circulo* cir = (circulo*) set;
    cir->y = y;
}


void circuloSetCorBorda(Circulo set, char* corb){
    circulo* cir = (circulo*) set;
    cir->corb = corb;
}

void circuloSetCorPreenchimento(Circulo set, char* corp){
    circulo* cir = (circulo*) set;
    cir->corp = corp;
}

int circuloGetId(Circulo get){
    circulo* cir = (circulo*) get;
    return cir->id;
}

float circuloGetDiametro(Circulo get){
    circulo* cir = (circulo*) get;
    return cir->diametro;
}

float circuloGetX(Circulo get){
    circulo* cir = (circulo*) get;
    return cir->x;
}

float circuloGetY(Circulo get){
    circulo* cir = (circulo*) get;
    return cir->y;
}

char* circuloGetCorBorda(Circulo get){
    circulo* cir = (circulo*) get;
    return cir->corb;
}

char* circuloGetCorPreenchimento(Circulo get){
    circulo* cir = (circulo*) get;
    return cir->corp;
}