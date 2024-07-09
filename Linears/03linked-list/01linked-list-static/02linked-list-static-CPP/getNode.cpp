#include "implementation.h"

int LinkedList::getNode() {
  int node = available;
  if (available != INV) {
    available = array[available].next;
  }
  return node;
}
