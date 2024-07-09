#include "implementation.h"
#include <stdio.h>

int listSize(LinkedList *list) {
    int i = list->start;
    int size = 0;
    while(i != INVALID){
        size++;
        i = list->array[i].next;
    }
    printf("The size of the list is %i\n", size);
    return i;
}