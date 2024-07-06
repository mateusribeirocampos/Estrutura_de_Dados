#include <iostream>
#include <memory>
#include <string>
#include <vector>


struct Pessoa {
  std::string nome;
  int idade;
};

int main() {
  // Vetor vazio
  std::vector<int> vetorVazio;

  // Vetor inicializado com valores
  std::vector<int> vetorInicializado = {1, 2, 3, 4, 5};

  // Vetor de tamanho fixo
  int vetorTamanhoFixo[10];

  // Vetor de tamanho fixo inicializado com valores
  int vetorTamanhoFixoInicializado[] = {1, 2, 3, 4, 5};

  // Capacidade do vetor
  int capacidadeVetor = vetorInicializado.capacity();

  // Vetor de tamanho fixo com valores iguais
  std::vector<int> vetorComValoresIguais(10, 0);

  // Vetor de strings
  std::vector<std::string> vetorDeStrings;

  // Vetor de vetores
  std::vector<std::vector<int>> matriz;

  // Vetor de ponteiros
  std::vector<int *> vetorDePonteiros;

  // Vetor de objetos personalizados
  std::vector<Pessoa> vetorDePessoas;

  // Vetor de objetos inteligentes (usando std::unique_ptr)
  std::vector<std::unique_ptr<Pessoa>> vetorDePessoasInteligentes;

  // Vetor constante
  const std::vector<int> vetorConstante{1, 2, 3, 4, 5};

  // Vetor de tamanho dinâmico especificado em tempo de execução
  int tamanho;
  std::cout << "Digite o tamanho do vetor dinamico: ";
  std::cin >> tamanho;
  std::vector<int> vetorDinamico(tamanho);

  return 0;
}
