#ifndef MENU_HPP
#define MENU_HPP

#include "Estudiante.hpp"
#include <vector>
#include <string>

class Menu
{
private:
    std::vector<Estudiante> estudiantes_;

    void MostrarOpciones() const;
    void  MostrarSubMenu(Estudiante& estudiante);
    void PedirCodigo();
    void PedirNombre();
    void ConsultarTrabajo() const;
    void ConsultarNotaTrabajo() const;
    void MostrarNotaFinal() const;
    void ConsultarEstudiantesi() const;
    void AgregarEstudiante();
    Estudiante* BuscarCodigo(const std::string& codigo);

public:
    Menu();
    ~Menu();
    void Ejecutar();
};

#endif
