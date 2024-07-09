#include <iostream>

void printVector(int dynamicArray[], int size) {
  std::cout << "Vetor = [";
  for (int i = 0; i < size; i++) {
    std::cout << dynamicArray[i];
    if (i != size - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

// Vetores são ponteiros
int main() {
  int size;
  std::cout << "Digit the size of dynamicArray: ";
  std::cin >> size;

  int *dynamicArray = new int[size];

  for (int i = 0; i < size; i++) {
    dynamicArray[i] = 2 * i;
  }

  printVector(dynamicArray, size);

  delete[] dynamicArray;

  return 0;
}
