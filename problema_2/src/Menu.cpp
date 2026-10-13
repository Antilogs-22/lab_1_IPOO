/**
 * @file Menu.cpp
 * @brief Implementación de la clase Menu para el sistema de notas.
 * 
 * Gestiona la interfaz de usuario y la interacción por consola.
 * 
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.0
 * @date 2026-10-08
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

void Menu::MenuNota(Estudiante& estudianteActual)
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
                if (estudianteActual.RegistrarNota(0, nota)) 
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
                if (estudianteActual.RegistrarNota(1, nota)) 
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
                if (estudianteActual.RegistrarNota(2, nota)) 
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
                if (estudianteActual.RegistrarNota(3, nota)) 
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

void Menu::MenuEstudiante(Estudiante& estudianteActual)
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
                MenuNota(estudianteActual);
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
    Estudiante nuevoEstudiante;
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

    nuevoEstudiante.SetCodigo(codigo);
    nuevoEstudiante.SetNombre(nombre);
    
    estudiantes_.push_back(nuevoEstudiante); 
    std::cout << "estudiante agregado." << std::endl;
}

void Menu::CambiarPorcentajes()
{
    double tal = 0.0;
    double exp = 0.0;
    double par = 0.0;
    double proy = 0.0;
    
    std::cout << "ingrese el nuevo porcentaje para taller: ";
    std::cin >> tal;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese el nuevo porcentaje para exposicion: ";
    std::cin >> exp;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese el nuevo porcentaje para parcial: ";
    std::cin >> par;
    std::cin.ignore(10000, '\n');

    std::cout << "ingrese el nuevo porcentaje para proyecto: ";
    std::cin >> proy;
    std::cin.ignore(10000, '\n');

    if (tal >= 1.0) 
    {
        tal /= 100.0;
    }
    if (exp >= 1.0) 
    {
        exp /= 100.0;
    }
    if (par >= 1.0) 
    {
        par /= 100.0;
    }
    if (proy >= 1.0) 
    {
        proy /= 100.0;
    }

    if (estudiantes_.empty()) 
    {
        std::cout << "aviso: no hay estudiantes registrados." << std::endl;
    } 
    else 
    {
        for (size_t i = 0; i < estudiantes_.size(); ++i) 
        {
            estudiantes_[i].SetPorcentajes(tal, exp, par, proy);
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
                std::string codigoBuscado = "";
                std::cout << "ingrese el codigo del estudiante a buscar: ";
                std::cin >> codigoBuscado;

                Estudiante* ptrEstudiante = BuscarCodigo(codigoBuscado);

                if (ptrEstudiante != NULL) 
                {
                    std::cout << "\033[2J\033[1;1H";
                    MenuEstudiante(*ptrEstudiante); 
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