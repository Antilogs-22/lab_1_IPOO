/**
 * @file escala.hpp
 * @brief Define el rango numérico permitido para las calificaciones.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef ESCALA_HPP
#define ESCALA_HPP

/**
 * @brief Modela el rango de valores permitidos para las notas (ej. 0-5 o 0-100)[cite: 23].
 * @invariant minimo_ < maximo_
 */
class Escala
{
private:
    double minimo_;
    double maximo_;

public:
    /**
     * @brief Constructor de la escala con límites configurables[cite: 21, 25].
     * @param [in] minimo Límite inferior de la escala.
     * @param [in] maximo Límite superior de la escala.
     */
    Escala(double minimo = 0.0, double maximo = 5.0);

    /**
     * @brief Destructor de la clase Escala.
     */
    ~Escala();

    /**
     * @brief Obtiene el valor mínimo de la escala[cite: 25].
     * @return El límite inferior.
     */
    double getMinimo() const;

    /**
     * @brief Obtiene el valor máximo de la escala[cite: 25].
     * @return El límite superior.
     */
    double getMaximo() const;

    /**
     * @brief Verifica si una nota se encuentra dentro del rango válido[cite: 26].
     * @param [in] nota Calificación a comprobar.
     * @return true si la nota está dentro del rango, false en caso contrario[cite: 26].
     */
    bool esValida(double nota) const;
};

#endif