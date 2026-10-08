all: bin/main

bin/main: src/recipiente.o src/main.o
	g++ -std=c++03 -Wall -Wextra -Werror -pedantic src/recipiente.o src/main.o -o bin/main

src/recipiente.o: src/recipiente.cpp include/recipiente.hpp
	g++ -std=c++03 -Wall -Wextra -Werror -pedantic -Iinclude -c src/recipiente.cpp -o src/recipiente.o

src/main.o: src/main.cpp include/recipiente.hpp
	g++ -std=c++03 -Wall -Wextra -Werror -pedantic -Iinclude -c src/main.cpp -o src/main.o

clean:
	rm -f src/recipiente.o src/main.o bin/main


