#include <iostream>

typedef struct no {
	int valor;
	struct no *proximo;
}No;

void imprimirLista(No *no) 
{
	std::cout << "\n\tLista: ";
	while(no)
	{
		std::cout << " " << no->valor;
		no = no->proximo;
	}
	std::cout << std::endl << std::endl;
}


int main(){
	int opcoes, valor;

	No *lista = nullptr;

	do{
		std::cout << "-------------------------" << std::endl;
		std::cout << "\n\t0 - SAIR";
		std::cout << "\n\t1 - Inserir no inicio";
		std::cout << "\n\t2 - Inserir no fim";
		std::cout << "\n\t3 - Inserir no meio";
		std::cout << "\n\t4 - Buscar";
		std::cout << "\n\t5 - Imprimir" << std::endl;
		std::cout << "-------------------------" << std::endl;
		std::cout << "Digite uma opcao" << std::endl;
		std::cin >> opcoes;

	switch(opcoes){
		case 1:
			std::cout << "Digite um valor para ser adicionado no inicio da lista" << std::endl;
			std::cin >> valor;
		break;
		case 2:
			std::cout << "Digite um valor para ser adicionado no fim da lista" << std::endl;
			std::cin >> valor;
		break;
		case 3:
			std::cout << "Digite um valor para ser adicionado no meio da lista" << std::endl;
			std::cin >> valor;
		break;
		case 4:
			std::cout << "Digite o valor a ser buscado valor na lista";
			
		break;
		case 5:
			std::cout << "Imprimir lista";
			imprimirLista(lista);
		break;
		default:
		if(valor != 0){
			std::cout << "Opcao invalida!" << std::endl;
		}	

	}


	}while(opcoes!= 0);

	return 0;
}

