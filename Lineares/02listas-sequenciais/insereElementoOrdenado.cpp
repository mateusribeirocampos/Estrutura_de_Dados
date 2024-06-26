#include "implementacao.h"

bool Lista::insereElementoOrdenado(Registro registro)
{
    if (numeroElemento >= MAX)
    {
        std::cout << "Lista cheia! Elemento nao pode ser inserido na lista!" << std::endl;
        return false;
    }
    int posicao = numeroElemento;
    while (posicao > 0 && array[posicao - 1].chave > registro.chave)
    {
        array[posicao] = array[posicao - 1];
        posicao--;
    }
    array[posicao] = registro;
    numeroElemento++;
    std::cout << "O elemento " << registro.chave << " foi adicionado a lista, na posicao " << posicao << std::endl;
    std::cout << "Atualizando o tamanho da lista: " << numeroElemento << std::endl;
    return true;
}