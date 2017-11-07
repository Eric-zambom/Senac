#include <stdio.h>

typedef struct{
  int vetor[8];
  int primeiro;
  int ultimo;
  int tamanho;
} Fila;

void inicializaFila(Fila *p){
  p->tamanho = 0;
  p->primeiro = -1;
  p->ultimo = -1;
}

int vazia(Fila *p){
  if(p->tamanho==0){
    return 1;
  }
  return 0;
}

int cheia(Fila *p){
  if(p->tamanho>=9){
    return 1;
  }
  return 0;
}

void inserir(Fila *p, int valor){
  if(cheia(p)==1){
    printf("ERRO: fila cheia\n");
    return;
  }
  if (p->tamanho==0){
    p->ultimo = 0;
  }
  p->vetor[p->ultimo]=valor;
  p->ultimo++;
  p->tamanho++;
}

int remover(Fila *p){
  if(vazia(p)==1){
    printf("ERRO: fila vazia\n");
    return;
  }
  
  /*
  if (vazia(*pInicio)) return FALSE;
    *pValor = fila[*pInicio];
    if (*pInicio == *pFim) *pInicio = -1; // lista vazia apos retirada
    else *pInicio = (*pInicio + 1) % LIM;
    return TRUE;

  p->valor = p->vetor[p->primeiro];
  if (p->primeiro == p->ultimo)
  {
    p->primeiro = -1  //lista vazia pós retirada
  }
  else {
    p->primeiro = (p->primeiro + 1) % [8];
    return true
  }
*/

  p->vetor[p->primeiro]++;
  printf("%d\n",p->vetor[p->primeiro] );
  return p->vetor[p->primeiro];
}

void imprimeFila(Fila *p){
  for(int i=0; i<p->tamanho; i++){
    printf("%d ", p->vetor[i]);
  }
  printf("\n");
}