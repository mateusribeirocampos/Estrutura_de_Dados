#include <iostream>
#include <vector>
#include <algorithm>

void imprimirVetor(std::vector<int> vetor) {
    std::cout << "Vetor: [";
    for (int i = 0; i < vetor.size(); i++) {
        std::cout << vetor[i] << ", ";
        if(i == vetor.size() - 1)
            std::cout << vetor[i] << "";
    }
    std::cout << "]" << std::endl;
}

int main () {
    // inicializando vetor
    std::vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // removendo o último elemento
    vetor.pop_back();

    imprimirVetor(vetor);

    // removendo o primeiro elemento
    vetor.erase(vetor.begin());

    imprimirVetor(vetor);

    // removendo o elemento na posição 1
    vetor.erase(vetor.begin() + 1);

    imprimirVetor(vetor);

    // removendo o elemento na posição 3
    vetor.erase(vetor.begin() + 3);

    imprimirVetor(vetor);

    // removendo o numero 5 do vetor
    auto it = find(vetor.begin(), vetor.end(), 5);
    if(it != vetor.end()) {
        vetor.erase(it);
    }

    imprimirVetor(vetor);

    // outra forma de procurar e remover o numero do vetor
    for(int i = 0; i < vetor.size(); i++) {
        if(vetor[i] == 7) {
            vetor.erase(vetor.begin() + i);
            break;
        }
    }

    imprimirVetor(vetor);

    // removendo o numero 8 do vetor usando o remove
    vetor.erase(remove(vetor.begin(), vetor.end(), 8), vetor.end());

    imprimirVetor(vetor);
    
    return 0;
}