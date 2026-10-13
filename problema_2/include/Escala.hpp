/**
 * @file Escala.hpp
 * @brief Define el rango numérico permitido para las calificaciones del curso.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#ifndef ESCALA_HPP
#define ESCALA_HPP

/**
 * @brief Representa la escala de calificación (mínimo y máximo permitidos).
 * @invariant minimo_ < maximo_
 */
class Escala
{
private:
    double minimo_;
    double maximo_;

public:
    Escala(double minimo = 0.0, double maximo = 5.0);
    ~Escala();

    double GetMinimo() const;
    double GetMaximo() const;
    bool EsValida(double nota) const;
};

#endif  
