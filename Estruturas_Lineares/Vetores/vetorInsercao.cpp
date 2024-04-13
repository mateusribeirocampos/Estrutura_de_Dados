#include  <iostream>
#include <vector>

using namespace std;

void imprimirVetor(vector<int> vint) {
    for (int i = 0; i < vint.size(); i++) {
        cout << vint[i] << " ";
    }
    cout << endl;
}


int main () {
    vector<int> vint = {1, 2, 3, 4, 5};

    // Inserindo um elemento no final do vetor
    vint.push_back(6);

    imprimirVetor(vint);

    // Inserindo um elemento no início do vetor
    vint.insert(vint.begin(), 0);

    imprimirVetor(vint);
    
    // Inserindo um elemento na posição 3
    vint.insert(vint.begin() + 3, 10);

    imprimirVetor(vint);

    // Inserindo 3 elementos de valor 7 na posição 5
    vint.insert(vint.begin() + 5, 3, 7);

    imprimirVetor(vint);

    // Inserindo elementos de um vetor em outro vetor
    vector<int> vint2 = {8, 9, 10};
    vint.insert(vint.begin() + 7, vint2.begin(), vint2.end());
    
    imprimirVetor(vint);

    return 0;
}