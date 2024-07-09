#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

class Node
{
public:
  int nodeValue;
  Node *nextNode;

  // Constructor padrão
  Node() : nodeValue(0), nextNode(nullptr) {}

  // Contrutor parametrizado
  Node(int nodeValue, Node *nextNode = nullptr) : nodeValue(nodeValue), nextNode (nextNode) {}

  // Destrutor
  ~Node(){
    delete nextNode;
  }
};

class List
{
private:
  Node *head;
  int sizeList;
public:
  List() : sizeList(0), head(nullptr) {}

  // Destrutor
  ~List() {
    Node *current= head;
    while(current != nullptr){
      Node *next = current->nextNode;
      delete current;
      current = next;
    }
  }

  void insertAtBeginning(int nodeValue);
  void insertAtEnd(int nodeValue);
  void insertInMiddle(int nodeValue);
  void deleteAtBeginning();
  void deleteAtEnd();
  void deleteInMiddle(int nodeValue);
  void printList();
  int size() const { return sizeList; }

};



#endif