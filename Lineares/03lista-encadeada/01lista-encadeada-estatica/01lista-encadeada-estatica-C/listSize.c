#include "implementation.h"

int listSize(LinkedList *list) {
    int i = list->start;
    int size = 0;
    while(i != INVALID){
        size++;
        i = list->array[i].next;
    }
    return i;
}