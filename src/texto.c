//
// Created by Geraldo Neto on 22/06/2024.
//

#include "texto.h"
#include <stdlib.h>

typedef struct tex{
    int id;
    float x;
    float y;
    char* info;
    float tamanho;
    char* deco;
    char* familia;
} texto;

Texto criarTexto(int id, float x, float y, char* info, float tamanho, char* deco, char* familia)
{
    texto* novo = malloc(sizeof(struct tex));
    Texto out;
    novo->id = id;
    novo->x = x;
    novo->y = y;
    novo->info = info;
    novo->familia = familia;
    novo->tamanho = tamanho;
    novo->deco = deco;
    out = novo;
    return out;
}

void textoSetId(Texto set, int id)
{
    texto* tex = (texto*) set;
    tex->id = id;
}

void textoSetX(Texto set, float x)
{
    texto* tex = (texto*) set;
    tex->x = x;
}

void textoSety(Texto set, float y)
{
    texto* tex = (texto*) set;
    tex->y = y;
}

void textoSetInfo(Texto set, char* info)
{
    texto* tex = (texto*) set;
    tex->info = info;
}

void textoSetFamilia(Texto set, char* familia)
{
    texto* tex = (texto*) set;
    tex->familia = familia;
}

void textoSetDeco(Texto set, char* deco)
{
    texto* tex = (texto*) set;
    tex->deco = deco;
}

void textoSetTamanho(Texto set, float tamanho)
{
    texto* tex = (texto*) set;
    tex->tamanho = tamanho;
}

int textoGetId(Texto get)
{
    texto* tex = (texto*) get;
    return tex->id;
}

float textoGetX(Texto get)
{
    texto* tex = (texto*) get;
    return tex->x;
}

float textoGetY(Texto get)
{
    texto* tex = (texto*) get;
    return tex->y;
}

char* textoGetInfo(Texto get)
{
    texto* tex = (texto*) get;
    return tex->info;
}

char* textoGetDeco(Texto get)
{
    texto* tex = (texto*) get;
    return tex->deco;
}

char* textoGetFamilia(Texto get)
{
    texto* tex = (texto*) get;
    return tex->familia;
}

float textoGetTamanho(Texto get)
{
    texto* tex = (texto*) get;
    return tex->tamanho;
}