/**
 * @file main.cpp
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Nombre Estudiante 3 (correo3@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @brief Programa principal con ejecucion interactiva y casos de prueba.
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#include <iostream>
#include <iomanip>
#include "Recipiente.hpp"

static void ejecutarCasoPrueba(const char* nombrePrueba, bool resultado)
{
    std::cout << "[TEST] " << nombrePrueba << ": "
              << (resultado ? "PASO (OK)" : "FALLO (ERROR)") << "\n";
}

int main()
{
    std::cout << "--- PRUEBAS UNITARIAS AUTOMATIZADAS ---\n";
    Recipiente test(1.5, 3.0);
    ejecutarCasoPrueba("Validacion R2 (radio no negativo)", !test.setRadio(-1.0));
    ejecutarCasoPrueba("Validacion R2 (radio mayor a cero)", !test.setRadio(0.0));
    ejecutarCasoPrueba("Validacion R2 (altura no negativa)", !test.setAlturaMaxima(-5.0));
    ejecutarCasoPrueba("Validacion R7 (conversion a litros de 1 m3)", test.convertirALitros(1.0) == 1000.0);

    std::cout << "\n--- EJECUCION DEL PROBLEMA 1 (FINCA EL REFUGIO) ---\n";
    double r = 0.0;
    double H = 0.0;
    double h = 0.0;

    std::cout << "Ingrese el radio del recipiente: ";
    if (!(std::cin >> r) || r <= 0.0) {
        std::cerr << "Error: El radio debe ser mayor que 0.\n";
        return 1;
    }

    std::cout << "Ingrese la altura del recipiente: ";
    if (!(std::cin >> H) || H <= 0.0) {
        std::cerr << "Error: La altura debe ser mayor que 0.\n";
        return 1;
    }

    Recipiente deposito(r, H);

    std::cout << "Ingrese hasta que altura se lleno el recipiente: ";
    if (!(std::cin >> h) || h < 0.0 || h > deposito.getAlturaMaxima()) {
        std::cerr << "Error: Altura invalida. Debe cumplir 0 <= h <= " << deposito.getAlturaMaxima() << ".\n";
        return 1;
    }

    double vTotalM3 = deposito.calcularVolumenTotalM3();
    double vLecheM3 = deposito.calcularVolumenLecheM3(h);
    double vTotalL = deposito.convertirALitros(vTotalM3);
    double vLecheL = deposito.convertirALitros(vLecheM3);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\nEl volumen del recipiente es " << vTotalM3 << " metros cubicos ("
              << vTotalL << " litros)\n";
    std::cout << "El volumen de leche recogida es " << vLecheM3 << " metros cubicos ("
              << vLecheL << " litros)\n";

    return 0;
}