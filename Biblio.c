#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

///  Biblioteca Biblio.h com funções aleatórias que podem ajudar a economia de memória
///  no programa principal. Autor: Alexsander Souza

/**
     Rotina: GetValueInt

          Objetivo: Armazenar um valor de um inteiro

          Parametros:
               Entrada:
                    VarValue e VarName
                    Ponteiro para int e Ponteiro para string
               Saida:
                    Não há
               Entrada/Saida
                    VarValue
               Retorno:
                    Não há
          Pseudo-codigo:
          Se VarName é nula
               Printa pedido para digitar o valor
          Se VarName existe
               Printa pedido para digitar o valor de VarName
          Escaneia o valor e armazena em VarValue
*/

void GetValueInt(int* VarValue, char* VarName)  // O VarName pode ser definido como "Exemplo"
{                                               //quando chamar a função.
    if (VarName == NULL)     //Se não houver nome, printa sem [%s]
         printf("Digite o valor:");
    if (VarName != NULL)     //Se houver nome, printa o nome
         printf("\n Digite o valor de [%s]:", VarName);

    scanf("%d", VarValue);
}

/**
     Rotina: GetValueFloat

          Objetivo: Armazenar um valor de um float

          Parametros:
               Entrada:
                    VarValue e VarName
                    Ponteiro para float e Ponteiro para string
               Saida:
                    Não há
               Entrada/Saida
                         VarValue
               Retorno:
                    Não há
          Pseudo-codigo:
          Se VarName é nula
               Printa pedido para digitar o valor
          Se VarName existe
               Printa pedido para digitar o valor de VarName
          Escaneia o valor e armazena em VarValue
*/

void GetValueFloat(float* VarValue, char* VarName)
{
     if (VarName == NULL)
          printf("Digite o valor:");
     if (VarName != NULL)
          printf("\n Digite o valor de [%s]:", VarName);

     scanf("%f", VarValue);
}

/**
     Rotina: GetValueChar

          Objetivo: Armazenar um valor de char

          Parametros:
               Entrada:
                    VarValue e VarName
                    VarValue e VarName ponteiros para char
               Saida:
                    Não há
               Entrada/Saida
                    VarValue
               Retorno:
                    Não há
          Pseudo-codigo:
               Se VarName nula
                    Printa pedido para digitar o valor
               Se VarName existe
                    Printa pedido para digitar o valor de VarName
               Escaneia o valor e armazena em VarValue
*/
void GetValueChar(char* VarValue, char* VarName)
{
     if (VarName == NULL)
          printf("Digite o valor:");
     if (VarName != NULL)
          printf("\n Digite o valor de [%s]:", VarName);

     scanf("%s", VarValue);
}

/**
     Rotina: SobreTrabalho

          Objetivo: Printar informações sobre o trabalho/autor

          Parametros:
               Entrada:
                    biblioteca e linha
                    biblioteca e linha tipo int
               Saida:
                    Não há
               Entrada/Saida
                    Não há
               Retorno:
                    Não há
          Pseudo-codigo:
               Printa informações a respeito do autor, e do código/trabalho
*/

void SobreTrabalho(int biblioteca, int linha)
{
     system("clear");
     printf("\n Feito por : ALEXSANDER SOUZA");
     printf("\n Estudante de Engenharia Eletronica na UTFPR - TD");
     printf("\n Trabalho inicializado 14/09/17 e finalizado /?/?/09/17");
     printf("\n Contempla [ %d ] bibliotecas criadas pelo aluno", biblioteca);
     printf("\n O codigo contém mais de [ %d ] linhas de codigo", linha);

}

/**
     Rotina: CheckError

          Objetivo: Checkar se há erro

          Parametros:
               Entrada:
                    Error
                    Error tipo int
               Saida:
                    Não há
               Entrada/Saida
                    Não há
               Retorno:
                    Não há
          Pseudo-codigo:
               Se Error é 1
                    Printa que não houve erro
               Se Error é diferente
                    Printa que ocorreu o erro
*/

void CheckError(int Error)
{
     if (Error == 1)
          printf("\n No error ocurred!");
     if (Error != 1)
          printf("\n The error [ %d ] has ocurred.", Error);
}

/**
     Rotina: CheckError2

          Objetivo: Verificar um erro na Main_02

          Parametros:
               Entrada:
                    Error
                    Tipo inteiro
               Saida:
                    Não há
               Entrada/Saida
                    VarValue
               Retorno:
                    "1" caso não encontre erros
                    "0" caso encontre
          Pseudo-codigo:
          Se Error eh -1
               Printa que há um valor negativo
               Retorna 0
          Se Error eh -2
               Printa que não tem producao
               Retorna 0
          Se nao, retorna 1
*/

int CheckError2(int Error)
{
     system("clear");
     if (Error == -1)
     {
          printf("\n Ha um valor negativo.");
          printf("\n O raio e a altura nao podem ser menores ou iguais a 0!");
          return 0;
     }
     else if ( Error == -2 )
     {
          printf("\n Nao eh necessario nenhum barril pois nao ha producao!");
          return 0;
     }
     else
          return 1;
}

/**
     Rotina: PrintaResultMenu2

     Objetivo: Printar o resultado do exercicio 02

     Parametros:
          Entrada:
               r, h, i, producao
               Tipo de dado Float
          Saida:
               Não há
          Entrada/Saida
               Nao há
          Retorno:
               Não há

     Pseudo-codigo:
          Printa as dimensões do barril
          Printa a produção e a quantia necessária para armazenar
*/

void PrintaResultMenu2(float r, float h, float i, float producao)
{
     printf("\n Para um barril de raio [%.2f] e h [%.2f]:", r, h);
     printf("\n Eh necessario [%.0f] barris para conter uma producao de [%.5f]", i, producao);

}

/**
     Rotina: PrintaResultMenu1

     Objetivo: Printar o resultado do exercicio 01

     Parametros:
          Entrada:
               x1, y1, x2, y2, D
               Tipo de dado Float
          Saida:
               Não há
          Entrada/Saida
               Nao há
          Retorno:
               Não há

     Pseudo-codigo:
          Printa os valores de x e y
          Printa a distancia encontrada
*/

void PrintaResultMenu1(float x1, float y1, float x2, float y2, float D)
{
     system("clear");
     printf(" O valor calculado para:\n x1 [%f]\n y1 [%f]\n", x1, y1);
     printf(" x2 [%f]\n y2 [%f]\n eh: D = [%f]",x2, y2, D);

}



