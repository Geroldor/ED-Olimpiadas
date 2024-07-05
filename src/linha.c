//
// Created by Geraldo Neto on 21/06/2024.
//

#include "linha.h"
#include <stdlib.h>

typedef struct lin {
    int id;
    float x1;
    float x2;
    float y1;
    float y2;
    char* cor;
}linha;

Linha criarLinha(int id, float x1, float x2, float y1, float y2, char* cor)
{
    linha* novo = malloc(sizeof(struct lin));
    Linha out;
    novo->id = id;
    novo->x1 = x1;
    novo->x2 = x2;
    novo->y1 = y1;
    novo->y2 = y2;
    novo->cor = cor;
    out = novo;
    return out;
}

void linhaSetId(Linha set, int id)
{
    linha* lin = (linha*) set;
    lin->id = id;
}

void linhaSetX1(Linha set, float x1)
{
    linha* lin = (linha*) set;
    lin->x1 = x1;
}

void linhaSetX2(Linha set, float x2)
{
    linha* lin = (linha*) set;
    lin->x2 = x2;
}

void linhaSetY1(Linha set, float y1)
{
    linha* lin = (linha*) set;
    lin->y1 = y1;
}

void linhaSetY2(Linha set, float y2)
{
    linha* lin = (linha*) set;
    lin->y2 = y2;
}

void linhaSetCor(Linha set, char* cor)
{
    linha* lin = (linha*) set;
    lin->cor = cor;
}

int linhaGetId(Linha get)
{
    linha* lin = (linha*) get;
    return lin->id;
}

float linhaGetX1(Linha get)
{
    linha* lin = (linha*) get;
    return lin->x1;
}

float linhaGetX2(Linha get)
{
    linha* lin = (linha*) get;
    return lin->x2;
}

float linhaGetY1(Linha get)
{
    linha* lin = (linha*) get;
    return lin->y1;
}

float linhaGetY2(Linha get)
{
    linha* lin = (linha*) get;
    return lin->y2;
}

char* linhaGetCor(Linha get)
{
    linha* lin = (linha*) get;
    return lin->cor;
}