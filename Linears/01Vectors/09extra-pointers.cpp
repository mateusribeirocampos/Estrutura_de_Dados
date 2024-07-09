#include <iostream>

// Função que recebe um ponteiro por valor
// Não modifica o valor da memória e não modifica o valor da variável
// A função também não modifica o endereço de memória
void allocateMemoryValue(int *p) {

  p = new int;
  *p = 7;
}
// Função que recebe um ponteiro por valor
// Modifica o valor da memória e não modifica o valor da variável
// A região de memória é modificada
void modifyMemoryValue(int *p) { *p = 8; }
// Função que recebe um ponteiro por referência
// Tudo que for modificado na função será refletido na variável
// A função modifica o endereço de memória
void setNewPointerValue(int *&p) {
  p = new int;
  *p = 9;
}

int main() {
  int a = 1; // p1 aponta para a
  int b = 2; // p2 aponta para b
  int c = 3; // p3 aponta para c

  int *p1 = &a;
  int *p2 = &b;
  int *p3 = &c;

  std::cout << std::endl << std::endl;
  std::cout << "Before: " << " p1 = " << p1 << ", p2 = " << p2 << ", p3 =" << p3
            << std::endl;
  std::cout << "Before: " << " *p1 = " << *p1 << ", *p2 = " << *p2
            << ", *, p3 = " << *p3 << std::endl;
  std::cout << "Before: " << " &p1 = " << &p1 << ", &p2 =  " << &p2
            << ", &p3 =  " << &p3 << std::endl;
  std::cout << "Before: " << " a = " << a << ", b = " << b << ", c = " << c
            << std::endl;
  std::cout << std::endl;

  allocateMemoryValue(p1);

  modifyMemoryValue(p2);

  setNewPointerValue(p3);

  std::cout << "After: " << " p1 = " << p1 << ", p2 = " << p2
            << ", p3 = " << p3 << std::endl;
  std::cout << "After: " << " *p1 = " << *p1 << ", *p2 = " << *p2
            << ", *p3 = " << *p3 << std::endl;
  std::cout << "After: " << " &p1 = " << &p1 << ", &p2 = " << &p2
            << ", &p3 =  " << &p3 << std::endl;
  std::cout << "After: " << " a = " << a << ", b = " << b << ", c = " << c
            << std::endl;
  std::cout << std::endl;

  return 0;
}
