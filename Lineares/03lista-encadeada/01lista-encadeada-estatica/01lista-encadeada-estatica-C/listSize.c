#include "implementation.h"
#include <stdio.h>

int listSize(LinkedList *list) {
    int i = list->start;
    int size = 0;
    while(i != INVALID){
        size++;
        printf("The size of the list is %i\n", size);
        i = list->array[i].next;
        printf("The next element is %i\n", list->array[i].next);
    }
    return i;
}