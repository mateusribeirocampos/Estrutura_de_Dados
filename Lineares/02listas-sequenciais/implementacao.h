#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H
#include <iostream>

#define MAX 50

using TIPOCHAVE = int;

struct Registro {
public:
  TIPOCHAVE chave;
};

// Sobrecarga do operador de inserção para permitir impressão de Registro
std::ostream &operator<<(std::ostream &os, const Registro &reg);

class Lista {
private:
  Registro array[MAX];
  int numeroElemento;

public:
  Lista();
  void inicializaLista();
  int tamanhoLista() const;
  void exibeLista() const;
  int buscaSequencial(TIPOCHAVE chave) const;
  int buscaBinaria(TIPOCHAVE chave, int esquerda, int direita) const;
  bool insereElemento(Registro registro, int posicao);
  bool exclueElemento(TIPOCHAVE chave);
  void ordenaLista();
  void reiniciaLista();
};
#endif
