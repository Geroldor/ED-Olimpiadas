//
// Created by Geraldo Neto on 21/06/2024.
//

#ifndef TRABALHOED_CIRCULO_H
#define TRABALHOED_CIRCULO_H

typedef void* Circulo;

/*Cria e define a forma de um circulo no projeto, o circulo possui coordenadas X e Y, 
sendo sua referencia o centro dele, tambem possui cor de borda e preenchimento, alem de seu diamentro/área*/

Circulo criarCirculo(int id, float diametro, float x, float y, char* corb, char* corp);

/*As Funções set alteram os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

void circuloSetId(Circulo set, int id);

void circuloSetDiametro(Circulo set, float diametro);

void circuloSetX(Circulo set, float x);

void circuloSetY(Circulo set, float y);

void circuloSetCorBorda(Circulo set, char* corb);

void circuloSetCorPreenchimento(Circulo set, char* corp);

/*As Funções get retornam os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

int circuloGetId(Circulo get);

float circuloGetDiametro(Circulo get);

float circuloGetX(Circulo get);

float circuloGetY(Circulo get);

char* circuloGetCorBorda(Circulo get);

char* circuloGetCorPreenchimento(Circulo get);

#endif //TRABALHOED_CIRCULO_H
