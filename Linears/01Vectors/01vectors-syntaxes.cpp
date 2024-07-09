#include <iostream>
#include <memory>
#include <string>
#include <vector>


struct Person {
  std::string personName;
  int personAge;
};

int main() {
  // Vetor vazio
  std::vector<int> emptyVector;

  // Vetor inicializado com valores
  std::vector<int> initializedVector = {1, 2, 3, 4, 5};

  // Vetor de size fixo
  int fixedSizeArray[10];

  // Vetor de size fixo inicializado com valores
  int fixedSizeInitializedArray[] = {1, 2, 3, 4, 5};

  // Capacidade do vetor
  int vectorCapacity = initializedVector.capacity();

  // Vetor de size fixo com valores iguais
  std::vector<int> equalValuesVector(10, 0);

  // Vetor de strings
  std::vector<std::string> stringVector;

  // Vetor de vetores
  std::vector<std::vector<int>> matrix;

  // Vetor de ponteiros
  std::vector<int *> arrayOfPointers;

  // Vetor de objetos personalizados
  std::vector<Person> personVector;

  // Vetor de objetos inteligentes (usando std::unique_ptr)
  std::vector<std::unique_ptr<Person>> smartPeopleVector;

  // Vetor constante
  const std::vector<int> constantVector{1, 2, 3, 4, 5};

  // Vetor de size dinâmico especificado em tempo de execução
  int size;
  std::cout << "Digite o size do vetor dinamico: ";
  std::cin >> size;
  std::vector<int> dynamicVector(size);

  return 0;
}
