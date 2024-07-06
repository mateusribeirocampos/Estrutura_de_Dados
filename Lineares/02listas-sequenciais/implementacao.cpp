#include "implementacao.h"
#include <iostream>

// Implementação da sobrecarga do operador de inserção
std::ostream &operator<<(std::ostream &os, const Registro &reg)
{
  os << reg.chave;
  return os;
}

Lista::Lista()
{
  inicializaLista();
}