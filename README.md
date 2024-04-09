# Estruturas de Dados

As estruturas de dados são formas de organizar e armazenar dados de maneira eficiente para que possam ser acessados e modificados de forma rápida e fácil. Elas são fundamentais na ciência da computação e são usadas em uma variedade de aplicações, desde simples programas até sistemas complexos.

Existem dois tipos principais de estruturas de dados:

1. **Estruturas de Dados Lineares:** Essas estruturas organizam os dados de forma sequencial, onde cada elemento está ligado ao anterior e ao próximo. Os dados são acessados de forma ordenada e podem ser percorridos em uma única passagem. Exemplos comuns incluem vetores, listas encadeadas, pilhas e filas.

2. **Estruturas de Dados Não Lineares:** Essas estruturas não possuem uma ordem sequencial definida entre os elementos. Os dados são organizados de forma mais complexa, geralmente em forma de árvores ou grafos. Exemplos incluem árvores binárias, árvores de busca, árvores AVL e grafos.
Representação de Vetores em C++

## Estruturas de Dados Lineares

As estruturas de dados lineares são aquelas em que os elementos são organizados de maneira sequencial, onde cada elemento está ligado ao anterior e ao próximo. Isso permite acessar os dados de forma ordenada e percorrê-los em uma única passagem. Aqui estão alguns exemplos comuns de estruturas de dados lineares:

1. **Vetor (Array):** Uma coleção de elementos do mesmo tipo, organizados em sequência contígua de memória.

2. Lista Encadeada (Linked List): Uma coleção de elementos, onde cada elemento (nó) contém um valor e um ponteiro para o próximo nó na sequência.

3. **Pilha (Stack):** Uma estrutura de dados LIFO (Last In, First Out), onde os elementos são inseridos e removidos na mesma extremidade.

4. **Fila (Queue):** Uma estrutura de dados FIFO (First In, First Out), onde os elementos são inseridos em uma extremidade e removidos na outra.

Ao trabalhar com estruturas de dados lineares em C++, como vetores, é importante entender as diferentes formas de representá-los. Abaixo estão algumas das principais maneiras de representar vetores em C++:

1. **Vetor Padrão:** Um vetor padrão que cria um vetor vazio.

´´´

   vector<int> vint;

´´´

2. **Vetor com Tamanho e Valor Inicial:** Cria um vetor com 10 elementos, todos inicializados com o valor 0.

´´´

   vector<int> ovi(10, 0);

´´´

3. **Vetor de Tipos Personalizados:** Cria um vetor de objetos personalizados.

´´´

   struct Pessoa {
       string nome;
       int idade;
   };

   vector<Pessoa> pessoas;

´´´

4. **Vetor de Vetores:** Um vetor cujos elementos são vetores, útil para representar matrizes.

´´´

   vector< vector<int>> matriz;

´´´

5. **Vetor de Ponteiros:** Armazena ponteiros para elementos.

´´´

   vector<int*> ponteiros;

´´´

6. **Vetor de Objetos Inteligentes:** Usa ponteiros inteligentes para gerenciar automaticamente a memória.

´´´

   vector<unique_ptr<Pessoa>> pessoas;

´´´

7. **Vetor Constante:** Um vetor cujos elementos não podem ser modificados após a inicialização.

´´´

   const vector<int> vetorConstante {1, 2, 3, 4, 5};

´´´

8. **Vetor de Tamanho Dinâmico:** Cria um vetor com tamanho determinado em tempo de execução.

´´´

   int tamanho;
   cout << "Digite o tamanho do vetor: ";
   cin >> tamanho;
   vector<int> vetorDinamico(tamanho);

´´´
