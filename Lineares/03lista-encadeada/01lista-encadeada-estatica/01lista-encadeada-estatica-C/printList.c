#include "implementation.h"
#include <stdio.h>

void printList(LinkedList *list) {
    int i = list->start;
    printf("LIST: \" ");
    while (i != INVALID)
    {
        printf("%i ", list->array[i].rec.key);
        i = list->array[i].next;
    }
    printf("\"\n");
}