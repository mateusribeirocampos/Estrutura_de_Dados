#include <iostream>
#include <vector>

void printVector(std::vector<int> vector1) {
  std::cout << "Array: [";
  for (int i = 0; i < vector1.size(); i++) {
    std::cout << vector1[i] << ", ";
    if (i == vector1.size() - 1)
      std::cout << vector1[i] << "";
  }
  std::cout << "]" << std::endl;
}

int main() {
  std::vector<int> vector1 = {1, 2, 3, 4, 5};

  // Inserindo um elemento no final do vetor
  vector1.push_back(6);

  printVector(vector1);

  // Inserindo um elemento no início do vetor
  vector1.insert(vector1.begin(), 0);

  printVector(vector1);

  // Inserindo um elemento na posição 3
  vector1.insert(vector1.begin() + 3, 10);

  printVector(vector1);

  // Inserindo 3 elementos de valor 7 na posição 5
  vector1.insert(vector1.begin() + 5, 3, 7);

  printVector(vector1);

  // Inserindo elementos de um vetor em outro vetor
  std::vector<int> vetor2 = {8, 9, 10};
  vector1.insert(vector1.begin() + 7, vetor2.begin(), vetor2.end());

  printVector(vector1);

  return 0;
}
