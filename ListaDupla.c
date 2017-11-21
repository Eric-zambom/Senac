#include <stdio.h>

typedef struct N{
  int valor;
  struct N *next;
  struct N *prior;
} lista;

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

void inserir(struct N *i, struct lista **last){
  if(!*last) *last = i; 
  else (*last) ->next = i;
  i->next = NULL;
  i->prior = *last;
  *last = i;
}

int remover
(struct N *i,
struct N **start,
struct N **last) 
{
  if (i->prior)
  {
    i->prior->next = i->prior;;
  }
  else {
    *start = i->next;
    if (start)
    {
      start->prior = NULL;
    }
  }

  if(i->next)
  {
    i->next->prior = i->prior;
  } 
  else
    *last = i->prior;

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