#include <iostream>
typedef struct no
{
	int newValue;
	struct no *nextNode;
} No;
void inserirNoInicio(No *&lista, int num)
{
	No *novo = new No; // novo é o novo nó
	if (novo)
	{
		novo->newValue = num;
		novo->nextNode = lista;
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
		novo->newValue = num;
		novo->nextNode = nullptr;
		if (lista == nullptr)
		{
			lista = novo;
		}
		else
		{
			aux = lista;
			while (aux->nextNode != nullptr)
			{
				aux = aux->nextNode;
			}
			aux->nextNode = novo;
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
		novo->newValue = num;
		// Se a lista não tiver nenhum newValue adicionado
		if (lista == nullptr)
		{
			// Adiciona o novo nó no inicio da lista
			novo->nextNode = nullptr;
			// Atualiza a lista com o novo nó
			lista = novo;
		}
		else
		{
			aux = lista;
			while (aux->nextNode && aux->nextNode->newValue != anterior)
			{
				aux = aux->nextNode;
			}
			if (aux->nextNode == nullptr)
			{
				// Elemento anterior não encontrado
				std::cout << "Elemento anterior não encontrado na lista." << std::endl;
				delete novo; // Liberar memória alocada para o novo nó
				return;
			}
			novo->nextNode = aux->nextNode;
			aux->nextNode = novo;
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
		std::cout << " " << no->newValue;
		no = no->nextNode;
	}
	std::cout << std::endl
			  << std::endl;
}
void menuInicial()
{
	int opcoes, newValue, anterior;
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
			std::cout << "Digite um newValue para ser adicionado no inicio da lista" << std::endl;
			std::cin >> newValue;
			inserirNoInicio(lista, newValue);
			break;
		case 2:
			std::cout << "Digite um newValue para ser adicionado no fim da lista" << std::endl;
			std::cin >> newValue;
			inserirNoFinal(lista, newValue);
			break;
		case 3:
			std::cout << "Digite um newValue para ser adicionado no meio da lista" << std::endl;
			std::cin >> newValue;
			std::cout << "Digite o newValue anterior para inserir o newValue adicionado na lista" << std::endl;
			std::cin >> anterior;
			inserirNoMeio(lista, newValue, anterior);
			break;
		case 4:
			std::cout << "Digite o newValue a ser buscado newValue na lista" << std::endl;

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
