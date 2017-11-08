#include <stdio.h>
#include <stdlib.h>
#define max 8

typedef struct{
  int vetor[max];
  int primeiro;
  int ultimo;
  int tamanho;
} Fila;

void inicializaFila(Fila *p){
  p->tamanho = 0;
  p->primeiro = 0;
  p->ultimo = 0;
}

int vazia(Fila *p){
  if(p->tamanho == 0){
    return 1;
  }
  return 0;
}

int cheia(Fila *p){
  if(p->ultimo > 7){
    return 1;
  }
  return 0;
}

void inserir(Fila *p, int valor){

  if (cheia(p) == 1 && p->tamanho != max) {
  p->ultimo = 0;
  p->vetor[p->ultimo] = valor;
  p->tamanho++;
  p->ultimo++;
  }
  
  else if (p->tamanho == max) {
    printf("ERRO: fila cheia\n");
    return;
  }

  else {
  p->vetor[p->ultimo] = valor;
  p->tamanho++;
  p->ultimo++;
  }
  
}

int remover(Fila *p){
  if(vazia(p) == 1){
    printf("ERRO: fila vazia\n");
    return;
  }
  p->tamanho--;
  p->primeiro++;
  //printf("%d\n",p->vetor[p->primeiro] );
  return p->vetor[p->primeiro];
}

void imprimeFila(Fila *p){
  int i;
  int temp=0;
  int k = p->primeiro;
  for(i=0; i<p->tamanho; i++){

    printf("%d ", p->vetor[k]);
    k++;
    if(k > 7)
    {
        temp = p->primeiro;
        p->primeiro = 0;
        p->vetor[p->ultimo];
        k = 0;
    }
  }
  printf("\n");
}




/*FilaEncadeada*/
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