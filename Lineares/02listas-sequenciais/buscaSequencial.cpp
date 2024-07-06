#include "implementacao.h"

int Lista::buscaSequencial(TIPOCHAVE chave) const
{
    int i = 0;
    while (i < numeroElemento)
    {
        if (chave == array[i].chave)
        {
            std::cout << "Elemento " << chave << " encontrado" << std::endl;
            return i;
        }
        i++;
    }
    std::cout << "Elemento " << chave << " nao encontrado!" << std::endl;
    return -1;
}