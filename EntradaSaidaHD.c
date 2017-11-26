#include <stdio.h>
#include <stdlib.h>
#include "Biblio.h"
#include "EntradaSaidaPadrao.h"

// M-> Produtos
// N-> Pontos de Manufatura
// P-> Centros atacadistas

/**
Rotina: GravaEstoqueMatrizExplicita

Objetivo: Grava os estoques em um arquivo.

Parametros:
    Entrada:
        M, N, P e mEstoque tipo int.
    Saida:
        Não há.
    Entrada/Saida
        Não há.
Retorno:
    1 caso sem erros
    0 caso caminho do arquivo seja nulo.
    -1 caso erro em M N ou P

Pseudo-codigo:
    Checa erros
      Caso erros, retorna de acordo
    Percorre todos as possíveis combinações de M N e P
      Escreve no arquivo
    Retorna 1
*/

int GravaEstoqueMatrizExplicita(char *sArquivo, int M, int N, int P, int mEstoque[M][N][P]){
  FILE* arq = sArquivo;

  // Checa erros
  if (arq == null) {
    return 0;
  }
  if ( M < 0 || N < 0 || P < 0) {
    return -1;
  }

  // Percorre as combinações e escreve no arquivo
	arq = fopen(sArquivo, "w");
  for (size_t i = 0; i < M; i++) {
    for (size_t j = 0; j < N; j++) {
      for (size_t k = 0; k < P; k++) {
        fprintf(arq, "Produto: %s ; Ponto Manufatura: %s ; Centro: %s ; Estoque: %s \n", i, j, k, mEstoque[i][j][k] );
      }
    }
  }
  return 1;
}
