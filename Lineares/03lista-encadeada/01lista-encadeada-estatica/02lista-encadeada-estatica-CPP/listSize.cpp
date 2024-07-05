#include "implementation.h"
#include <iostream>

int LinkedList::listSize() {
  int i = start;
  int size = 0;
  while (i != INV) {
    size++;
    i = array[i].next;
  }
  std::cout << "Size list: " << size << std::endl;
  return i;
}
