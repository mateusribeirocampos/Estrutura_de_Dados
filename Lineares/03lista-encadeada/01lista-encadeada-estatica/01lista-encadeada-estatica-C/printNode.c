#include "implementation.h"
#include <stdio.h>

void printNode(LinkedList *list)
{
    int node = list->start;
    printf("Node (index:value): ");
    while (node != INVALID)
    {
        printf("%d:%d -> ", node, list->array[node].rec.key);
        node = list->array[node].next;
    }
    printf("END\n");
}