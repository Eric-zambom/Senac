#include <stdio.h>

typedef struct N{
  int valor;
  struct N *proximo;
} node;

typedef struct{
  node *fim;
  node *inicio;
}Fila;

void inicializaFila(Fila *p){
  p->inicio=NULL;
  p->fim=NULL;
}

int vazia(Fila *p){
  if(p->fim==NULL){
    return 1;
  }
  return 0;
}

void inserir(Fila *p, int valor){
  node *no;
  no = (node *)malloc(sizeof(node));
  no->valor=valor;
  no->proximo=p->fim;
  p->fim=no;
}

int remover(Fila *p){
  if(vazia(p)==1){
    printf("ERRO: fila vazia\n");
    return;
  }
  node *temp;
  temp=p->inicio;
  p->inicio=p->inicio->proximo;
  return temp->valor;
}

void imprimeFila(Fila *p){
  node *temp;
  temp=p->fim;
  while(temp!=NULL){
    printf("%d ", temp->valor);
    temp=temp->proximo;
  }
  printf("\n");
}