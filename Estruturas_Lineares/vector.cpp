#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main () {
    // vetor criaado com 0 elementos
    vector<int> vint;

    // capacity() retorna o tamanho do vetor
    int espaco = vint.capacity();

    // vetor criado com 10 elementos de valor 0
    vector<int> ovi(10,0);

    // vetor do tipo string
    vector<string> umaLista;

    // vetor de vetor
    vector<vector<int>> matriz;

    //vetor de ponteiros
    vector<int*> ponteiros;

    // Vetor de Objetos Personalizados: Você pode criar vetores de seus próprios tipos de objetos personalizados.
    vector<Pessoa> pessoas;


    // Vetor de Objetos Inteligentes: Você pode usar classes de contêineres inteligentes, como std::unique_ptr ou std::shared_ptr, para armazenar objetos em um vetor, fornecendo gerenciamento automático de memória
    vector<unique_ptr<Pessoa>> pessoas;

    // Vetor Constante (const vector): Vetores que não podem ser modificados após a inicialização.
    const vector<int> vetorConstante {1, 2, 3, 4, 5};

    // Vetor de tamanho dinâmico: ocê pode criar um vetor cujo tamanho é determinado em tempo de execução.
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    vector<int> vetorDinamico(tamanho);

    return 0;
}