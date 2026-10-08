all: main

# Enlace: construir UNICAMENTE el ejecutable 'main' con todos los .o
main: Recipiente.o main.o
	g++ -std=c++03 -Wall -Wextra -Werror Recipiente.o main.o -o main

# Compilacion de cada unidad de traduccion a su .o (reglas explicitas)
Recipiente.o: Recipiente.cpp Recipiente.hpp
	g++ -std=c++03 -Wall -Wextra -Werror -c Recipiente.cpp

main.o: main.cpp Recipiente.hpp
	g++ -std=c++03 -Wall -Wextra -Werror -c main.cpp

# Utilidades
clean:
	rm -f Recipiente.o main.o main