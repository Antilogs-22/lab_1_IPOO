#include <iostream>
#include "Menu.hpp"

Menu::Menu()
{
}
Menu::~Menu()
{
}

void Menu::MostrarOpciones()const
{
    std::cout << "========================================"<< std::endl;
    std::cout << "======Sistema de registro de notas======"<< std::endl;
    std::cout << "========================================"<< std::endl;
    std::cout << "1.Agregar estudiante" << std::endl; 
    std::cout << "2.Buscar estudiante" << std::endl; 
    std::cout << "3.Cambiar Porcentajes"<< std::endl;
    std::cout << "4.Cambiar escala de calificacion"<<std::endl; 
    std::cout << "5.Salir";
}

void Menu::MenuEstudiante()
{

    std::cout << "========================================"<< std::endl;
    std::cout << "======Sistema de registro de notas======"<< std::endl;
    std::cout << "========================================"<< std::endl;
    std::cout << "Que desea hacer.";
    std::cout << "1.ingresar nota";
    std::cout << "2.salir ";

    s



}
void Menu::AgregarEstudiante()
{
    Estudiante nuevoEstudiante;

    std::string codigo =""; 
    std::string nombre ="";
    std::cout << "========================================"<< std::endl;
    std::cout << "======Sistema de registro de notas======"<< std::endl;
    std::cout << "========================================"<< std::endl;

    std::cout << "ingrese el codigo";
    std::cin >> codigo; 
 
    std::cout << "ingrese el nombre";
    std::cin >> nombre; 

    nuevoEstudiante.SetCodigo(codigo);
    nuevoEstudiante.SetNombre(nombre);
    
    estudiantes_.pushback(nuevoEstudiante);

}



























































void Menu::Ejecutar() {
    int opcion = 0;
    
    do {
        MostrarOpciones(); // Llama a la función que imprime el menú en pantalla
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "\033[2J\033[1;1H";
                AgregarEstudiante(); 
                break;
            case 2:
                // Aquí iría la función para buscar estudiante
                break;
            case 3:
                // Otras opciones de tu menú
                break;
            case 4:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida, intente de nuevo." << std::endl;
                break;
        }
    } while (opcion != 5);
}

