#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H
#include <iostream>

#define MAX 5
#define INV -1

using KEYTYPE = int;

struct Records {
public:
  KEYTYPE key;
};

std::ostream &operator<<(std::ostream &os, const Records &rec);

struct Element {
  Records rec;
  int next;
};

class LinkedList {
private:
  Element array[MAX];
  int start;
  int available;

public:
  LinkedList();
  void startList();
  int listSize();
  void printList();
  void printNode();
  bool insertionElemListSort(Records rec);
  int getNode();
  void returnNode(int node);
  bool delElemList(KEYTYPE key);
};

#endif
