#include "implementacao.h"
#include <iostream>

int main(){
    Lista lista;

    Registro reg1 = {5};
    Registro reg2 = {7};
    Registro reg3 = {2};
    Registro reg4 = {3};

    lista.insereElementoOrdenado(reg1);
    lista.insereElementoOrdenado(reg2);
    lista.insereElementoOrdenado(reg3);
    lista.insereElementoOrdenado(reg4);

    std::cout << "Lista ordenada: ";
    lista.exibeLista();

    lista.exclueElemento(2);
    std::cout << "Lista após exclusão do elemento 2: ";
    lista.exibeLista();

    int elementoUsuario;
    std::cout << "Digite o elemento a ser buscado: ";
    std::cin >> elementoUsuario;
    int encontraElemento = lista.buscaBinaria(elementoUsuario);
    if(encontraElemento == -1){
        std::cout << "Elemento não encontrado!" << std::endl;
    }
    else{
        std::cout << "Elemento encontrado na posição " << encontraElemento << "!" << std::endl;
    }

    lista.exibeLista();

    std::cout << "Digite o elemento a ser buscado: ";
    std::cin >> elementoUsuario;
    encontraElemento = lista.buscaBinaria(elementoUsuario);
    if(encontraElemento == -1){
        std::cout << "Elemento não encontrado!" << std::endl;
    }
    else{
        std::cout << "Elemento encontrado na posição " << encontraElemento << "!" << std::endl;
    }

    lista.reiniciaLista();
    lista.exibeLista();

    return 0;
}