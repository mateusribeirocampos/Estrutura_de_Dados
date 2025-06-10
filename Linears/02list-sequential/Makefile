# Nome do executável principal
PROG = programa

# Lista de arquivos fonte
SRCS = Main.cpp buscabinaria.cpp buscaSequencial.cpp exclueElemento.cpp exibeLista.cpp implementacao.cpp inicializaLista.cpp insereElemento.cpp insereElementoOrdenado.cpp reiniciaLista.cpp tamanhoLista.cpp

# Flags do compilador
CXXFLAGS = -std=c++11 -Wall

# Regra padrão
all: $(PROG)

# Como compilar o executável
$(PROG): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(PROG)

# Limpa arquivos gerados
clean:
	rm -f $(PROG)