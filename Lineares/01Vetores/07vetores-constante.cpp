#include <iostream>

const int NUM_ELEMENTOS = 10;

void imprimirVetor(int vetor[], int tamanho) {
  std::cout << "Vetor = [";
  for (int i = 0; i < tamanho; i++) {
    std::cout << vetor[i];
    if (i != tamanho - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

int main() {
  int vetor[NUM_ELEMENTOS];
  for (int i = 0; i < NUM_ELEMENTOS; i++) {
    vetor[i] = 2 * i;
  }

  imprimirVetor(vetor, NUM_ELEMENTOS);

  return 0;
}
