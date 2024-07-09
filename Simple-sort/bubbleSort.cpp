#include <iostream>

<<<<<<< HEAD
void printBubbleSort(int *vetor, int fim)
{
  std::cout << "Vetor[";
  for (int i = 0; i < fim; i++)
  {
    std::cout << vetor[i];
    if (i < fim - 1)
    {
=======
void printBubbleSort(int *vetor, int fim) {
  std::cout << "Vetor[";
  for (int i = 0; i < fim; i++) {
    std::cout << vetor[i];
    if (i < fim - 1) {
>>>>>>> refs/remotes/origin/main
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

<<<<<<< HEAD
void bubbleSort(int *vetor, int fim)
{
  int auxiliar;
  for (int i = 0; i < fim - 1; i++)
  {
    for (int j = 0; j < fim - i - 1; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
=======
void bubbleSort(int *vetor, int fim) {
  int auxiliar;
  for (int i = 0; i < fim - 1; i++) {
    for (int j = 0; j < fim - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
>>>>>>> refs/remotes/origin/main
        auxiliar = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = auxiliar;
      }
    }
  }
}

<<<<<<< HEAD
int main()
{
=======
int main() {
>>>>>>> refs/remotes/origin/main
  int vetor[] = {7, 5, 2, 1, 6};
  int fim = sizeof(vetor) / sizeof(vetor[0]);

  std::cout << "vetor atual" << std::endl;
  printBubbleSort(vetor, fim);

  bubbleSort(vetor, fim);
  std::cout << "Vetor ordenado" << std::endl;
  printBubbleSort(vetor, fim);

  return 0;
}
