#ifndef HASHTABLE__H_
#define HASHTABLE__H_

/*
 * Fazer a documentacao do modulo
 */


typedef void *HashTable;
typedef int DescTpValue;
typedef void *Value;



HashTable newHashTable(char *fstat);
// fstat: arquivo para gravar estatisticas

void addHt(HashTable h, char *chave, Value v, DescTpValue d);

Value getHt(HashTable h, char *chave, DescTpValue *d);
// retorna valor e tipo do valor

bool existsHt(HashTable h, char *chave);

void getRelatorioHt(HashTable h, char *buf, int n);

void killHt(HashTable h);



#endif
