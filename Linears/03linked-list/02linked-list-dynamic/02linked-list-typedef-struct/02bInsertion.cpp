#include <iostream>
// Definição da estrutura do nó da lista
typedef struct no
{
    int newValue;
    struct no *nextNode;
} No;
typedef struct{
    No *inicio;
    int size;
}Lista;
void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->size = 0;
}
// Procedimento para inserir no início da lista
void addNodeToFront(Lista *lista, int num)
{
    // Aloca memória para um novo nó
    No *novo = new No;
    if (novo)
    {
        // Define o newValue do novo nó
        novo->newValue = num;
        // Define o próximo do novo nó como o primeiro nó da lista
        novo->nextNode = lista->inicio;
        // Atualiza o ponteiro da lista para apontar para o novo nó
        lista->inicio = novo;
        // Incrementa o tamanho usando o size
        lista->size++;
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para inserir no final da lista
void insertAtEnd(Lista *lista, int num)
{
    // Declaração de variáveis auxiliares
    No *aux, *novo = new No;
    if (novo)
    {
        // Define o newValue do novo nó
        novo->newValue = num;
        // Define o próximo do novo nó como nulo, pois ele será o último da lista
        novo->nextNode = nullptr;
        // Se a lista estiver vazia, o novo nó se torna o primeiro da lista
        if (lista->inicio == nullptr)
        {
            lista->inicio = novo;
        }
        else
        {
            // Caso contrário, percorre a lista até encontrar o último nó
            aux = lista->inicio;
            while (aux->nextNode != nullptr)
            {
                aux = aux->nextNode;
            }
            // Liga o último nó ao novo nó
            aux->nextNode = novo;
        }
        // Incrementa o tamanho usando o size
        lista->size++;
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para inserir no meio da lista
void insertMiddleNode(Lista *lista, int num, int anterior)
{
    // Declaração de variáveis auxiliares
    No *aux, *novo = new No;

    if (novo)
    {
        // Define o newValue do novo nó
        novo->newValue = num;
        // Se a lista estiver vazia, o novo nó se torna o primeiro da lista
        if (lista->inicio == nullptr)
        {
            novo->nextNode = nullptr;
            lista->inicio = novo;
        }
        else
        {
            // Caso contrário, percorre a lista até encontrar o nó com newValue igual a 'anterior'
            aux = lista->inicio;
            while (aux->newValue != anterior && aux->nextNode)
            {
                aux = aux->nextNode;
                // Faz a inserção do novo nó após o nó 'anterior'
                novo->nextNode = aux->nextNode;
                aux->nextNode = novo;
            }
        }
        lista->size++;
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para imprimir a lista
void imprimir(Lista lista)
{
    No *no = lista.inicio;
    std::cout << "\n\tTamanho da lista: " << lista.size;
    // Percorre a lista e imprime os valores dos nós
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
    int opcao, newValue, anterior;
    // Declaração do ponteiro para o início da lista
    //No *lista = nullptr;
    Lista lista;
    criar_lista(&lista);
    // Loop principal do programa
    do
    {
        // Exibe o menu de opções
        std::cout << "\n\t0 - SAIR";
        std::cout << "\n\t1 - Inserir no inicio";
        std::cout << "\n\t2 - Inserir no fim";
        std::cout << "\n\t3 - Inserir no meio";
        std::cout << "\n\t4 - Imprimir" << std::endl;
        std::cout << "Digite sua opcao: ";
        std::cin >> opcao;
        // Realiza a operação de acordo com a opção escolhida pelo usuário
        switch (opcao)
        {
        case 1:
            std::cout << "Digite um newValue a ser inserido no inicio da lista: ";
            std::cin >> newValue;
            addNodeToFront(&lista, newValue);
            break;
        case 2:
            std::cout << "Digite um newValue a ser inserido no final da lista: ";
            std::cin >> newValue;
            insertAtEnd(&lista, newValue);
            break;
        case 3:
            std::cout << "Digite um newValue a ser inserido no meio da lista: ";
            std::cin >> newValue >> anterior;
            insertMiddleNode(&lista, newValue, anterior);
            break;
        case 4:
            // Imprime a lista
            imprimir(lista);
            break;
        default:
            // Exibe mensagem de erro caso a opção seja inválida
            if(opcao != 0){
                std::cout << "Opcao invalida!" << std::endl;
            }
        }
    } while (opcao); // Continua o loop até que a opção '0' seja selecionada
    return 0;
}