#include <iostream>
// Definição da estrutura do nó da lista
typedef struct no
{
    int valor;
    struct no *proximo;
} No;
// Procedimento para inserir no início da lista
void inserir_no_inicio(No **lista, int num)
{
    // Aloca memória para um novo nó
    No *novo = new No;
    if (novo)
    {
        // Define o valor do novo nó
        novo->valor = num;
        // Define o próximo do novo nó como o primeiro nó da lista
        novo->proximo = *lista;
        // Atualiza o ponteiro da lista para apontar para o novo nó
        *lista = novo;
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para inserir no final da lista
void inserir_no_final(No **lista, int num)
{
    // Declaração de variáveis auxiliares
    No *aux, *novo = new No;

    if (novo)
    {
        // Define o valor do novo nó
        novo->valor = num;
        // Define o próximo do novo nó como nulo, pois ele será o último da lista
        novo->proximo = nullptr;
        // Se a lista estiver vazia, o novo nó se torna o primeiro da lista
        if (*lista == nullptr)
        {
            *lista = novo;
        }
        else
        {
            // Caso contrário, percorre a lista até encontrar o último nó
            aux = *lista;
            while (aux->proximo != nullptr)
            {
                aux = aux->proximo;
            }
            // Liga o último nó ao novo nó
            aux->proximo = novo;
        }
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para inserir no meio da lista
void inserir_no_meio(No **lista, int num, int anterior)
{
    // Declaração de variáveis auxiliares
    No *aux, *novo = new No;
    if (novo)
    {
        // Define o valor do novo nó
        novo->valor = num;
        
        // Se a lista estiver vazia, o novo nó se torna o primeiro da lista
        if (*lista == nullptr)
        {
            novo->proximo = nullptr;
            *lista = novo;
        }
        else
        {
            // Caso contrário, percorre a lista até encontrar o nó com valor igual a 'anterior'
            aux = *lista;
            while (aux->valor != anterior && aux->proximo)
            {
                aux = aux->proximo;
                // Faz a inserção do novo nó após o nó 'anterior'
                novo->proximo = aux->proximo;
                aux->proximo = novo;
            }
        }
    }
    else
    {
        // Exibe mensagem de erro caso a alocação de memória falhe
        std::cout << "Erro ao alocar memoria!\n" << std::endl;
    }
}
// Procedimento para imprimir a lista
void imprimir(No *no)
{
    std::cout << "\n\tLista: ";
    // Percorre a lista e imprime os valores dos nós
    while (no)
    {
        std::cout << " " << no->valor;
        no = no->proximo;
    }
    std::cout << std::endl << std::endl;
}
// Função principal
int main()
{
    int opcao, valor, anterior;
    // Declaração do ponteiro para o início da lista
    No *lista = nullptr;
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
            std::cout << "Digite um valor a ser inserido no inicio da lista: ";
            std::cin >> valor;
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            std::cout << "Digite um valor a ser inserido no final da lista: ";
            std::cin >> valor;
            inserir_no_final(&lista, valor);
            break;
        case 3:
            std::cout << "Digite um valor a ser inserido no meio da lista: ";
            std::cin >> valor >> anterior;
            inserir_no_meio(&lista, valor, anterior);
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