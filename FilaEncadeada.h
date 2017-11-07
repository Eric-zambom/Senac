#include <stdio.h>

typedef struct N{
  int valor;
  struct N *proximo;
} node;

typedef struct{
  node *topo;
}Fila;

void inicializaFila(Fila *p){
  p->topo=NULL;
}

int vazia(Fila *p){
  if(p->topo==NULL){
    return 1;
  }
  return 0;
}

int cheia(Fila *p){
  if(p->topo>=10){
    return 1;
  }
  return 0;
}

void inserir(Fila *p, int valor){
  node *no;
  no=(node *)malloc(sizeof(node));
  no->valor=valor;
  no->proximo=p->topo;
  p->topo=no;
}

int remover(Fila *p){
  if(vazia(p)==1){
    printf("ERRO: fila vazia\n");
    return;
  }
  node *temp;
  temp=p->topo;
  p->topo=p->topo->proximo;
  return temp->valor;
}

void imprimeFila(Fila *p){
  node *temp;
  temp=p->topo;
  while(temp!=NULL){
    printf("%d ", temp->valor);
    temp=temp->proximo;
  }
  printf("\n");
}