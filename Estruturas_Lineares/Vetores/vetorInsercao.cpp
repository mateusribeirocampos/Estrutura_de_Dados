#include  <iostream>
#include <vector>

using namespace std;

void imprimirVetor(vector<int> array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}


int main () {
    vector<int> array = {1, 2, 3, 4, 5};

    // Inserindo um elemento no final do vetor
    array.push_back(6);

    imprimirVetor(array);

    // Inserindo um elemento no início do vetor
    array.insert(array.begin(), 0);

    imprimirVetor(array);
    
    // Inserindo um elemento na posição 3
    array.insert(array.begin() + 3, 10);

    imprimirVetor(array);

    // Inserindo 3 elementos de valor 7 na posição 5
    array.insert(array.begin() + 5, 3, 7);

    imprimirVetor(array);

    // Inserindo elementos de um vetor em outro vetor
    vector<int> vint2 = {8, 9, 10};
    array.insert(array.begin() + 7, vint2.begin(), vint2.end());
    
    imprimirVetor(array);

    return 0;
}