#include "implementation.h"
#include <iostream>

void LinkedList::printList() {
  std::cout << "List [";
  int current = start;
  while (current != INV) {
    std::cout << " " << array[current].rec.key;
    current = array[current].next;
  }
  std::cout << "]" << std::endl;
}
