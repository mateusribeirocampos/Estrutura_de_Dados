#include <iostream>
#define MAX 50

typedef int TIPOCHAVE;

class Registro{
    public:
    TIPOCHAVE chave;
};

class Lista {
    private:
    Registro array[MAX];
    int nroElem;

    public:
    Lista() {
        nroElem = 0;
    }
};