/**
 * @file escala.cpp
 * @brief Implementación de la clase Escala.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
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

double Escala::getMinimo() const
{
    return minimo_;
}

double Escala::getMaximo() const
{
    return maximo_;
}

bool Escala::esValida(double nota) const
{
    return (nota >= minimo_ && nota <= maximo_);
}