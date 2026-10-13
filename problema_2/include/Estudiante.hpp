/**
 * @file Estudiante.hpp
 * @brief Define la clase Estudiante que agrupa componentes evaluativos y escala.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>
#include "componente.hpp"
#include "escala.hpp"

/**
 * @brief Modela la información académica y calificaciones de un estudiante.
 */
class Estudiante
{
private:
    std::string codigo_;
    std::string nombre_;
    Escala escala_;
    Componente componentes_[4];

public:
    Estudiante();
    ~Estudiante();

    bool SetCodigo(const std::string& codigo);
    std::string GetCodigo() const;

    bool SetNombre(const std::string& nombre);
    std::string GetNombre() const;

    bool RegistrarNota(int indice, double nota);
    double CalcularNotaFinal() const;

    std::string GetNombreComponente(int indice) const;
    double GetNotaComponente(int indice) const;

    void SetEscala(double min, double max);
    void SetPorcentajes(double p0, double p1, double p2, double p3);
    
    Escala& GetEscala();
    const Escala& GetEscala() const;
};

#endif 
