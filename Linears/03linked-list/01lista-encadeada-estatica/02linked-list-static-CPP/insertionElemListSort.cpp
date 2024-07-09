#include "implementation.h"

bool LinkedList::insertionElemListSort(Records rec) {
  // Check if the list is FULL
  if (available == INV) {
    std::cout << "The list is FULL!" << std::endl;
    return false;
  }
  // To remain the element index in the list
  int previous = INV;
  // index of current element
  int i = start;
  // key is que valeu to be inserted into the list
  KEYTYPE key = rec.key;

  // Find the correct position to element to be inserted into the list
  while ((i != INV) && (array[i].rec.key < key)) {
    std::cout << "Element is valid and lower than value to be inerted"
              << std::endl;
    previous = i;
    std::cout << "previous receive i = " << previous << std::endl;
    i = array[i].next;
    std::cout << "i receive array[i].next" << i << std::endl;
  }

  // Check if there is element duplicate
  if ((i != INV) && (array[i].rec.key == key)) {
    std::cout << "ELEMENT " << key << " DUPLICATE IS NOT ALLOWED!" << std::endl;
    return false;
  }
  // get node return the index of available node from list
  // The new register is called to this node
  //
  i = getNode();
  if (i == INV) {
    std::cout << "Element " << rec.key << " cannot be inserted into the list"
              << std::endl;
    return false;
  }
  array[i].rec = rec;

  // Insert node into the list
  // If the previous is Invalid, it means that new node should be inserted into
  // the begin of the list
  if (previous == INV) {
    array[i].next = start;
    start = i;
    std::cout << rec.key << " = It was inserted in the begin of list"
              << std::endl;
  } else {
    std::cout << "Element receive the element with index = previous"
              << std::endl;
    array[i].next = array[previous].next;
    std::cout << "The list with index previous receive the index i " << i
              << std::endl;
    array[previous].next = i;
  }
  std::cout << "Element was inserted into the list with sucess!!" << std::endl
            << std::endl;
  return true;
}
