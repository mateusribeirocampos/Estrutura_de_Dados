#include "implementacao.h"
#include <iostream>

void Lista::exibeLista() const
{
  std::cout << "Lista:[";
  for (int i = 0; i < numeroElemento; i++)
  {
    std::cout << array[i];
    if (i < numeroElemento - 1)
    {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}