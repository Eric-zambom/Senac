#include <stdio.h>
#include "Fila.h"  //ou #include "FilaEncadeada.h"

int main(){
  Fila minhaFila;
  int temp;
  
  inicializaFila(&minhaFila);
  inserir(&minhaFila, 17);
  inserir(&minhaFila, 43);
  inserir(&minhaFila, 59);
  inserir(&minhaFila, 19);
  inserir(&minhaFila, 28);
  imprimeFila(&minhaFila); 
  temp=remover(&minhaFila);
  temp=remover(&minhaFila);
  imprimeFila(&minhaFila);
  inserir(&minhaFila, 30);
  inserir(&minhaFila, 51);
  inserir(&minhaFila, 27);
  inserir(&minhaFila, 72);
  inserir(&minhaFila, 47);
  imprimeFila(&minhaFila);
}