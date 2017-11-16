#include <stdio.h>

int count;

typedef struct N{
  int x;
  int y;
  struct N *next, *prior;
} coord;

void inserir(struct coord *p, struct coord **last)
{
  if(!*last) *last = p; //eh o primeiro item da lista
  else  (*last) -> next = p;
  p -> next == NULL;
  p -> prior = *last;
  *last = p;
}

/* Cria uma lista duplamente encadeada ordenada. */
void dls_store {
  struct coord *i.
  struct coord **start
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
