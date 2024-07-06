#include "implementation.h"

void LinkedList::returnNode(int node) {
  array[node].next = available;
  available = node;
}
