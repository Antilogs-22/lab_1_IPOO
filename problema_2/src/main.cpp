#include "menu.hpp"
#include <iostream>

int main()
{
    std::cout << "\033[2J\033[1;1H";
    Menu sistemaNotas;
    sistemaNotas.Ejecutar();

    return 0;
}