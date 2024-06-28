#include "implementation.h"

void startList(LinkedList *list){
    for(int i = 0; i < MAX - 1; i++){
        list->array[i].next = i + 1;
    }
    list->array[MAX - 1].next = INVALID;
    list->start = INVALID;
    list->available = 0; // 
}