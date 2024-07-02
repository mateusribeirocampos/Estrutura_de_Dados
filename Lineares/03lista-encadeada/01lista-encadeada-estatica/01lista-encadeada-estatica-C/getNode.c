#include "implementation.h"

int getNode(LinkedList *list) {
  int node = list->available;
  if (list->available != INVALID) {
    list->available = list->array[list->available].next;
  }
  return node;
}
