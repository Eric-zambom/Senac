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
  temp=p->fim;
  while(temp!=NULL){
    printf("%d ", temp->valor);
    temp=temp->proximo;
  }
  printf("\n");
}
