#include "implementacao.h"
#include <iostream>

int main(){
    Lista lista;

    Registro reg1 = {5};
    Registro reg2 = {7};
    Registro reg3 = {2};
    Registro reg4 = {3};

    lista.insereElemento(reg1, 0);
    lista.insereElemento(reg2, 1);
    lista.insereElemento(reg3, 2);
    lista.insereElemento(reg4, 3);

    std::cout << "Lista original: ";
    lista.exibeLista();

    lista.ordenaLista();
    std::cout << "Lista ordenada: ";
    lista.exibeLista();

    lista.exclueElemento(2);
    std::cout << "Lista após exclusão do elemento 2: ";
    lista.exibeLista();

    int elementoUsuario;
    std::cout << "Digite o elemento a ser buscado: ";
    std::cin >> elementoUsuario;
    int encontraElemento = lista.buscaBinaria(elementoUsuario, 0, lista.tamanhoLista() - 1);
    if(encontraElemento == -1){
        std::cout << "Elemento não encontrado!" << std::endl;
    }
    else{
        std::cout << "Elemento encontrado na posição " << encontraElemento << "!" << std::endl;
    }

    lista.exibeLista();

    std::cout << "Digite o elemento a ser buscado: ";
    std::cin >> elementoUsuario;
    encontraElemento = lista.buscaBinaria(elementoUsuario, 0, lista.tamanhoLista() - 1);
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