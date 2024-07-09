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
