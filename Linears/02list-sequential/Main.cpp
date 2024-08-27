#include "implementacao.h"

int main() {
  Lista lista;

  Registro reg1 = {2};
  Registro reg2 = {3};
  Registro reg3 = {5};
  Registro reg4 = {7};

  lista.insereElemento(reg1, 0);
  lista.insereElemento(reg2, 1);
  lista.insereElemento(reg3, 2);
  lista.insereElemento(reg4, 3);

  lista.exibeLista();

  lista.exclueElemento(2);

  lista.exibeLista();

  int elementoUsuario = 0;
  std::cout << "Digite o elemento a ser buscado:" << std::endl;
  std::cin >> elementoUsuario;
  int encontraElemento = lista.buscaSequencial(elementoUsuario);
  if (encontraElemento == -1) {
    std::cout << "Elemento nao encontrado!" << std::endl;
  } else {
    std::cout << "Elemento encontrado!" << std::endl;
  }

  lista.exibeLista();

  std::cout << "Digite o elemento a ser buscado:" << std::endl;
  std::cin >> elementoUsuario;
  encontraElemento = lista.buscaSequencial(elementoUsuario);
  if (encontraElemento == -1) {
    std::cout << "Elemento nao encontrado!" << std::endl;
  } else {
    std::cout << "Elemento encontrado!" << std::endl;
  }

  lista.reiniciaLista();
  lista.exibeLista();

  return 0;
}
