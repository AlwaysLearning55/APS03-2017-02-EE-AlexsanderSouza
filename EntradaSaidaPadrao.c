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

void InicializaMatrizEstoque(int M, int N, int P, int mEstoque[M][N][P]){
  int i, j, k;
  for (size_t i = 0; i < M; i++) {
    for (size_t j = 0; j < N; j++) {
      for (size_t k = 0; k < P; k++) {
        mEstoque[M][N][P]=0;
      }
    }
  }
}

/**
Rotina: CheckValorInvalidoMNP

Objetivo: Checa valores invalidos..

Parametros:
    Entrada:
        Counter e Max, tipo int.
    Saida:
        Não há
    Entrada/Saida
        Não há
Retorno:
        1, caso valor válido.
        0, caso valor -1.
        -1, caso erro.

Pseudo-codigo:
    Checa se counter é maior que max, ou menor que -2
    checa se counter é -1
    retorna 1, caso não seja nenhum.
*/

int CheckValorInvalidoMNP(int counter, int Max){
  // Checa se counter é maior que max ou menor que -2
  if (counter <= -2 || counter > Max ){
    printf("%s\n", "Erro" );
    return -1;
  }
  // Checa se counter é -1
  if (counter == -1)
    return 0;

  return 1;

/**
Rotina: LeEstoqueMatrizExplicita

Objetivo: Lê e armazena em uma string o estoque.

Parametros:
    Entrada:
        Não há.
    Saida:
        Não há.
    Entrada/Saida
        M, N, P e mEstoque tipo int.
Retorno:
    0 caso saia do laço.
    +1 caso dê certo.

Pseudo-codigo:
    Recebe valores para i.
    Checa erros/decisões.
    Recebe valores para j.
    Checa erros/decisões.
    Recebe valores para k.
    Checa erros/decisões.
    Lê estoque e armazena na posição escolhida.
*/

int LeEstoqueMatrizExplicita(int M, int N, int P, int mEstoque[M][N][P]){
  int i, j, k, x;
  do {
    int QM = 0;

    //Recebe valores para i, j, k checando erros e decisões.
    GetValueInt(i, "Produto");
    if (CheckValorInvalidoMNP(i, M) == 0)
      return 1;
    if (CheckValorInvalidoMNP(i, M) == -1)
      QM++;

    GetValueInt(j, "Ponto de Manufatura");
    if (CheckValorInvalidoMNP(j, N) == 0)
      return 1;
    if (CheckValorInvalidoMNP(j, N) == -1)
      QM++;

    GetValueInt(k, "Centro atacadista");
    if (CheckValorInvalidoMNP(k, P) == 0)
      return 1;
    if (CheckValorInvalidoMNP(k, P) == -1)
      QM++;

    if (QM == 0) {
      //Lê e armazena quantidade
      GetValueInt(x, "Quantidade");
      mEstoque[i][j][k]+= x;
    }
  } while(1);
  return 0;
}

/*
Rotina: EscreveEstoqueMatrizExplicita

Objetivo: Printa o estoque.

Parametros:
    Entrada:
        Não há.
    Saida:
        Não há.
    Entrada/Saida
        M, N, P e mEstoque tipo int.
Retorno:
    0 caso saia do laço.
    +1 caso dê certo.

Pseudo-codigo:
    Recebe valores para i.
    Checa erros/decisões.
    Recebe valores para j.
    Checa erros/decisões.
    Recebe valores para k.
    Checa erros/decisões.
    Lê estoque e armazena na posição escolhida.
*/

int EscreveEstoqueMatrizExplicita(int M, int N, int P, int mEstoque[M][N][P]){
  int i, j, k;
  for (size_t i = 0; i < M; i++) {
    for (size_t j = 0; j < N; j++) {
      for (size_t k = 0; k < P; k++) {
        printf("Produto : [%d] Fabrica : [%d] Atacadista : [%d] Qtde : [%d]\n", i, j, k);
      }
    }
  }
}
