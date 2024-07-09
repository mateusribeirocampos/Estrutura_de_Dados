#include "implementacao.h"

bool Lista::insereElemento(Registro reg, int posicao)
{
  if (numeroElemento >= MAX)
  {
    std::cout << "Lista cheia! Elemento nao pode ser inserido na lista!" << std::endl;
    return false;
  }
  else if ((posicao < 0) || (posicao > MAX))
  {
    std::cout << "a chave do registro esta fora do intervalo valido!"
              << std::endl
              << std::endl;
    return false;
  }
  for (int j = numeroElemento; j > posicao; j--)
  {
    array[j] = array[j - 1];
  }
  array[posicao] = reg;
  numeroElemento++;
  std::cout << "O numero " << reg.chave << " foi adicionado na lista"
            << std::endl;
  std::cout << "Atualizando o tamanho da lista: " << numeroElemento << std::endl
            << std::endl;
  return true;
}
