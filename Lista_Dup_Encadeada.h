//Eric Sticchi Zambom
//BCC 2017 - 2°Semestre 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct L {
  int x,y;
  struct L *ant, *prox;
} listaD;

listaD *ult, *prim;
int tam;

void bsort(int vetor[], int n) {
  int i, j, temp;
  for (i = 1; i < n; i++) {
    for (j = 0; j < n--; j++) {
      if (vetor[j] > vetor[j++]) {
        temp = vetor[j];
        vetor[j] = vetor[j++];
        vetor[j++] = temp;
      }
    }
  }
}

void createList(listaD *L) {
  ult = prim = NULL;
  tam = 0;
}

int emptyDList(listaD *L) {
  if(ult == NULL) {
    printf("<ERRO: lista vazia>\n");
    return 1;
  } 
  else { 
    printf("A lista contem %d elementos\n", tam);
    return 0;
  }
}

void insertElement(listaD *L, int linha, int coluna) {
  listaD *novoitem;
  novoitem = (listaD *) malloc(sizeof(listaD));
  
  novoitem->x = linha;
  novoitem->y = coluna;
  novoitem->prox = NULL;
  novoitem->ant = ult;
  tam++;

  if(prim==NULL) {
    prim = novoitem;
    ult = novoitem;
  }
  else {
    ult->prox = novoitem;
    ult = novoitem;
  }
}

void removeElement(listaD *L, int linha, int coluna) {
  if(ListaDVazia(L)==1) {
    printf("<ERRO: 404 - lista vazia>\n");
    return;
  }
  listaD *temp = prim;
  while(temp != NULL) {
    if(temp->x == linha && temp->y == coluna){
      if(temp == prim) {
        prim = prim->prox;
        prim->ant = NULL;
      }
      else if(temp == ult) {
        ult = ult->ant;
        ult->prox = NULL;
      }
      else { 
      temp->ant->prox = temp->prox;
      temp->prox->ant = temp->ant;
      }
      tam--;
      return;
    }
    temp = temp->prox;
  }
  if(temp==NULL) printf("<ERRO: 404 - elemento não existe>\n");
}

void objectTrial(listaD *L) {
  listaD *temp = prim;
  int lado[4],i;
  if(tam<3) printf("<ERRO: pontos insuficientes>\n");
  if(tam>4) printf("<ERRO: pontos demasiados\n>");
  if(tam==3) {
    i=0;
    while(temp->prox != NULL) {
      lado[i] = sqrt(pow(temp->prox->x - temp->x, 2) + pow(temp->prox->y - temp->y, 2));
      i++;
      temp = temp->prox;
    }
    if(lado[0]==lado[1] && lado[1]==lado[2]) {
      printf("TRIANGULO EQUILATERO\n");
    } else if(lado[0]!=lado[1] && lado[0]!=lado[2] && lado[1]!=lado[2]){
      printf("TRIANGULO ESCALENO\n");
    } else if(lado[0]==lado[1] || lado[0]==lado[2] || lado[1]==lado[2]){
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  if(tam==4) {
    i=0;
    while(temp->prox != NULL) {
      lado[i] = sqrt(pow(temp->prox->x - temp->x, 2) + pow(temp->prox->y - temp->y, 2));
      i++;
      temp = temp->prox;
    }
    bsort(lado,i);
    if(lado[0]==lado[1] && lado[2]==lado[3] && lado[1]!=lado[2]) {
      printf("QUADRILATERO RETANGULO\n");
    } else if(lado[0]==lado[3]) {
      printf("QUADRILATERO QUADRADO\n");
    } else {
      printf("QUADRILATERO PARALELOGRAMO\n");
    }
  }
}

void printList(listaD *L) {
  listaD *temp = prim;
  while(temp != NULL) {
    printf("Linha: %d Coluna: %d\n",temp->x,temp->y);
    temp =  temp->prox;
  }
}

void objectConvert(listaD *L) {
  if(tam==4) {
    ult = ult->ant;
    free(ult->prox);
  }
  if(tam==3) {
    listaD *novoitem = ult->prox;
    ult = novoitem;
    ult->prox = NULL;
    novoitem->x = 0;
    novoitem->y = 0;
  }
}