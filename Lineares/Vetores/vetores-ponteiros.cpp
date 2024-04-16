#include <iostream>

void imprimirVetor(int vetor[], int tamanho) {
    std::cout << "Vetor = [";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i];
        if(i != tamanho - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

// Vetores são ponteiros
int main() {
    int tamanho;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;

    int *vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = 2 * i;
    }

    imprimirVetor(vetor, tamanho);

    delete[] vetor;

    return 0;
}