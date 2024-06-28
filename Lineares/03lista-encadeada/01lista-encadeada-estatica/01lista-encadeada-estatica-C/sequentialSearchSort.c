#include "implementation.h"
#include <stdio.h>

int sequentialSearchSort(LinkedList *list, KeyType key){
    int i = list->start;
    while (i != INVALID && list->array[i].rec.key < key)
    {
        printf("Element %i received the next element\n", list->array[i].rec.key);
        i = list->array[i].next;
    }
    if(i != INVALID && list->array[i].rec.key == key){
        printf("Element %i found\n", list->array[i].rec.key);
        return i;
    }
    printf("Element not found\n");
    return INVALID;
}