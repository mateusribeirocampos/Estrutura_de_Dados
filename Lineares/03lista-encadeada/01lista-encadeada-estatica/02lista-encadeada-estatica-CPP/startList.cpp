#include "implementation.h"
#include <iostream>

void LinkedList::startList() {
  // started all nodes available and linked it sequentially
  for (int i = 0; i < MAX - 1; i++) {
    std::cout << "linked node: " << i << "-> " << i + 1 << std::endl;
    array[i].next = i + 1;
  }
  // the last node point to INVALID, indicate the end of list of available
  array[MAX - 1].next = INV;

  // Initialize the linked list empty
  start = INV;

  // The first node available is the index 0
  available = 0;

  std::cout << "linked List initialized with sucess!" << std::endl;
  std::cout << "List started = " << start << std::endl;
  std::cout << "Available = " << available << std::endl;
  for (int i = 0; i < MAX; i++) {
    std::cout << "Array[" << i << "]: " << array[i].next << std::endl;
  }
  std::cout << std::endl;
}
