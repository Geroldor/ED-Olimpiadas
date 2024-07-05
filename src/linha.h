//
// Created by Geraldo Neto on 21/06/2024.
//

#ifndef TRABALHOED_LINHA_H
#define TRABALHOED_LINHA_H

typedef void* Linha;

/*Cria e define a forma de uma linha no projeto, a Linha possui cor, 
e coordenadas X e Y de seus pontos inicial e final*/

Linha criarLinha(int id, float x1, float x2, float y1, float y2, char* cor);

/*As Funções set alteram os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

void linhaSetId(Linha set, int id);

void linhaSetX1(Linha set, float x1);

void linhaSetX2(Linha set, float x2);

void linhaSetY1(Linha set, float y1);

void linhaSetY2(Linha set, float y2);

void linhaSetCor(Linha set, char* cor);

/*As Funções get retornam os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

int linhaGetId(Linha get);

float linhaGetX1(Linha get);

float linhaGetX2(Linha get);

float linhaGetY1(Linha get);

float linhaGetY2(Linha get);

char* linhaGetCor(Linha get);

#endif //TRABALHOED_LINHA_H
