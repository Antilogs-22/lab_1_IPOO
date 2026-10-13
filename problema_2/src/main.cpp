/**
 * @file main.cpp
 * @brief Punto de entrada que unicamente instancia la vista y ejecuta el sistema[cite: 22].
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#include "vistanota.hpp"
#include <iostream>

/**
 * @brief Función principal del programa[cite: 22].
 * @return int Código de salida del sistema.
 */
int main()
{
    std::cout << "\033[2J\033[1;1H";
    VistaNota vista; // main() solo crea la vista y llama a ejecutar()[cite: 22]
    vista.ejecutar();

    return 0;
}