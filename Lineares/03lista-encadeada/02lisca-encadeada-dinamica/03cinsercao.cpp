#include <iostream>
typedef struct no
{
	int valor;
	struct no *proximo;
} No;
void inserirNoInicio(No *&lista, int num)
{
	No *novo = new No; // novo é o novo nó
	if (novo)
	{
		novo->valor = num;
		novo->proximo = lista;
		lista = novo;
	}
	else
	{
		std::cout << "Erro ao alocar memoria!" << std::endl;
	}
}

void inserirNoFinal(No *&lista, int num)
{
	No *aux, *novo = new No;
	if (novo)
	{
		novo->valor = num;
		novo->proximo = nullptr;
		if (lista == nullptr)
		{
			lista = novo;
		}
		else
		{
			aux = lista;
			while (aux->proximo != nullptr)
			{
				aux = aux->proximo;
			}
			aux->proximo = novo;
		}
	}
	else
	{
		std::cout << "Erro ao alocar memoria!" << std::endl;
	}
}

void inserirNoMeio(No *&lista, int num, int anterior)
{
	No *aux, *novo = new No;
	if (novo)
	{
		novo->valor = num;
		// Se a lista não tiver nenhum valor adicionado
		if (lista == nullptr)
		{
			// Adiciona o novo nó no inicio da lista
			novo->proximo = nullptr;
			// Atualiza a lista com o novo nó
			lista = novo;
		}
		else
		{
			aux = lista;
			while (aux->proximo && aux->proximo->valor != anterior)
			{
				aux = aux->proximo;
			}
			if (aux->proximo == nullptr)
			{
				// Elemento anterior não encontrado
				std::cout << "Elemento anterior não encontrado na lista." << std::endl;
				delete novo; // Liberar memória alocada para o novo nó
				return;
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
	}
	else
	{
		std::cout << "Erro ao alocar memoria!" << std::endl;
	}
}
void imprimirLista(No *no)
{
	std::cout << "\n\tLista: ";
	while (no)
	{
		std::cout << " " << no->valor;
		no = no->proximo;
	}
	std::cout << std::endl
			  << std::endl;
}
void menuInicial()
{
	int opcoes, valor, anterior;
	No *lista = nullptr;
	do
	{
		std::cout << "-------------------------" << std::endl;
		std::cout << "\n\t1 - Inserir no inicio";
		std::cout << "\n\t2 - Inserir no fim";
		std::cout << "\n\t3 - Inserir no meio";
		std::cout << "\n\t4 - Buscar";
		std::cout << "\n\t5 - Imprimir";
		std::cout << "\n\t6 - Sair" << std::endl;
		std::cout << "-------------------------" << std::endl;
		std::cout << "Digite uma opcao" << std::endl;
		std::cin >> opcoes;
		switch (opcoes)
		{
		case 1:
			std::cout << "Digite um valor para ser adicionado no inicio da lista" << std::endl;
			std::cin >> valor;
			inserirNoInicio(lista, valor);
			break;
		case 2:
			std::cout << "Digite um valor para ser adicionado no fim da lista" << std::endl;
			std::cin >> valor;
			inserirNoFinal(lista, valor);
			break;
		case 3:
			std::cout << "Digite um valor para ser adicionado no meio da lista" << std::endl;
			std::cin >> valor;
			std::cout << "Digite o valor anterior para inserir o valor adicionado na lista" << std::endl;
			std::cin >> anterior;
			inserirNoMeio(lista, valor, anterior);
			break;
		case 4:
			std::cout << "Digite o valor a ser buscado valor na lista" << std::endl;

			break;
		case 5:
			std::cout << "Imprimir lista" << std::endl;
			imprimirLista(lista);
			break;
		case 6:
			std::cout << "AtE logo..." << std::endl;
			break;
		default:
			std::cout << "Opcao invalida!" << std::endl;
		}
	} while (opcoes != 6);
}
int main()
{
	menuInicial();
	return 0;
}
