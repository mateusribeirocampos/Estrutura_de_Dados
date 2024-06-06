#include <iostream>

void printBubbleSort(int *vetor, int fim)
{
    std::cout << "Vetor[";
    for (int i = 0; i < fim; i++)
    {
        std::cout << vetor[i];
        if (i < fim - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

void bubbleSort(int *vetor, int fim)
{
    int auxiliar;
    for (int i = 0; i < fim - 1; i++)
    {
        for (int j = 0; j < fim - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

int main()
{
    int vetor[] = {7, 5, 2, 1, 6};
    int fim = sizeof(vetor) / sizeof(vetor[0]);

    std::cout << "vetor atual" << std::endl;
    printBubbleSort(vetor, fim);

    bubbleSort(vetor, fim);
    std::cout << "Vetor ordenado" << std::endl;
    printBubbleSort(vetor, fim);

    return 0;
}