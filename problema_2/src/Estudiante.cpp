/**
 * @file Estudiante.cpp
 * @brief Implementación de la clase Estudiante.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#include "estudiante.hpp"

Estudiante::Estudiante()
    : codigo_(""), nombre_(""), escala_(0.0, 5.0)
{
    componentes_[0] = Componente("Taller", 0.30);
    componentes_[1] = Componente("Exposicion", 0.20);
    componentes_[2] = Componente("Parcial", 0.20);
    componentes_[3] = Componente("Proyecto", 0.30);
}

Estudiante::~Estudiante()
{
}

bool Estudiante::SetCodigo(const std::string& codigo)
{
    if (codigo.length() != 12)
    {
        return false;
    }
    codigo_ = codigo;
    return true;
}

std::string Estudiante::GetCodigo() const
{
    return codigo_;
}

bool Estudiante::SetNombre(const std::string& nombre)
{
    if (nombre.empty())
    {
        return false;
    }
    nombre_ = nombre;
    return true;
}

std::string Estudiante::GetNombre() const
{
    return nombre_;
}

bool Estudiante::RegistrarNota(int indice, double nota)
{
    if (indice < 0 || indice >= 4)
    {
        return false;
    }

    if (escala_.EsValida(nota))
    {
        componentes_[indice].SetNota(nota);
        return true;
    }
    return false;
}

double Estudiante::CalcularNotaFinal() const
{
    double nota_final = 0.0;
    for (int i = 0; i < 4; ++i)
    {
        nota_final += componentes_[i].CalcularAporte();
    }
    return nota_final;
}

std::string Estudiante::GetNombreComponente(int indice) const
{
    if (indice >= 0 && indice < 4)
    {
        return componentes_[indice].GetNombre();
    }
    return "";
}

double Estudiante::GetNotaComponente(int indice) const
{
    if (indice >= 0 && indice < 4)
    {
        return componentes_[indice].GetNota();
    }
    return 0.0;
}

void Estudiante::SetEscala(double min, double max)
{
    escala_ = Escala(min, max);
}

void Estudiante::SetPorcentajes(double p0, double p1, double p2, double p3)
{
    componentes_[0].SetPorcentaje(p0);
    componentes_[1].SetPorcentaje(p1);
    componentes_[2].SetPorcentaje(p2);
    componentes_[3].SetPorcentaje(p3);
}

Escala& Estudiante::GetEscala()
{
    return escala_;
}

const Escala& Estudiante::GetEscala() const
{
    return escala_;
}
