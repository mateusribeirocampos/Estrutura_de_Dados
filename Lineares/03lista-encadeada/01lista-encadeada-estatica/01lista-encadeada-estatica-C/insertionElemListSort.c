#include "implementation.h"
#include <stdbool.h>
#include <stdio.h>

bool insertionElemListSort(LinkedList *list, Records rec) {
  // Verifica se a lista está cheia
  if (list->available == INVALID) {
    printf("\nThe list is full!\nThe element %d cannot be inserted into the list!\n\n", rec.key);
    return false;
  }

  // previous é usado para manter o índice do elemento anterior na lista.
  int previous = INVALID;
  // i é o índice do elemento autal na lista
  int i = list->start;
  // key é a chave do registro a ser inserido
  KeyType key = rec.key;

  // Encontra a posição correta para ser inserido
  while ((i != INVALID) && (list->array[i].rec.key < key)) {
    printf("\nFirst condition while the current element is not valid and the "
           "list->array[i].rec.key is lower than key\n");
    previous = i;
    printf("Values of previous = %i\n", previous);
    i = list->array[i].next;
    printf("Values i = list->array[i].next = %i\n", i);
  }

  // Verficação da duplicação do elemento - Se a chave já existe na lista
  if (i != INVALID && list->array[i].rec.key == key) {
    printf("\nThe element %d is duplicate and it cannot be inserted into the list!\n", rec.key);
    return false;
  }

  // Obter no Nó o getNode retorna o índice de um nó disponível na lista
  // O novo registro é atribuído a esse nó.
  i = getNode(list);
  if(i == INVALID){
    printf("\nThe element %d cannot be insert into the list", rec.key);
    return false;
  }
  list->array[i].rec = rec;
  printf("\nlist->array[i].rec received the value in rec = %d\n",
         list->array[i].rec.key);

  // Insere o novo nó na lista
  // Se o previous ainda é invalido, isso significa que o novo nó deve ser
  // inserido no início da lista.
  if (previous == INVALID) {
    list->array[i].next = list->start;
    printf("list->array[i].next = list->start = %d\n", list->start);
    list->start = i;
    printf("list->start = i = %i\n", i);
  } else // Caso contrário, o novo nó é inserido entre previous e i.
  {
    list->array[i].next = list->array[previous].next;
    list->array[previous].next = i;
    /*printf("New node inserted between previous and i\n");
    printf("list->array[i].next = %d\n", list->array[i].next);
    printf("list->array[previous].next = %d\n", list->array[previous].next);*/
  }
  printf("The element was inserted with sucess!\n");
  return true;
}
