//
// Created by Geraldo Neto on 22/06/2024.
//

#ifndef TRABALHOED_TEXTO_H
#define TRABALHOED_TEXTO_H

typedef void* Texto;

/*Cria e define a forma de um texto no projeto, o texto possui o texto a ser mostrado,
fonte, tamanho da fonte, decoração da fonte, alem da coordenada X e Y*/

Texto criarTexto(int id, float x, float y, char* info, float tamanho, char* deco, char* familia);

/*As Funções set alteram os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

void textoSetId(Texto set, int id);

void textoSetX(Texto set, float x);

void textoSety(Texto set, float y);

void textoSetInfo(Texto set, char* info);

void textoSetFamilia(Texto set, char* familia);

void textoSetDeco(Texto set, char* deco);

void textoSetTamanho(Texto set, float tamanho);

/*As Funções get retornam os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

int textoGetId(Texto get);

float textoGetX(Texto get);

float textoGetY(Texto get);

char* textoGetInfo(Texto get);

char* textoGetDeco(Texto get);

char* textoGetFamilia(Texto get);

float textoGetTamanho(Texto get);

#endif //TRABALHOED_TEXTO_H
