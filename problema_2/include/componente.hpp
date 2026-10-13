/**
 * @file componente.hpp
 * @brief Define un rubro evaluativo con su nombre, porcentaje y nota[cite: 23].
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef COMPONENTE_HPP
#define COMPONENTE_HPP

#include <string>

/**
 * @brief Modela una parte de la nota final con su respectivo peso porcentual[cite: 23].
 */
class Componente
{
private:
    std::string nombre_;
    double porcentaje_;
    double nota_;

public:
    /**
     * @brief Constructor del componente evaluativo[cite: 25].
     * @param [in] nombre Identificador del componente (Proyecto, Exposicion, etc.).
     * @param [in] porcentaje Peso porcentual dentro del 100%[cite: 21].
     */
    Componente(std::string nombre = "", double porcentaje = 0.0);

    /**
     * @brief Destructor de la clase Componente.
     */
    ~Componente();

    /**
     * @brief Obtiene el nombre del componente[cite: 25].
     * @return Nombre del rubro.
     */
    std::string getNombre() const;

    /**
     * @brief Obtiene el porcentaje asignado al componente[cite: 25].
     * @return Porcentaje de ponderación.
     */
    double getPorcentaje() const;

    /**
     * @brief Obtiene la nota registrada en el componente[cite: 25].
     * @return Calificación numérica.
     */
    double getNota() const;

    /**
     * @brief Asigna una calificación al componente[cite: 25].
     * @param [in] nota Valor de la nota.
     */
    void setNota(double nota);

    /**
     * @brief Modifica el porcentaje del componente.
     * @param [in] porcentaje Nuevo valor porcentual.
     */
    void setPorcentaje(double porcentaje);

    /**
     * @brief Calcula el aporte ponderado del componente a la nota final[cite: 27].
     * @return El valor de (nota * porcentaje / 100)[cite: 27].
     */
    double calcularAporte() const;
};

#endif