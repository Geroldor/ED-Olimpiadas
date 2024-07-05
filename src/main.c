#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "circulo.h"
#include "retangulo.h"
#include "linha.h"
#include "texto.h"
#include "geo.h"

int main() {
    FILE* comando = fopen("entrada.txt", "r");
    lerGeo(comando);

    return 0;
}
