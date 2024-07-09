#include <iostream>

const int NUM_ELEMENTS = 10;

void printVector(int array[], int size) {
  std::cout << "Vetor = [";
  for (int i = 0; i < size; i++) {
    std::cout << array[i];
    if (i != size - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

int main() {
  int array[NUM_ELEMENTS];
  for (int i = 0; i < NUM_ELEMENTS; i++) {
    array[i] = 2 * i;
  }

  printVector(array, NUM_ELEMENTS);

  return 0;
}
