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

  rec.key = 30;
  insertionElemListSort(&list, rec);

  rec.key = 40;
  insertionElemListSort(&list, rec);

  rec.key = 50;
  insertionElemListSort(&list, rec);

  printList(&list);
  printNode(&list);

  rec.key = 10;
  int findElement = sequentialSearchSort(&list, rec.key);
  if (findElement != INVALID) {
    printf("Element %d found in the position: %d\n", rec.key, findElement);
  } else {
    printf("Element %d not found in thel list\n", rec.key);
  }

  printList(&list);

  rec.key = 10;
  printf("\nDeleting element from list\n");
  bool deletedElement = delElemList(&list, rec.key);
  if(deletedElement == true){
    printf("The element %d was found and deleted from list\n", rec.key);
  } else {
    printf("The element was not found\n");
  }

  printf("Current ");
  printList(&list);
  listSize(&list);
  printNode(&list);

  return 0;
}
