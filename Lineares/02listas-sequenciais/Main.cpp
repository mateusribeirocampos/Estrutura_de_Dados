#include "implementacao.h"

int main(){
    Lista lista;

    Registro reg1 = {2};
    Registro reg2 = {3};
    Registro reg3 = {5};
    Registro reg4 = {7};

    lista.insereElemento(reg1);
    lista.insereElemento(reg2);
    lista.insereElemento(reg3);
    lista.insereElemento(reg4);

    lista.exibeLista();

    lista.exclueElemento(2);

    lista.exibeLista();

    int encontraElemento = lista.buscaSequencial(6);
    if(encontraElemento == -1){
        std::cout << "Elemento nao encontrado!" << std::endl;
    }
    else{
        std::cout << "Elemento encontrado!" << std::endl;
    }

    lista.exibeLista();

    encontraElemento = lista.buscaSequencial(7);
    if(encontraElemento == -1){
        std::cout << "Elemento nao encontrado!" << std::endl;
    }
    else{
        std::cout << "Elemento encontrado!" << std::endl;
    }


    return 0;
}