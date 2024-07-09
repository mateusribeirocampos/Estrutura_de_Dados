#include <algorithm>
#include <iostream>
#include <vector>

void printVector(std::vector<int> vector) {
  std::cout << "Vetor: [";
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << ", ";
    if (i == vector.size() - 1)
      std::cout << vector[i] << "";
  }
  std::cout << "]" << std::endl;
}

int main() {
  // inicializando vector
  std::vector<int> vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // removendo o último elemento
  vector.pop_back();

  printVector(vector);

  // removendo o primeiro elemento
  vector.erase(vector.begin());

  printVector(vector);

  // removendo o elemento na posição 1
  vector.erase(vector.begin() + 1);

  printVector(vector);

  // removendo o elemento na posição 3
  vector.erase(vector.begin() + 3);

  printVector(vector);

  // removendo o numero 5 do vector
  auto it = find(vector.begin(), vector.end(), 5);
  if (it != vector.end()) {
    vector.erase(it);

  printVector(vector);

  // outra forma de procurar e remover o numero do vector
  for (int i = 0; i < vector.size(); i++) {
    if (vector[i] == 7) {
      vector.erase(vector.begin() + i);
      break;
    }
  }

  printVector(vector);

  // removendo o numero 8 do vector usando o remove
  vector.erase(remove(vector.begin(), vector.end(), 8), vector.end());

  printVector(vector);

  return 0;}
