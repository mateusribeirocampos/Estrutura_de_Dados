/*Lista encadeada */
/*Uam lista encadeada é uma representação de uma sequência de objetos, todos do
 * mesmo tipo, na memória RAM*/
/*(random access memory) do computador. Cada elemento da sequência é armazenado
 * em uma célula da lista: o */
/*primeiro elemento na primeira célula, o segundo na segunda célula, e assim por
 * diante.                  */
#include <iostream>

typedef struct no {
  int value;
  struct no *nextNode;
} No;

typedef struct lista {
  No *firstNode;
  int size;
} Lista;

// or using class
class no {
  int value;
  no *nextNode;
};

class lista {
  no *firstNode;
  int size;
};


int main() { return 0; }
