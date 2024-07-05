#include "circulo.h"
#include "retangulo.h"
#include "linha.h"
#include "texto.h"
#include "svg.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerGeo(FILE* geo) {
    char comando[10];
    char familia[20];
    char deco[10];
    float tamanho;
    FILE* svg = fopen("saida.svg", "w");
    while (1) {
        if (feof(geo)) {
            break;
        }
        fscanf(geo, "%s", comando);
        if (strcmp(comando, "c") == 0) {
            int id;
            double raio;
            double x;
            double y;
            char corBorda[20];
            char corPreenchimento[20];
            fscanf(geo, "%d %lf %lf %lf %s %s", &id, &raio, &x, &y, corBorda, corPreenchimento);
            Circulo circulo = criarCirculo(id, raio, x, y, corBorda, corPreenchimento);
            escreveCirculoSvg(svg, circuloGetX(circulo), circuloGetY(circulo), circuloGetRaio(circulo), "corBorda");
            //inserir na arvore marcando como tipo 2
        } else if (strcmp(comando, "r") == 0) {
            int id;
            double w;
            double h;
            double x;
            double y;
            char corBorda[20];
            char corPreenchimento[20];
            fscanf(geo, "%d %lf %lf %lf %lf %s %s", &id, &w, &h, &x, &y, corBorda, corPreenchimento);
            Retangulo retangulo = criarRetangulo(id, w, h, x, y, corBorda, corPreenchimento);
            printf("r %d %lf %lf %lf %lf %s %s\n", id, w, h, x, y, corBorda, corPreenchimento);
            //inserir na arvore marcando como tipo 1
        } else if (strcmp(comando, "t") == 0) {
            int id;
            double x;
            double y;
            char texto[255];
            fscanf(geo, "%d %lf %lf %s", &id, &x, &y, texto);
            Texto text = criarTexto(id, x, y, texto, tamanho, deco, familia);
            printf("t %d %lf %lf %s\n", id, x, y, texto);
            //inserir na arvore marcando como tipo 4
        } else if(strcmp(comando, "ts") == 0){
            fscanf(geo, "%s %f %s", familia, &tamanho, deco);
            printf("ts %s %f %s\n", familia, tamanho, deco);
        } else if(strcmp(comando, "l") == 0){
            int id;
            double x1;
            double y1;
            double x2;
            double y2;
            char cor[20];
            fscanf(geo, "%d %lf %lf %lf %lf %s", &id, &x1, &y1, &x2, &y2, cor);
            Linha linha = criarLinha(id, x1, y1, x2, y2, cor);
            printf("l %d %lf %lf %lf %lf %s\n", linhaGetId(linha), linhaGetX1(linha), linhaGetY1(linha), linhaGetX2(linha), linhaGetY2(linha), linhaGetCor(linha));
            //inserir na arvore marcando como tipo 3
        }
    }
}
