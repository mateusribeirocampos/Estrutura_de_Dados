#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H
#include <stdbool.h>

#define MAX 3
#define INVALID -1

typedef int KeyType;

typedef struct {
    KeyType key;
    // others fields;
} Records;

typedef struct {
    Records rec;
    int next;
} Element;

typedef struct {
    Element array[MAX];
    int start;
    int available;
}LinkedList;

void startList(LinkedList *list);
int listSize(LinkedList *list);
void printList(LinkedList *list);
void printNode(LinkedList *list);
int sequentialSearchSort(LinkedList *list, KeyType key);
int getNode(LinkedList *list);
bool insertionElemListSort(LinkedList *list, Records rec);
bool delElemList(LinkedList *list, KeyType key);
void returnNode(LinkedList *list, int j);
void restartList(LinkedList *list);

#endif