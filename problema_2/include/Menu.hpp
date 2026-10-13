#ifndef MENU_HPP
#define MENU_HPP

#include "estudiante.hpp"
#include <vector>
#include <string>

class Menu
{
private:
    std::vector<Estudiante> estudiantes_;

    void MostrarOpciones() const;
    void MenuEstudiante(Estudiante& estudianteActual);
    void MenuNota(Estudiante& estudianteActual);
    void AgregarEstudiante();
    void CambiarPorcentajes();
    void CambiarEscalaCalificacion();
    Estudiante* BuscarCodigo(const std::string& codigo);

public:
    Menu();
    ~Menu();
    void Ejecutar();
};

#endif
