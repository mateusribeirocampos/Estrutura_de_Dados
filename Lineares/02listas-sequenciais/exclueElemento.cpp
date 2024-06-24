#include "implementacao.h"

bool Lista::exclueElemento(TIPOCHAVE chave){
    int posicaoLista = buscaSequencial(chave);
    if(posicaoLista == -1){
        std::cout << "Elemento nao encontrado na lista" << std::endl;
        return false;
    }
    else{
        for(int j = posicaoLista; j < numeroElemento - 1; j++){
            array[j] = array[j + 1];
        }
        numeroElemento--;
        std::cout << "Elemento " << chave << " deletado com sucesso!" << std::endl;
        std::cout << "O tamanho da lista atualizado: " << numeroElemento << std::endl;
        return true;
    }
}