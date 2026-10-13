/**
 * @file escala.cpp
 * @brief Métodos de la clase Escala.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
 * @date 2026-10-13
 * @license GPL-3.0
 */

#include "escala.hpp"

Escala::Escala(double minimo, double maximo)
    : minimo_(minimo), maximo_(maximo)
{
}

Escala::~Escala()
{
}

double Escala::GetMinimo() const
{
    return minimo_;
}

double Escala::GetMaximo() const
{
    return maximo_;
}

bool Escala::is_valida(double nota) const
{
    return (nota >= minimo_ && nota <= maximo_);
}