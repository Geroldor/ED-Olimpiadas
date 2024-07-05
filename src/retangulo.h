#ifndef TRABALHOED_RETANGULO_H
#define TRABALHOED_RETANGULO_H

typedef void* Retangulo;

/**
 * Cria um retangulo
 * @param id id do retangulo
 * @param base tamanho da base
 * @param altura altura do retangulo
 * @param x posição x
 * @param y posição y
 * @param corb cor de borda
 * @param corp cor de preenchimento
 * @return
 */
Retangulo criarRetangulo(int id, float base, float altura, float x, float y, char* corb, char* corp);

/*As Funções set alteram os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

void retanguloSetId(int id, Retangulo set);

void retanguloSetBase(float base, Retangulo set);

void retanguloSetAltura(float altura, Retangulo set);

void retanguloSetX(float x, Retangulo set);

void retanguloSetY(float y, Retangulo set);

void retanguloSetCorBorda(char* corb, Retangulo set);

void retanguloSetCorPreenchimento(char* corp, Retangulo set);

/*As Funções get retornam os valores das respectivas variaveis que elas referem, isso é necessario devido
ao void* impossibilitar o acesso direto aos dados das structs*/

int retanguloGetId(Retangulo get);

float retanguloGetBase(Retangulo get);

float retanguloGetAltura(Retangulo get);

float retanguloGetX(Retangulo get);

float retanguloGetY(Retangulo get);

char* retanguloGetCorBorda(Retangulo get);

char* retanguloGetCorPreenchimento(Retangulo get);
#endif //TRABALHOED_RETANGULO_H
