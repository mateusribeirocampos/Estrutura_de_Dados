#include "implementacao.h"

void Lista::ordenaLista() {

  for (int i = 0; i < numeroElemento - 1; i++) {
    for (int j = 0; j < numeroElemento - i - 1; j++) {
      if (array[j].chave > array[j + 1].chave) {
        Registro aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
  std::cout << "Lista ordenada" << std::endl;
}
