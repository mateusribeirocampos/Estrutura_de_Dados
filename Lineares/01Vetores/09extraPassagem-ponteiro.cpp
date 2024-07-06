#include <iostream>

// Função que recebe um ponteiro por valor
// Não modifica o valor da memória e não modifica o valor da variável
// A função também não modifica o endereço de memória
void valor_alocado_memoria(int *p) {

  p = new int;
  *p = 7;
}
// Função que recebe um ponteiro por valor
// Modifica o valor da memória e não modifica o valor da variável
// A região de memória é modificada
void valor_modificando_memoria(int *p) { *p = 8; }
// Função que recebe um ponteiro por referência
// Tudo que for modificado na função será refletido na variável
// A função modifica o endereço de memória
void referencia(int *&p) {
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
  std::cout << "Antes: " << " p1 = " << p1 << ", p2 = " << p2 << ", p3 =" << p3
            << std::endl;
  std::cout << "Antes: " << " *p1 = " << *p1 << ", *p2 = " << *p2
            << ", *, p3 = " << *p3 << std::endl;
  std::cout << "Antes: " << " &p1 = " << &p1 << ", &p2 =  " << &p2
            << ", &p3 =  " << &p3 << std::endl;
  std::cout << "Antes: " << " a = " << a << ", b = " << b << ", c = " << c
            << std::endl;
  std::cout << std::endl;

  valor_alocado_memoria(p1);

  valor_modificando_memoria(p2);

  referencia(p3);

  std::cout << "Depois: " << " p1 = " << p1 << ", p2 = " << p2
            << ", p3 = " << p3 << std::endl;
  std::cout << "Depois: " << " *p1 = " << *p1 << ", *p2 = " << *p2
            << ", *p3 = " << *p3 << std::endl;
  std::cout << "Depois: " << " &p1 = " << &p1 << ", &p2 = " << &p2
            << ", &p3 =  " << &p3 << std::endl;
  std::cout << "Depois: " << " a = " << a << ", b = " << b << ", c = " << c
            << std::endl;
  std::cout << std::endl;

  return 0;
}
