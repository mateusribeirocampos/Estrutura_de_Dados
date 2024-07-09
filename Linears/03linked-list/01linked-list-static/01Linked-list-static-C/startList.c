#include "implementation.h"
#include <stdio.h>

void startList(LinkedList *list) {
  // Inicializa todos os nós disponíveis, encadeando-os sequencialmente
  for (int i = 0; i < MAX - 1; i++) {
    printf("Linked Node %d with Node %d\n", i, i + 1);
    list->array[i].next = i + 1;
  }
  // O último nó aponta para INVALID, indicando o fim da lista de disponíveis
  list->array[MAX - 1].next = INVALID;

  // Inicializa a lista encadeada como vazia
  list->start = INVALID;

  // O primeiro nó disponível é o índice 0
  list->available = 0;

  printf("Linked list initialized with sucess!\n");
  printf("start: %d\n", list->start);
  printf("available: %d\n", list->available);
  for (int i = 0; i < MAX; i++) {
    printf("array[%d].next: %d\n", i, list->array[i].next);
  }
  printf("\n");
}
