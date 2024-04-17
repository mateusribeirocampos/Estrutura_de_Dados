#include  <iostream>
#include <vector>

void imprimirVetor(std::vector<int> vetor1) {
    std::cout << "Array: [";
    for (int i = 0; i < vetor1.size(); i++) {
        std::cout << vetor1[i] << ", ";
        if(i == vetor1.size() - 1)
            std::cout << vetor1[i] << "";
    }
    std::cout << "]" << std::endl;
}

int main () {
    std::vector<int> vetor1 = {1, 2, 3, 4, 5};

    // Inserindo um elemento no final do vetor
    vetor1.push_back(6);

    imprimirVetor(vetor1);

    // Inserindo um elemento no início do vetor
    vetor1.insert(vetor1.begin(), 0);

    imprimirVetor(vetor1);
    
    // Inserindo um elemento na posição 3
    vetor1.insert(vetor1.begin() + 3, 10);

    imprimirVetor(vetor1);

    // Inserindo 3 elementos de valor 7 na posição 5
    vetor1.insert(vetor1.begin() + 5, 3, 7);

    imprimirVetor(vetor1);

    // Inserindo elementos de um vetor em outro vetor
    std::vector<int> vetor2 = {8, 9, 10};
    vetor1.insert(vetor1.begin() + 7, vetor2.begin(), vetor2.end());
    
    imprimirVetor(vetor1);

    return 0;
}