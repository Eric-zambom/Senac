#ifndef fila_encadeada
#define fila_encadeada
#endif

#include <stdio.h>
#include <stdlib.h>

typedef struct N{
  int valor;
  struct N *proximo;
} node;

void inicializaFila(node *p){
  p->proximo=NULL;
  p->valor=0;
}

int vazia(node *p){
  if(p->proximo==NULL){
    return 1;
  }
  return 0;
}

void inserir(node *p, int valor_novo){
  node *novo_node;
  novo_node =(node *)malloc(sizeof(node));
  novo_node -> valor = valor_novo;
  
  while(p->proximo) {
    p = p->proximo;
  }
  p -> proximo = novo_node;
}

void remover(node *p){
  if(vazia(p)){
    printf("ERRO: fila vazia\n");
    return;
  }
  while(p->proximo->proximo){
    p = p->proximo;
  }
  p->proximo = NULL;
}

void imprimeFila(node *p){
  while(p->proximo){
    p = p->proximo
    printf("%d ", p->valor);
  }
}