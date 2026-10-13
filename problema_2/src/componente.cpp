/**
 * @file componente.cpp
 * @brief Implementación de la clase Componente.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#include "componente.hpp"

Componente::Componente(std::string nombre, double porcentaje)
    : nombre_(nombre), porcentaje_(porcentaje), nota_(0.0)
{
}

Componente::~Componente()
{
}

std::string Componente::getNombre() const
{
    return nombre_;
}

double Componente::getPorcentaje() const
{
    return porcentaje_;
}

double Componente::getNota() const
{
    return nota_;
}

void Componente::setNota(double nota)
{
    nota_ = nota;
}

void Componente::setPorcentaje(double porcentaje)
{
    porcentaje_ = porcentaje;
}

double Componente::calcularAporte() const
{
    return (nota_ * porcentaje_) / 100.0;
}