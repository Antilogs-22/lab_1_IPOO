/**
 * @file Recipiente.cpp
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Nombre Estudiante 2 (correo2@correounivalle.edu.co)
 * @author Nombre Estudiante 3 (correo3@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @brief Implementacion de la logica y metodos de la clase Recipiente.
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#include "recipiente.hpp"

// Constante estatica para PI segun formula V = PI * r^2 * h
static const double PI = 3.14159265358979323846;

Recipiente::Recipiente() : radio_r_(1.0), altura_maxima_(1.0) {}

Recipiente::Recipiente(double radio, double alturaMaxima) : radio_r_(1.0), altura_maxima_(1.0)
{
    setRadio(radio);
    setAlturaMaxima(alturaMaxima);
}

Recipiente::~Recipiente() {}

double Recipiente::getRadio() const
{
    return radio_r_;
}

double Recipiente::getAlturaMaxima() const
{
    return altura_maxima_;
}

bool Recipiente::setRadio(double radio)
{
    if (radio > 0.0) {
        radio_r_ = radio;
        return true;
    }
    return false;
}

bool Recipiente::setAlturaMaxima(double alturaMaxima)
{
    if (alturaMaxima > 0.0) {
        altura_maxima_ = alturaMaxima;
        return true;
    }
    return false;
}

double Recipiente::calcularVolumenTotalM3() const
{
    return PI * radio_r_ * radio_r_ * altura_maxima_;
}

double Recipiente::calcularVolumenLecheM3(double h) const
{
    if (h < 0.0 || h > altura_maxima_) {
        return 0.0;
    }
    return PI * radio_r_ * radio_r_ * h;
}

double Recipiente::convertirALitros(double m3) const
{
    if (m3 < 0.0) {
        return 0.0;
    }
    return m3 * 1000.0;
}
