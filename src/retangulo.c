#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

typedef struct r{
    int id;
    float base;
    float altura;
    float x;
    float y;
    char* corb;
    char* corp;
} retangulo;

Retangulo criarRetangulo(int id, float base, float altura, float x, float y, char* corb, char* corp)
{
    retangulo* novo = malloc(sizeof(struct r));
    Retangulo ret;
    novo->id = id;
    novo->base = base;
    novo->altura = altura;
    novo->x = x;
    novo->y = y;
    novo->corb = corb;
    novo->corp = corp;
    ret = novo;
    return ret;
}

void retanguloSetId(int id, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->id = id;
}

void retanguloSetBase(float base, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->base = base;
}

void retanguloSetAltura(float altura, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->altura = altura;
}

void retanguloSetX(float x, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->x = x;
}

void retanguloSetY(float y, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->y = y;
}

void retanguloSetCorBorda(char* corb, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->corb = corb;
}

void retanguloSetCorPreenchimento(char* corp, Retangulo set){
    retangulo* ret = (retangulo*) set;
    ret->corp = corp;
}

int retanguloGetId(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->id;
}

float retanguloGetBase(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->base;
}

float retanguloGetAltura(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->altura;
}

float retanguloGetX(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->x;
}

float retanguloGetY(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->y;
}

char* retanguloGetCorBorda(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->corb;
}

char* retanguloGetCorPreenchimento(Retangulo get){
    retangulo* ret = (retangulo*) get;
    return ret->corp;
}