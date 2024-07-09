# Estruturas de Dados

As estruturas de dados são formas de organizar e armazenar dados de maneira eficiente para que possam ser acessados e modificados de forma rápida e fácil. Elas são fundamentais na ciência da computação e são usadas em uma variedade de aplicações, desde simples programas até sistemas complexos.

Existem dois tipos principais de estruturas de dados:

1. **Estruturas de Dados Lineares:** Essas estruturas organizam os dados de forma sequencial, onde cada elemento está ligado ao anterior e ao próximo. Os dados são acessados de forma ordenada e podem ser percorridos em uma única passagem. Exemplos comuns incluem vetores, listas encadeadas, pilhas e filas.

2. **Estruturas de Dados Não Lineares:** Essas estruturas não possuem uma ordem sequencial definida entre os elementos. Os dados são organizados de forma mais complexa, geralmente em forma de árvores ou grafos. Exemplos incluem árvores binárias, árvores de busca, árvores AVL e grafos.

## Estruturas de Dados Lineares

As estruturas de dados lineares são aquelas em que os elementos são organizados de maneira sequencial, onde cada elemento está ligado ao anterior e ao próximo. Isso permite acessar os dados de forma ordenada e percorrê-los em uma única passagem. Aqui estão alguns exemplos comuns de estruturas de dados lineares:

1. **Vetor (Array):** Uma coleção de elementos do mesmo tipo, organizados em sequência contígua de memória.

2. **Lista Sequencial (Static List):** Uma coleção de elementos armazenados de forma contígua, onde operações de inserção, remoção e busca são realizadas em um array fixo.

3. **Lista Encadeada (Linked List):** Uma coleção de elementos, onde cada elemento (nó) contém um valor e um ponteiro para o próximo nó na sequência.

4. **Pilha (Stack):** Uma estrutura de dados LIFO (Last In, First Out), onde os elementos são inseridos e removidos na mesma extremidade.

5. **Fila (Queue):** Uma estrutura de dados FIFO (First In, First Out), onde os elementos são inseridos em uma extremidade e removidos na outra.

## Estruturas de Dados Não Lineares

1. **Árvore Binária:** Uma estrutura de dados em que cada nó tem no máximo dois filhos, conhecidos como o filho esquerdo e o filho direito. As árvores binárias são frequentemente usadas em algoritmos de busca e em estruturas de dados mais complexas, como árvores de busca binária e árvores AVL.

2. **Árvore de Busca Binária (Binary Search Tree - BST):** Uma árvore binária na qual os nós são organizados de maneira que, para cada nó, todos os nós à esquerda têm valores menores e todos os nós à direita têm valores maiores. Isso permite a busca eficiente de elementos em tempo logarítmico.

3. **Árvore AVL (Adelson-Velsky e Landis):** Uma árvore binária de busca balanceada na qual a altura das subárvores esquerda e direita de cada nó difere no máximo em uma unidade. Isso garante que a árvore permaneça balanceada e mantém o desempenho de operações como inserção, exclusão e busca em tempo logarítmico.

4. **Árvore B (Rudolf Bayer):** Uma árvore de busca que é uma generalização da árvore binária de busca, na qual cada nó pode ter mais de dois filhos. As árvores B são frequentemente usadas em bancos de dados e sistemas de arquivos para organizar grandes volumes de dados.

5. **Grafo:** Uma estrutura de dados que consiste em um conjunto de vértices (ou nós) e um conjunto de arestas (ou conexões) que conectam esses vértices. Os grafos podem ser direcionados (quando as arestas têm uma direção) ou não direcionados (quando as arestas não têm uma direção). Eles são usados em uma variedade de problemas, incluindo redes de computadores, sistemas de transporte e análise de redes sociais.

O estudo foi estruturado no repositório nesse formato:

```cmd
- estrutura-de-dados/
  - lineares/
    - 01vetores/
      - 01sintaxe-vetores.cpp
      - 02vetores-insercao.cpp
      - 03vetores-remocao.cpp
      - 04vetores-acesso.cpp
      - 05vetores-alocacaoDinamica.cpp
      - 06vetores-struct.cpp
      - 07vetores-constante.cpp
      - 08vetores-ponteiros.cpp
      - 09extraPassagem-ponteiro.cpp
    - 02listas-sequenciais/
      - buscaBinaria.cpp
      - buscaSequencial.cpp
      - exclueElemento.cpp
      - implementacao.cpp
      - implementacao.h
      - inicializaLista.cpp
      - insereElemento.cpp
      - insereElementoOrdenado.cpp
      - Main.cpp
      - MainBuscaBinaria.cpp
      - reiniciaLista.cpp
      - tamanhoLista.cpp
    - 03lista-encadeada/
        01lista-encadeada-estatica/
          01lista-encadeada-estatica-C/
          - buscaSequencialOrd.c
          - excluirElemento.c
          - implementacao.c
          - implementacao.h
          - insereElemento.c
          - incializaLista.c
          - reiniciaLista.c
          02lista-encadeada-estatica-CPP/
      - implementacao.cpp
      - insercao.cpp
      - remocao.cpp
    - 04pilha/
      - implementacao.cpp
      - operacoes.cpp
    - 05fila/
      - implementacao.cpp
      - operacoes.cpp
  - nao-lineares/
    - arvore-binaria/
      - implementacao.cpp
      - busca.cpp
      - insercao.cpp
      - remocao.cpp
    - arvore-de-busca-binaria/
      - implementacao.cpp
      - busca.cpp
      - insercao.cpp
      - remocao.cpp
    - arvore-avl/
      - implementacao.cpp
      - busca.cpp
      - insercao.cpp
      - remocao.cpp
    - arvore-b/
      - implementacao.cpp
      - busca.cpp
      - insercao.cpp
      - remocao.cpp
    - grafo/
      - implementacao.cpp
      - busca-em-largura.cpp
      - busca-em-profundidade.cpp
      - algoritmo-de-Dijkstra.cpp
```

## Como Usar

Clone o repositório:

```cmd
git clone https://github.com/seu-usuario/estrutura-de-dados.git
cd estrutura-de-dados
```

Navegue até a pasta desejada e compile o arquivo:

```cmd
cd lineares/01vetores
g++ 01sintaxe-vetores.cpp -o sintaxe-vetores
./sintaxe-vetores
```

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues e enviar pull requests. Por favor, siga as boas práticas de codificação e documente bem o seu código.

Licença
Este projeto está licenciado sob a licença MIT - veja o arquivo LICENSE para detalhes.

## Referências

[Open Structure - org](https://opendatastructures.org/)
ou [Estruturas abertas](https://opendatastructures.org/)

[Geeks for Geeks - Data Structures](https://www.geeksforgeeks.org/data-structures/)

========================================================================================

## Data Structure

Data structures are ways of organizing and storing data efficiently so that it can be accessed and modified quickly and easily. They are fundamental in computer science and are used in a variety of applications, from simple programs to complex systems.

## There are two main types of data structures

1. **Linear Data Structures:** These structures organize data sequentially, where each element is linked to the previous and the next. Data is accessed in an ordered manner and can be traversed in a single pass. Common examples include arrays, linked lists, stacks, and queues.

2. **Non-Linear Data Structures:** These structures do not have a defined sequential order among elements. Data is organized more complexly, usually in the form of trees or graphs. Examples include binary trees, search trees, AVL trees, and graphs.

## Linear Data Structures

Linear data structures are those in which elements are organized sequentially, where each element is linked to the previous and the next. This allows for ordered data access and traversal in a single pass. Here are some common examples of linear data structures:

1. **Array:** A collection of elements of the same type, organized in a contiguous memory sequence.

2. **Static List:** A collection of elements stored contiguously, where operations such as insertion, removal, and search are performed in a fixed array.

3. **Linked List:** A collection of elements, where each element (node) contains a value and a pointer to the next node in the sequence.

4. **Stack:** A LIFO (Last In, First Out) data structure, where elements are inserted and removed at the same end.

5. **Queue:** A FIFO (First In, First Out) data structure, where elements are inserted at one end and removed at the other.

## Non-Linear Data Structures

1. **Binary Tree:** A data structure where each node has at most two children, known as the left child and the right child. Binary trees are often used in search algorithms and more complex data structures, such as binary search trees and AVL trees.

2. **Binary Search Tree (BST):** A binary tree in which nodes are organized such that, for each node, all nodes to the left have smaller values, and all nodes to the right have larger values. This allows for efficient element search in logarithmic time.

3. **AVL Tree:** A balanced binary search tree in which the height of the left and right subtrees of each node differs by at most one unit. This ensures the tree remains balanced and maintains operation performance such as insertion, deletion, and search in logarithmic time.

4. **B-Tree:** A search tree that is a generalization of the binary search tree, in which each node can have more than two children. B-trees are often used in databases and file systems to organize large volumes of data.

5. **Graph:** A data structure consisting of a set of vertices (or nodes) and a set of edges (or connections) that connect these vertices. Graphs can be directed (when edges have a direction) or undirected (when edges have no direction). They are used in a variety of problems, including computer networks, transportation systems, and social network analysis.

The study was structured in the repository in this format:

```cmd
- data-structures/
  - linear/
    - 01arrays/
      - 01vecto-syntax.cpp
      - 02vector-insertion.cpp
      - 03vector-removal.cpp
      - 04vector-access.cpp
      - 05vector-dynamic-allocation.cpp
      - 06vector-struct.cpp
      - 07vector-constant.cpp
      - 08vector-pointers.cpp
      - 09extra-pointer.cpp
    - 02static-lists/
      - binarySearch.cpp
      - sequentialSearch.cpp
      - removeElement.cpp
      - implementation.cpp
      - implementation.h
      - initializeList.cpp
      - insertElement.cpp
      - insertSortedElement.cpp
      - Main.cpp
      - MainBinarySearch.cpp
      - resetList.cpp
      - listSize.cpp
    - 03linked-list/
        01static-linked-list/
          01static-linked-list-C/
          - sequentialSearchOrdered.c
          - removeElement.c
          - implementation.c
          - implementation.h
          - insertElement.c
          - initializeList.c
          - resetList.c
          02static-linked-list-CPP/
      - implementation.cpp
      - insertion.cpp
      - removal.cpp
    - 04stack/
      - implementation.cpp
      - operations.cpp
    - 05queue/
      - implementation.cpp
      - operations.cpp
  - non-linear/
    - binary-tree/
      - implementation.cpp
      - search.cpp
      - insertion.cpp
      - removal.cpp
    - binary-search-tree/
      - implementation.cpp
      - search.cpp
      - insertion.cpp
      - removal.cpp
    - avl-tree/
      - implementation.cpp
      - search.cpp
      - insertion.cpp
      - removal.cpp
    - b-tree/
      - implementation.cpp
      - search.cpp
      - insertion.cpp
      - removal.cpp
    - graph/
      - implementation.cpp
      - breadth-first-search.cpp
      - depth-first-search.cpp
      - dijkstra-algorithm.cpp
```

## How to Use

Clone the repository:

```cmd
git clone https://github.com/your-username/data-structures.git
cd data-structures
````

Navigate to the desired folder and compile the file:

```cmd
cd linear/01arrays
g++ 01array-syntax.cpp -o array-syntax
./array-syntax
```

## Contributions

Contributions are welcome! Feel free to open issues and submit pull requests. Please follow coding best practices and document your code well.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## References

[Open Structure - org](https://opendatastructures.org/)
ou [Estruturas abertas](https://opendatastructures.org/)

[Geeks for Geeks - Data Structures](https://www.geeksforgeeks.org/data-structures/)
