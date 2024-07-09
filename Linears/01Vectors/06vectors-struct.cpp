#include <iostream>
#include <string.h>
#include <string>
#define TAM 3

// struct/registro para armazenar o personName, personAge e employeeSalary de um funcionario
typedef struct {
  char personName[200];
  int personAge;
  float employeeSalary;
} Worker;

// vetor para o armazenamento de 3 posições do personName, personAge e employeeSalary de cada um
// dos 10 funcionarios
Worker workersArray[TAM];

// função para inserir os dados dos funcionarios
void populateEmployeeData() {
  for (int i = 0; i < TAM; i++) {
    // strcpy copia a string para o vetor de char
    strcpy(workersArray[i].personName, "NULL");
    workersArray[i].personAge = 0;
    workersArray[i].employeeSalary = 0.0;
  }
  for (int i; i < TAM; i++) {
    std::cout << "Digit the Name of the employee: ";
    std::cin >> workersArray[i].personName;
    std::cout << "Digit the Age of the employee: ";
    std::cin >> workersArray[i].personAge;
    std::cout << "Digit the salary of the employee: ";
    std::cin >> workersArray[i].employeeSalary;
    std::cout << std::endl;
  }
}

// função para imprimir os dados dos funcionarios
void printEmployees() {
  for (int i = 0; i < TAM; i++) {
    std::cout << "Name: " << workersArray[i].personName << std::endl;
    std::cout << "Age: " << workersArray[i].personAge << std::endl;
    std::cout << "Salary: " << workersArray[i].employeeSalary << std::endl;
  }
}

// função para buscar um funcionario pelo personName
void searchEmployee() {
  int position = -1; // Inicializa a posição como -1 para indicar que o
                    // funcionário não foi encontrado
  std::cout << "\nDigit the Name of the employee that you want to search: ";
  std::string personName;
  std::cin >> personName;

  for (int i = 0; i < TAM; i++) {
    if (personName.compare(workersArray[i].personName) == 0) {
      std::cout << "\nRegister found!" << std::endl;
      position = i; // Atribui a posição do funcionário encontrado
      break;       // Sai do loop assim que o funcionário é encontrado
    }
  }

  if (position == -1) {
    std::cout << "\nRegister not found!";
  } else {
    std::cout << "\nThe Name of the employee: " << workersArray[position].personName << std::endl;
    std::cout << "Age: " << workersArray[position].personAge << std::endl;
    std::cout << "Salary: " << workersArray[position].employeeSalary << std::endl;
  }
}

int main() {
  populateEmployeeData();

  printEmployees();

  searchEmployee();

  return 0;
}
