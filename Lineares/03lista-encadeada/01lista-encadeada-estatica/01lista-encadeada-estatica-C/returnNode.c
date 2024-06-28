#include "implementation.h"

void returnNode(LinkedList *list, int j)
{
    list->array[j].next = list->available;
    list->available = j;
}