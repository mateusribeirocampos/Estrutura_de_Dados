#include <iostream>
#include <vector>
using namespace std;

void imprimirVetor(vector<int> array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main () {
    // inicializando vetor
    vector<int> array = {1, 2, 3, 4, 5};

    // removendo o último elemento
    array.pop_back();

    imprimirVetor(array);

    // removendo o primeiro elemento
    array.erase(array.begin());

    imprimirVetor(array);

    // removendo o elemento na posição 1
    array.erase(array.begin() + 1);

    imprimirVetor(array);


    return 0;
}