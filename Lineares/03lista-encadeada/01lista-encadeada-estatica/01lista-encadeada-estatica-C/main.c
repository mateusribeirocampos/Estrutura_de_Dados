#include "implementation.h"
#include <stdio.h>

int main() {
  LinkedList list;

  startList(&list);

  Records rec;

  rec.key = 30;
  insertionElemListSort(&list, rec);

  rec.key = 10;
  insertionElemListSort(&list, rec);

  rec.key = 20;
  insertionElemListSort(&list, rec);

  rec.key = 40;
  insertionElemListSort(&list, rec);

  printList(&list);

  int findElement = sequentialSearchSort(&list, 20);
  if (findElement != INVALID) {
    printf("Element 20 found in the position: %d\n", findElement);
  } else {
    printf("Element 20 not found in thel list\n");
  }

  printList(&list);

  delElemList(&list, 20);

  printList(&list);

  return 0;
}
