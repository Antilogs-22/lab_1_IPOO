/**
 * @file componente.cpp
 * @brief Métodos de la clase Componente.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
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

std::string Componente::GetNombre() const
{
    return nombre_;
}

double Componente::GetPorcentaje() const
{
    return porcentaje_;
}

double Componente::GetNota() const
{
    return nota_;
}

void Componente::SetPorcentaje(double porcentaje)
{
    porcentaje_ = porcentaje;
}

void Componente::SetNota(double nota)
{
    nota_ = nota;
}

double Componente::CalcularAporte() const
{
    return nota_ * porcentaje_;
}