#include "implementation.h"
#include <stdio.h>

int main(){
    LinkedList list;

    startList(&list);

    Records rec;

    rec.key = 30;
    insertionElemListSort(&list, rec);

    rec.key = 10;
    insertionElemListSort(&list, rec);

    rec.key = 20;
    insertionElemListSort(&list, rec);

    rec.key = 40;
    insertionElemListSort(&list, rec);

    printList(&list);

    int findElement = sequentialSearchSort(&list, 20);
    if(findElement != INVALID){
        printf("Elemento 20 encontrado na posição: %d\n", findElement);
    } else {
        printf("Elemento 20 não encontrado\n");
    }

    printList(&list);

    delElemList(&list, 20);

    printList(&list);

    return 0;
}