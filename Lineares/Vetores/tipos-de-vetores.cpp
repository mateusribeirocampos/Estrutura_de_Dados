#include <iostream>
#include <vector>
#include <string>
#include <memory>

struct Pessoa {
    std::string nome;
    int idade;
};

int main () {
    // vetor criado com 0 elementos
    std::vector<int> vetor;

    // capacity() retorna o tamanho do vetor
    int espaco = vetor.capacity();

    // vetor criado com 10 elementos de valor 0
    std::vector<int> ovi(10,0);

    // vetor do tipo string
    std::vector<std::string> umaLista;

    // vetor de vetor
    std::vector<std::vector<int>> matriz;

    //vetor de ponteiros
    std::vector<int*> ponteiros;

    // Vetor de Objetos Personalizados: Você pode criar vetores de seus próprios tipos de objetos personalizados.
    std::vector<Pessoa> pessoas;


    // Vetor de Objetos Inteligentes: Você pode usar classes de contêineres inteligentes, como std::unique_ptr ou std::shared_ptr, para armazenar objetos em um vetor, fornecendo gerenciamento automático de memória
    std::vector<std::unique_ptr<Pessoa>> pessoas_inteligentes;

    // Vetor Constante (const vector): Vetores que não podem ser modificados após a inicialização.
    const std::vector<int> vetorConstante {1, 2, 3, 4, 5};

    // Vetor de tamanho dinâmico: ocê pode criar um vetor cujo tamanho é determinado em tempo de execução.
    int tamanho;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;
    std::vector<int> vetorDinamico(tamanho);

    return 0;
}