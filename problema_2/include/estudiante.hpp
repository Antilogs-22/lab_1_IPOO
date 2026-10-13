/**
 * @file estudiante.hpp
 * @brief Modela al estudiante que agrupa la escala y los cuatro componentes[cite: 21, 25].
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>
#include "escala.hpp"
#include "componente.hpp"

/**
 * @brief Administra las notas de los componentes y calcula la nota definitiva del curso[cite: 21, 23, 25].
 */
class Estudiante
{
private:
    Escala escala_;
    Componente componentes_[4];

public:
    /**
     * @brief Constructor que inicializa la escala y los 4 componentes por defecto[cite: 21, 25].
     * @param [in] escala Objeto Escala que define los límites permitidos.
     */
    Estudiante(Escala escala = Escala(0.0, 5.0));

    /**
     * @brief Destructor de la clase Estudiante.
     */
    ~Estudiante();

    /**
     * @brief Valida y registra una nota en el componente indicado[cite: 28].
     * @pre El índice debe estar entre 0 y 3, y la nota debe cumplir con la escala[cite: 28].
     * @param [in] indice Posición del componente (0 a 3)[cite: 28].
     * @param [in] nota Calificación obtenida[cite: 28].
     * @return true si se guardó correctamente, false si no es válida[cite: 28].
     */
    bool registrarNota(int indice, double nota);

    /**
     * @brief Suma los aportes de todos los componentes para calcular la nota final[cite: 21, 24].
     * @return La calificación definitiva del curso[cite: 21].
     */
    double calcularNotaFinal() const;

    /**
     * @brief Obtiene el nombre del componente según su índice[cite: 25].
     * @param [in] indice Posición numérica (0 a 3).
     * @return Nombre del rubro evaluativo.
     */
    std::string getNombreComponente(int indice) const;

    /**
     * @brief Configura una nueva escala para el estudiante.
     * @param [in] escala Objeto Escala actualizado.
     */
    void setEscala(Escala escala);

    /**
     * @brief Configura los porcentajes de los cuatro componentes.
     * @param [in] p0 Porcentaje del proyecto.
     * @param [in] p1 Porcentaje de la exposición.
     * @param [in] p2 Porcentaje de los talleres.
     * @param [in] p3 Porcentaje del parcial.
     */
    void setPorcentajes(double p0, double p1, double p2, double p3);

    /**
     * @brief Obtiene la escala actual del estudiante.
     * @return Referencia constante al objeto Escala.
     */
    Escala getEscala() const;
};

#endif