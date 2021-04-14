#ifndef  LISTA_H
#define  LISTA_H
//========================================
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//========================================

// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

Celula *new_celula(){
  Celula *tmp = (Celula*)malloc(sizeof(Celula));
  tmp ->prox = NULL;
  return tmp;
}

// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;

void new_lista(Lista *l){
  l->inicio = l ->fim = new_celula();
  l->tam=0;
}


#endif 