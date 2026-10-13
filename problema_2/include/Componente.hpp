/**
 * @file Componente.hpp
 * @brief Define un componente de evaluación con su porcentaje y calificación.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#ifndef COMPONENTE_HPP
#define COMPONENTE_HPP

#include <string>

/**
 * @brief Modela un rubro evaluativo individual dentro de la nota definitiva.
 */
class Componente
{
private:
    std::string nombre_;
    double porcentaje_;
    double nota_;

public:
    Componente(std::string nombre = "", double porcentaje = 0.0);
    ~Componente();

    std::string GetNombre() const;
    double GetPorcentaje() const;
    double GetNota() const;

    void SetPorcentaje(double porcentaje);
    void SetNota(double nota);

    double CalcularAporte() const;
};

#endif 
