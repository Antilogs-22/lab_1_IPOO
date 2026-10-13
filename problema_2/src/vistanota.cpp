/**
 * @file vistanota.cpp
 * @brief Implementación de la clase VistaNota para la interacción por consola.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#include "vistanota.hpp"
#include <iostream>
#include <iomanip>

VistaNota::VistaNota()
{
}

VistaNota::~VistaNota()
{
}

void VistaNota::mostrarMenuPrincipal() const
{
    std::cout << "========================================" << std::endl;
    std::cout << "calculo de nota definitiva - ejercicio 2" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "1. registrar notas (proyecto, exposicion, talleres, parcial)" << std::endl;
    std::cout << "2. cambiar escala de calificacion" << std::endl;
    std::cout << "3. cambiar porcentajes de evaluacion" << std::endl;
    std::cout << "4. salir" << std::endl;
    std::cout << "ingrese una opcion: ";
}

void VistaNota::registrarNotas(Estudiante& estudiante)
{
    double nota = 0.0;
    
    std::cout << "\033[2J\033[1;1H";
    std::cout << "========================================" << std::endl;
    std::cout << "ingreso de calificaciones" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "escala actual: [" << estudiante.getEscala().getMinimo() 
              << " - " << estudiante.getEscala().getMaximo() << "]" << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        bool nota_valida = false;
        do
        {
            std::cout << "ingrese la nota para " << estudiante.getNombreComponente(i) << ": ";
            std::cin >> nota;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "error: dato no valido. intente de nuevo." << std::endl;
                continue;
            }

            if (estudiante.registrarNota(i, nota))
            {
                nota_valida = true;
            }
            else
            {
                std::cout << "error: nota fuera de la escala permitida. intente de nuevo." << std::endl;
            }
        } while (!nota_valida);
    }

    std::cout << "\n----------------------------------------" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "la nota final del estudiante es " << estudiante.calcularNotaFinal() << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

void VistaNota::cambiarEscala(Estudiante& estudiante)
{
    double min_val = 0.0;
    double max_val = 0.0;

    std::cout << "\033[2J\033[1;1H";
    std::cout << "========================================" << std::endl;
    std::cout << "cambiar escala de calificacion" << std::endl;
    std::cout << "========================================" << std::endl;
    
    std::cout << "ingrese el valor minimo: ";
    std::cin >> min_val;
    std::cout << "ingrese el valor maximo: ";
    std::cin >> max_val;

    estudiante.setEscala(Escala(min_val, max_val));
    std::cout << "escala actualizada correctamente." << std::endl;
}

void VistaNota::cambiarPorcentajes(Estudiante& estudiante)
{
    double p0 = 0.0, p1 = 0.0, p2 = 0.0, p3 = 0.0;

    std::cout << "\033[2J\033[1;1H";
    std::cout << "========================================" << std::endl;
    std::cout << "cambiar porcentajes (deben sumar 100%)" << std::endl;
    std::cout << "========================================" << std::endl;

    std::cout << "nuevo porcentaje para proyecto (ej. 30): ";
    std::cin >> p0;
    std::cout << "nuevo porcentaje para exposicion (ej. 20): ";
    std::cin >> p1;
    std::cout << "nuevo porcentaje para talleres (ej. 30): ";
    std::cin >> p2;
    std::cout << "nuevo porcentaje para parcial (ej. 20): ";
    std::cin >> p3;

    estudiante.setPorcentajes(p0, p1, p2, p3);
    std::cout << "porcentajes actualizados correctamente." << std::endl;
}

void VistaNota::ejecutar()
{
    int opcion = 0;
    Estudiante estudiante_actual; // Instancia única para cumplir el alcance del Ejercicio 2

    do
    {
        std::cout << "\033[2J\033[1;1H";
        mostrarMenuPrincipal();
        std::cin >> opcion;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            opcion = 0;
        }

        switch (opcion)
        {
            case 1:
            {
                registrarNotas(estudiante_actual);
                break;
            }
            case 2:
            {
                cambiarEscala(estudiante_actual);
                break;
            }
            case 3:
            {
                cambiarPorcentajes(estudiante_actual);
                break;
            }
            case 4:
            {
                std::cout << "saliendo del programa." << std::endl;
                break;
            }
            default:
            {
                std::cout << "opcion no valida." << std::endl;
                break;
            }
        }

        if (opcion != 4)
        {
            std::cout << "\npresione enter para continuar...";
            std::cin.ignore(10000, '\n');
            std::cin.get();
        }

    } while (opcion != 4);
}