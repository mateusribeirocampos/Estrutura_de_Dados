#include "implementation.h"

bool LinkedList::delElemList(KEYTYPE key) {
  // Previous receive the value from invalid
  int previous = INV;
  // the index receive the value from start
  int i = start;

  // While the index is valid and the element in the List
  // is lower than the key
  while ((i != INV) && (array[i].rec.key < key)) {
    previous = i;
    i = array[i].next;
  }
  // if the element index is invalid and the element
  // is equal than key the element is not found and it
  // cannot be deleled
  if ((i == INV) || (array[i].rec.key != key)) {
    return false;
  }
  // if the previous is invalid = -1 then
  // element is the next
  if (previous == INV) {
    start = array[i].next;
  } else {
    array[previous].next = array[i].next;
  }
  returnNode(i);
  return true;
}
