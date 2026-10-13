sistema_notas: main.o menu.o estudiante.o escala.o componente.o
	g++ -Wall -Wextra -std=c++03 -Iinclude -o sistema_notas main.o menu.o estudiante.o escala.o componente.o

main.o: src/main.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/main.cpp -o main.o

menu.o: src/menu.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/menu.cpp -o menu.o

estudiante.o: src/estudiante.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/estudiante.cpp -o estudiante.o

escala.o: src/escala.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/escala.cpp -o escala.o

componente.o: src/componente.cpp
	g++ -Wall -Wextra -std=c++03 -Iinclude -c src/componente.cpp -o componente.o


clean:
	rm -f *.o sistema_notas
