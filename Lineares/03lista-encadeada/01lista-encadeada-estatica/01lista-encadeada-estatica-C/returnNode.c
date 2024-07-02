#include "implementation.h"

void returnNode(LinkedList *list, int node) {
  // o Nó retornado agra aponta para o Nó anteriormente disponível
  list->array[node].next = list->available;
  list->available = node;
}
