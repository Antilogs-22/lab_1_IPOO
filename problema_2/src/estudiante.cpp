/**
 * @file estudiante.cpp
 * @brief Implementación de la clase Estudiante.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#include "estudiante.hpp"

Estudiante::Estudiante(Escala escala)
    : escala_(escala)
{
    // Inicialización según requerimientos: Proyecto 30%, Exposición 20%, Talleres 30%, Parcial 20%[cite: 21]
    componentes_[0] = Componente("Proyecto", 30.0);
    componentes_[1] = Componente("Exposicion", 20.0);
    componentes_[2] = Componente("Talleres", 30.0);
    componentes_[3] = Componente("Parcial", 20.0);
}

Estudiante::~Estudiante()
{
}

bool Estudiante::registrarNota(int indice, double nota)
{
    if (indice < 0 || indice >= 4)
    {
        return false;
    }

    if (escala_.esValida(nota))
    {
        componentes_[indice].setNota(nota);
        return true;
    }
    return false;
}

double Estudiante::calcularNotaFinal() const
{
    double nota_final = 0.0;
    for (int i = 0; i < 4; ++i)
    {
        nota_final += componentes_[i].calcularAporte();
    }
    return nota_final;
}

std::string Estudiante::getNombreComponente(int indice) const
{
    if (indice >= 0 && indice < 4)
    {
        return componentes_[indice].getNombre();
    }
    return "";
}

void Estudiante::setEscala(Escala escala)
{
    escala_ = escala;
}

void Estudiante::setPorcentajes(double p0, double p1, double p2, double p3)
{
    componentes_[0].setPorcentaje(p0);
    componentes_[1].setPorcentaje(p1);
    componentes_[2].setPorcentaje(p2);
    componentes_[3].setPorcentaje(p3);
}

Escala Estudiante::getEscala() const
{
    return escala_;
}