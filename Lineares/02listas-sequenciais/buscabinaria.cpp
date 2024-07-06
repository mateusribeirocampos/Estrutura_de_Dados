#include "implementacao.h"

int Lista::buscaBinaria(TIPOCHAVE valor) const
{
  int esquerda = 0;
  int direita = numeroElemento - 1;
  while (esquerda <= direita)
  {
    int meio = (esquerda + direita) / 2;
    if (array[meio].chave == valor)
    {
      return meio;
    }
    if (array[meio].chave < valor)
    {
      esquerda = meio + 1;
    }
    else
    {
      direita = meio - 1;
    }
  }
  return -1;
}
