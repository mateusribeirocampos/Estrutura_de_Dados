#include <iostream>
#include <vector>

void printVector(std::vector<int> vector) {
  std::cout << "Vetor = [";
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i];
    if (i != vector.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

void displayIndices(std::vector<int> vector) {
  std::cout << "Indices = [";
  for (int i = 0; i < vector.size(); i++) {
    std::cout << i;
    if (i != vector.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

void printVector1(int vector1[], int size) {
  std::cout << "Vetor1 = [";
  for (int i = 0; i < size; i++) {
    std::cout << vector1[i];
    if (i != size - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}
void printVector2(int vector2[], int size) {
  std::cout << "Vetor2 = [";
  for (int i = 0; i < size; i++) {
    std::cout << vector2[i];
    if (i != size - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

int main() {
  std::vector<int> vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printVector(vector);
  displayIndices(vector);

  // Acessando o primeiro elemento do vector
  int firstElement = vector[0]; // Saída: 1

  std::cout << "vector[0] = " << firstElement
            << std::endl; // Saída: "vector[0] = 1

  // Acessando o 5º elemento do vector
  int intermediateElement = vector[4]; // Saída: 5

  std::cout << "vector[4] = " << intermediateElement
            << std::endl; // Saída: "vector[4] = 5"

  // Acessando o último elemento do vector
  int lastElement = vector[vector.size() - 1]; // Saída: 10

  std::cout << "vector[vector.size() - 1] = " << lastElement
            << std::endl; // Saída: "vector[vector.size() - 1] = 10"

  int vector1[10];
  for (int i = 0; i < 10; i++) {
    vector1[i] = 2 * i;
  }

  printVector1(vector1, 10);

  int vector2[10] = {14, 0, 13};

  vector2[5] = 30;
  vector2[7] = 40;
  vector2[8] = 50;

  printVector2(vector2, 10);

  return 0;
}
