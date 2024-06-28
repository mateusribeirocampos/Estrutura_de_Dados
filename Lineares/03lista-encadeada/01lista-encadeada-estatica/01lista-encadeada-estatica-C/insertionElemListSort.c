#include "implementation.h"
#include <stdbool.h>

bool insertionElemListSort(LinkedList *list, Records rec) {
    if(list->available == INVALID){
        return false;
    }
    int previous = INVALID;
    int i = list->start;
    KeyType key = rec.key;
    while ((i != INVALID) && (list->array[i].rec.key < key))
    {
        previous = i;
        i = list->array[i].next;
    }
    if(i != INVALID && list->array[i].rec.key == key){
        return false;
    }
    i = getNode(list);
    list->array[i].rec = rec;
    if(previous == INVALID){
        list->array[i].next = list->start;
        list->start = i;
    }
    else
    {
        list->array[i].next = list->array[previous].next;
        list->array[previous].next = i;
    }
    return true;
}