#include "implementacao.h"

bool Lista::insereElemento(Registro reg){
    if((numeroElemento == MAX) || (reg.chave < 0) || (reg.chave > numeroElemento)){
        std::cout << "O numero " << reg.chave << " foi adicionado na lista" << std::endl;
        return false;
    }
    for(int j = numeroElemento; j > reg.chave; j--){
        array[j] = array[j-1];
    }
    array[numeroElemento] = reg;
    numeroElemento++;
    std::cout << "O numero " << array[numeroElemento].chave << " foi adicionado na lista" << std::endl;
    std::cout << "Atulizando o tamanho da lista: " << numeroElemento << std::endl;
    return true;
}