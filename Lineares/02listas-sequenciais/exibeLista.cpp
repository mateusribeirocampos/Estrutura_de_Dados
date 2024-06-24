#include "implementacao.h"
#include <iostream>

void Lista::exibeLista(Lista *lista){
    std::cout << "Lista:[";
    for(int i = 0; i < lista->numeroElemento; i++){
        std::cout << lista->array[i];
        if(i < lista->numeroElemento - 1)
        {
        std::cout << ", ";
        }
    }
}