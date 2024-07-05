#include "implementation.h"
#include <iostream>
#include <ostream>

int main() {
  LinkedList list;

  std::cout << "Printing current list" << std::endl;
  list.printList();

  Records rec1 = {5};
  Records rec2 = {2};
  Records rec3 = {5};
  Records rec4 = {4};
  Records rec5 = {3};
  Records rec6 = {1};
  Records rec7 = {7};

  std::cout << "Inserting the element " << rec1 << std::endl;
  list.insertionElemListSort(rec1);

  std::cout << "Inserting the element " << rec2 << std::endl;
  list.insertionElemListSort(rec2);

  std::cout << "Inserting the element " << rec3 << std::endl;
  list.insertionElemListSort(rec3);

  std::cout << "Inserting the element " << rec4 << std::endl;
  list.insertionElemListSort(rec4);

  std::cout << "Inserting the element " << rec5 << std::endl;
  list.insertionElemListSort(rec5);

  std::cout << "Inserting the element " << rec6 << std::endl;
  list.insertionElemListSort(rec6);

  std::cout << "Inserting the element " << rec7 << std::endl;
  list.insertionElemListSort(rec7);

  std::cout << "List updating" << std::endl;
  list.printList();

  return 0;
}
