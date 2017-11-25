#include <stdio.h>
#include <stdlib.h>
#include "Biblio.h"

// M-> Produtos
// N-> Pontos de Manufatura
// P-> Centros atacadistas

/**
Rotina: InicializaMatrizEstoque

Objetivo: Inicializa uma matriz com valores 0.

Parametros:
    Entrada:
        Não há.
    Saida:
        Não há.
    Entrada/Saida
        M, N, P e mEstoque tipo int.
Retorno:
    Não há.

Pseudo-codigo:
    Percorre a matriz armazenando 0 em todas suas posições.
*/

int GravaEstoqueMatrizExplicita(char *sArquivo, int M, int N, int P, int mEstoque[M][N][P]){
  FILE* arq = sArquivo;
	arq = fopen(sArquivo, "w");

}

