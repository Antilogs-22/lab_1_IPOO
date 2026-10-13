sistema_notas: main.o Menu.o Estudiante.o Escala.o Componente.o
	g++ -Wall -Wextra -std=c++03 -Iinclude -o sistema_notas main.o Menu.o Estudiante.o Escala.o Componente.o

main.o: src/main.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/main.cpp

Menu.o: src/Menu.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/Menu.cpp

Estudiante.o: src/Estudiante.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/Estudiante.cpp

Escala.o: src/Escala.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/Escala.cpp

Componente.o: src/Componente.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/Componente.cpp

clean:
	rm -f *.o sistema_notas
