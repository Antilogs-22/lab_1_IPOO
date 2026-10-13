/**
 * @file menu.cpp
 * @brief Lógica de los menús y la consola.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
 * @date 2026-10-13
 * @license GPL-3.0
 */

#include <iostream>
#include "menu.hpp"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::MostrarOpciones() const
{
    std::cout << "========================================" << std::endl;
    std::cout << "sistema de registro de notas" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "1. agregar estudiante" << std::endl; 
    std::cout << "2. buscar estudiante" << std::endl; 
    std::cout << "3. cambiar porcentajes" << std::endl;
    std::cout << "4. cambiar escala de calificacion" << std::endl; 
    std::cout << "5. salir" << std::endl;
}

Estudiante* Menu::BuscarCodigo(const std::string& codigo)
{
    for (size_t i = 0; i < estudiantes_.size(); ++i) 
    {
        if (estudiantes_[i].GetCodigo() == codigo) 
        {
            return &estudiantes_[i];
        }
    }
    return NULL;
}

void Menu::MenuNota(Estudiante& estudiante_actual)
{
    int opcion = 0;
    double nota = 0.0;

    do 
    {
        std::cout << "\033[2J\033[1;1H";
        std::cout << "========================================" << std::endl;
        std::cout << "sistema de registro de notas" << std::endl;
        std::cout << "========================================" << std::endl;
        std::cout << "de que trabajo desea ingresar la nota" << std::endl;
        std::cout << "1. taller" << std::endl; 
        std::cout << "2. exposicion" << std::endl; 
        std::cout << "3. parcial" << std::endl;
        std::cout << "4. proyecto" << std::endl; 
        std::cout << "5. salir" << std::endl;
        std::cout << "ingrese una opcion: ";
        std::cin >> opcion;
        
        switch (opcion)
        {
            case 1:
            {
                std::cout << "taller" << std::endl;
                std::cout << "ingrese la nota del taller: ";
                std::cin >> nota;
                if (estudiante_actual.RegistrarNota(0, nota)) 
                {
                    std::cout << "nota de taller guardada." << std::endl;
                } 
                else 
                {
                    std::cout << "error: nota fuera de la escala permitida." << std::endl;
                }
                break;
            }
            case 2:
            {
                std::cout << "exposicion" << std::endl;
                std::cout << "ingrese la nota de la exposicion: ";
                std::cin >> nota;
                if (estudiante_actual.RegistrarNota(1, nota)) 
                {
                    std::cout << "nota de exposicion guardada." << std::endl;
                } 
                else 
                {
                    std::cout << "error: nota fuera de la escala permitida." << std::endl;
                }
                break;
            }
            case 3:
            {
                std::cout << "parcial" << std::endl;
                std::cout << "ingrese la nota del parcial: ";
                std::cin >> nota;
                if (estudiante_actual.RegistrarNota(2, nota)) 
                {
                    std::cout << "nota de parcial guardada." << std::endl;
                } 
                else 
                {
                    std::cout << "error: nota fuera de la escala permitida." << std::endl;
                }
                break;
            }
            case 4:
            {
                std::cout << "proyecto" << std::endl;
                std::cout << "ingrese la nota del proyecto: ";
                std::cin >> nota;
                if (estudiante_actual.RegistrarNota(3, nota)) 
                {
                    std::cout << "nota de proyecto guardada." << std::endl;
                } 
                else 
                {
                    std::cout << "error: nota fuera de la escala permitida." << std::endl;
                }
                break;
            }
            case 5:
            {
                std::cout << "saliendo del menu de notas." << std::endl;
                break;
            }
            default:
            {
                std::cout << "opcion no valida." << std::endl;
                break;
            }
        }
        
        std::cout << "\npresione enter para continuar...";
        std::cin.ignore(10000, '\n');
        std::cin.get();

    } while (opcion != 5);
}

void Menu::MenuEstudiante(Estudiante& estudiante_actual)
{
    int opcion = 0;

    do 
    {
        std::cout << "========================================" << std::endl;
        std::cout << "sistema de registro de notas" << std::endl;
        std::cout << "========================================" << std::endl;
        std::cout << "que desea hacer." << std::endl;
        std::cout << "1. ingresar nota" << std::endl;
        std::cout << "2. salir" << std::endl;
        std::cout << "ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
            case 1:
            {
                std::cout << "\033[2J\033[1;1H";
                MenuNota(estudiante_actual);
                break;
            }
            case 2:
            {
                std::cout << "saliendo del menu del estudiante." << std::endl;
                break;
            }
            default:
            {
                std::cout << "opcion no valida." << std::endl;
                break;
            }
        }
    } while (opcion != 2);
}

void Menu::AgregarEstudiante()
{
    Estudiante nuevo_estudiante;
    std::string codigo = ""; 
    std::string nombre = "";
    
    std::cout << "========================================" << std::endl;
    std::cout << "sistema de registro de notas" << std::endl;
    std::cout << "========================================" << std::endl;

    do 
    {
        std::cout << "ingrese el codigo: ";
        std::cin >> codigo; 
        std::cin.ignore(10000, '\n');

        if (codigo.length() != 12) 
        {
            std::cout << "error: el codigo debe tener exactamente 12 caracteres. intente de nuevo." << std::endl;
        }
    } while (codigo.length() != 12);

    std::cout << "ingrese el nombre: ";
    std::getline(std::cin, nombre); 

    nuevo_estudiante.SetCodigo(codigo);
    nuevo_estudiante.SetNombre(nombre);
    
    estudiantes_.push_back(nuevo_estudiante); 
    std::cout << "estudiante agregado." << std::endl;
}

void Menu::CambiarPorcentajes()
{
    double porcentaje_taller = 0.0;
    double porcentaje_exposicion = 0.0;
    double porcentaje_parcial = 0.0;
    double porcentaje_proyecto = 0.0;
    
    std::cout << "ingrese el nuevo porcentaje para taller: ";
    std::cin >> porcentaje_taller;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese el nuevo porcentaje para exposicion: ";
    std::cin >> porcentaje_exposicion;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese el nuevo porcentaje para parcial: ";
    std::cin >> porcentaje_parcial;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese el nuevo porcentaje para proyecto: ";
    std::cin >> porcentaje_proyecto;
    std::cin.ignore(10000, '\n');

    if (porcentaje_taller >= 1.0) 
    {
        porcentaje_taller /= 100.0;
    }
    if (porcentaje_exposicion >= 1.0) 
    {
        porcentaje_exposicion /= 100.0;
    }
    if (porcentaje_parcial >= 1.0) 
    {
        porcentaje_parcial /= 100.0;
    }
    if (porcentaje_proyecto >= 1.0) 
    {
        porcentaje_proyecto /= 100.0;
    }

    if (estudiantes_.empty()) 
    {
        std::cout << "aviso: no hay estudiantes registrados." << std::endl;
    } 
    else 
    {
        for (size_t i = 0; i < estudiantes_.size(); ++i) 
        {
            estudiantes_[i].SetPorcentajes(porcentaje_taller, porcentaje_exposicion, porcentaje_parcial, porcentaje_proyecto);
        }
    }
    
    std::cout << "porcentajes actualizados." << std::endl;
}

void Menu::CambiarEscalaCalificacion()
{
    double min_nota = 0.0;
    double max_nota = 0.0;
    
    std::cout << "ingrese la nota minima de la escala: ";
    std::cin >> min_nota;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese la nota maxima de la escala: ";
    std::cin >> max_nota;
    std::cin.ignore(10000, '\n');

    for (size_t i = 0; i < estudiantes_.size(); ++i) 
    {
        estudiantes_[i].SetEscala(min_nota, max_nota);
    }

    std::cout << "escala actualizada." << std::endl;
}

void Menu::Ejecutar() 
{
    int opcion = 0;
    
    do 
    {
        std::cout << "\033[2J\033[1;1H";
        MostrarOpciones(); 
        std::cout << "ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) 
        {
            case 1: 
            {
                std::cout << "\033[2J\033[1;1H";
                AgregarEstudiante(); 
                
                if (!estudiantes_.empty()) 
                {
                    char respuesta = 'n';
                    std::cout << "desea ingresar notas a este estudiante ahora? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == 's' || respuesta == 'S') 
                    {
                        std::cout << "\033[2J\033[1;1H";
                        MenuEstudiante(estudiantes_.back());
                    }
                }
                break;
            }
            case 2: 
            {
                std::string codigo_buscado = "";
                std::cout << "ingrese el codigo del estudiante a buscar: ";
                std::cin >> codigo_buscado;

                Estudiante* ptr_estudiante = BuscarCodigo(codigo_buscado);

                if (ptr_estudiante != NULL) 
                {
                    std::cout << "\033[2J\033[1;1H";
                    MenuEstudiante(*ptr_estudiante); 
                } 
                else 
                {
                    std::cout << "estudiante no encontrado." << std::endl;
                }
                break;
            }
            case 3:
            {
                std::cout << "\033[2J\033[1;1H";
                CambiarPorcentajes();
                break;
            }
            case 4:
            {
                std::cout << "\033[2J\033[1;1H";
                CambiarEscalaCalificacion();
                break;
            }
            case 5:
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
    } while (opcion != 5);
}