#include <stdio.h>

typedef struct N{
  int x;
  int y;
  struct N *proximo;
  struct N *anterior;
} coord;

typedef struct{
  node *fim;
  node *inicio;
}Control;

void inicializaControl(Control *p){
  p->inicio=NULL;
  p->fim=NULL;
}

int vazia(Control *p){
  if(p->fim==NULL){
    return 1;
  }
  return 0;
}

void inserir(Control *p, int x, int y){
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