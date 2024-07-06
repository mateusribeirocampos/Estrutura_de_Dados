#include <iostream>
#include <vector>

void imprimirVetor(std::vector<int> vetor) {
  std::cout << "Vetor = [";
  for (int i = 0; i < vetor.size(); i++) {
    std::cout << vetor[i];
    if (i != vetor.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

void imprimirIndice(std::vector<int> vetor) {
  std::cout << "Indices = [";
  for (int i = 0; i < vetor.size(); i++) {
    std::cout << i;
    if (i != vetor.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

void imprimirVetor1(int vetor1[], int tamanho) {
  std::cout << "Vetor1 = [";
  for (int i = 0; i < tamanho; i++) {
    std::cout << vetor1[i];
    if (i != tamanho - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}
void imprimirVetor2(int vetor2[], int tamanho) {
  std::cout << "Vetor2 = [";
  for (int i = 0; i < tamanho; i++) {
    std::cout << vetor2[i];
    if (i != tamanho - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

int main() {
  std::vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  imprimirVetor(vetor);
  imprimirIndice(vetor);

  // Acessando o primeiro elemento do vetor
  int primeiroElemento = vetor[0]; // Saída: 1

  std::cout << "vetor[0] = " << primeiroElemento
            << std::endl; // Saída: "vetor[0] = 1

  // Acessando o 5º elemento do vetor
  int elementoIntermediario = vetor[4]; // Saída: 5

  std::cout << "vetor[4] = " << elementoIntermediario
            << std::endl; // Saída: "vetor[4] = 5"

  // Acessando o último elemento do vetor
  int ultimoElemento = vetor[vetor.size() - 1]; // Saída: 10

  std::cout << "vetor[vetor.size() - 1] = " << ultimoElemento
            << std::endl; // Saída: "vetor[vetor.size() - 1] = 10"

  int vetor1[10];
  for (int i = 0; i < 10; i++) {
    vetor1[i] = 2 * i;
  }

  imprimirVetor1(vetor1, 10);

  int vetor2[10] = {14, 0, 13};

  vetor2[5] = 30;
  vetor2[7] = 40;
  vetor2[8] = 50;

  imprimirVetor2(vetor2, 10);

  return 0;
}
