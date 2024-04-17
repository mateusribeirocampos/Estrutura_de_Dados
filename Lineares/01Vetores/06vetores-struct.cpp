#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#define TAM 3

// struct/registro para armazenar o nome, idade e salario de um funcionario
typedef struct
{
    char nome[200];
    int idade;
    float salario;
} Funcionario;

// vetor para o armazenamento de 3 posições do nome, idade e salario de cada um dos 10 funcionarios
Funcionario func[TAM];

// função para inserir os dados dos funcionarios
void inserirDadosFuncionarios()
{
    for (int i = 0; i < TAM; i++)
    {
        // strcpy copia a string para o vetor de char
        strcpy(func[i].nome, "NULL");
        func[i].idade = 0;
        func[i].salario = 0.0;
    }
    for (int i; i < TAM; i++)
    {
        std::cout << "Digite o nome do funcionario: ";
        std::cin >> func[i].nome;
        std::cout << "Digite a idade do funcionario: ";
        std::cin >> func[i].idade;
        std::cout << "Digite o salario do funcionario: ";
        std::cin >> func[i].salario;
        std::cout << std::endl;
    }
}

// função para imprimir os dados dos funcionarios
void imprimirFuncionarios() {
    for(int i = 0; i < TAM; i++) {
        std::cout << "Nome: " << func[i].nome << std::endl;
        std::cout << "Idade: " << func[i].idade << std::endl;
        std::cout << "Salario: " << func[i].salario << std::endl;
    }
}

// função para buscar um funcionario pelo nome
void buscarFuncionario() {
    int posicao = -1; // Inicializa a posição como -1 para indicar que o funcionário não foi encontrado
    std::cout << "\nDigite o nome do funcionario que deseja buscar: ";
    std::string nome;
    std::cin >> nome;

    for(int i=0; i<TAM; i++) {
        if(nome.compare(func[i].nome) == 0) {
            std::cout << "\nRegistro encontrado!" << std::endl;
            posicao = i; // Atribui a posição do funcionário encontrado
            break; // Sai do loop assim que o funcionário é encontrado
        }
    }

    if(posicao == -1) {
        std::cout << "\nRegistro nao encontrado!";
    } else {
        std::cout << "\nO nome do funcionario: " << func[posicao].nome << std::endl;
        std::cout << "Idade: " << func[posicao].idade << std::endl;
        std::cout << "Salario: " << func[posicao].salario << std::endl;
    }
}


int main()
{
    inserirDadosFuncionarios();

    imprimirFuncionarios();

    buscarFuncionario();

    return 0;
}
