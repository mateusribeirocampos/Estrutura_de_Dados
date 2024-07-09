#include <iostream>
// Definição da estrutura do nó da listPointer
typedef struct no
{
    int newValue;
    struct no *nextNode;
} No;
// Procedimento para inserir no início da listPointer
void addNodeToFront(No **listPointer, int num)
{
    // Aloca memória para um newNode nó
    No *newNode = new No;
    if (newNode)
    {
        // Define o newValue do newNode nó
        newNode->newValue = num;
        // Define o próximo do newNode nó como o primeiro nó da listPointer
        newNode->nextNode = *listPointer;
        // Atualiza o ponteiro da listPointer para apontar para o newNode nó
        *listPointer = newNode;
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para inserir no final da listPointer
void insertAtEnd(No **listPointer, int num)
{
    // Declaração de variáveis auxiliares
    No *aux, *newNode = new No;

    if (newNode)
    {
        // Define o newValue do newNode nó
        newNode->newValue = num;
        // Define o próximo do newNode nó como nulo, pois ele será o último da listPointer
        newNode->nextNode = nullptr;
        // Se a listPointer estiver vazia, o newNode nó se torna o primeiro da listPointer
        if (*listPointer == nullptr)
        {
            *listPointer = newNode;
        }
        else
        {
            // Caso contrário, percorre a listPointer até encontrar o último nó
            aux = *listPointer;
            while (aux->nextNode != nullptr)
            {
                aux = aux->nextNode;
            }
            // Liga o último nó ao newNode nó
            aux->nextNode = newNode;
        }
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para inserir no meio da listPointer
void insertMiddleNode(No **listPointer, int num, int anterior)
{
    // Declaração de variáveis auxiliares
    No *aux, *newNode = new No;
    if (newNode)
    {
        // Define o newValue do newNode nó
        newNode->newValue = num;
        
        // Se a listPointer estiver vazia, o newNode nó se torna o primeiro da listPointer
        if (*listPointer == nullptr)
        {
            newNode->nextNode = nullptr;
            *listPointer = newNode;
        }
        else
        {
            // Caso contrário, percorre a listPointer até encontrar o nó com newValue igual a 'anterior'
            aux = *listPointer;
            while (aux->newValue != anterior && aux->nextNode)
            {
                aux = aux->nextNode;
                // Faz a inserção do newNode nó após o nó 'anterior'
                newNode->nextNode = aux->nextNode;
                aux->nextNode = newNode;
            }
        }
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para imprimir a listPointer
void imprimir(No *no)
{
    std::cout << "\n\tLista: ";
    // Percorre a listPointer e imprime os valores dos nós
    while (no)
    {
        std::cout << " " << no->newValue;
        no = no->nextNode;
    }
    std::cout << std::endl << std::endl;
}
// Função principal
int main()
{
    int option, newValue, anterior;
    // Declaração do ponteiro para o início da listPointer
    No *listPointer = nullptr;
    // Loop principal do programa
    do
    {
        // Exibe o menu de opções
        std::cout << "\n\t0 - SAIR";
        std::cout << "\n\t1 - Inserir no inicio";
        std::cout << "\n\t2 - Inserir no fim";
        std::cout << "\n\t3 - Inserir no meio";
        std::cout << "\n\t4 - Imprimir" << std::endl;
        std::cout << "Digite sua option: ";
        std::cin >> option;

        // Realiza a operação de acordo com a opção escolhida pelo usuário
        switch (option)
        {
        case 1:
            std::cout << "Digite um newValue a ser inserido no inicio da listPointer: ";
            std::cin >> newValue;
            addNodeToFront(&listPointer, newValue);
            break;
        case 2:
            std::cout << "Digite um newValue a ser inserido no final da listPointer: ";
            std::cin >> newValue;
            insertAtEnd(&listPointer, newValue);
            break;
        case 3:
            std::cout << "Digite um newValue a ser inserido no meio da listPointer: ";
            std::cin >> newValue >> anterior;
            insertMiddleNode(&listPointer, newValue, anterior);
            break;
        case 4:
            // Imprime a listPointer
            imprimir(listPointer);
            break;
        default:
            // Exibe mensagem de erro caso a opção seja inválida
            if(option != 0){
                std::cout << "Opcao invalida!" << std::endl;
            }
        }
    } while (option); // Continua o loop até que a opção '0' seja selecionada

    return 0;
}