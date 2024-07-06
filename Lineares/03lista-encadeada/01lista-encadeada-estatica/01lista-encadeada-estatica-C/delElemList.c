#include "implementation.h"
#include <stdio.h>
#include <stdbool.h>

bool delElemList(LinkedList *list, KeyType key)
{
  int previous = INVALID;
  int i = list->start;
  while (i != INVALID && list->array[i].rec.key < key)
  {
    previous = i;
    i = list->array[i].next;
  }
  if (i == INVALID || list->array[i].rec.key != key)
  {
    return false;
  }
  if (previous == INVALID)
  {
    list->start = list->array[i].next;
  }
  else
  {
    list->array[previous].next = list->array[i].next;
  }
  returnNode(list, i);
  return true;
}
