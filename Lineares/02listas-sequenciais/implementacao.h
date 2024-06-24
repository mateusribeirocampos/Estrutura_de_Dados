#ifndef IMPLEMENTACAO_H
#define IMPLEMENTACAO_H
#include <iostream>

#define MAX 50

using TIPOCHAVE = int;

struct Registro {
    public:
        TIPOCHAVE chave;
};

class Lista {
    private:
        Registro array[MAX];
        int numeroElemento;
    public:
        Lista() {};
        void inicializaLista(Lista *lista){};
        int tamanhoLista(Lista *lista){};
        void exibeLista(Lista *lista);
        int buscaSequencial(TIPOCHAVE chave);
        bool insereElemento(Registro registro);
        bool exclueElemento(TIPOCHAVE chave);
        void reiniciaLista();
};
#endif