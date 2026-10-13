/**
 * @file componente.hpp
 * @brief Guarda la info de cada trabajo o examen con su porcentaje y nota.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef COMPONENTE_HPP
#define COMPONENTE_HPP

#include <string>

/**
 * @brief Modela un rubro de la nota definitiva del curso.
 */
class Componente
{
private:
    std::string nombre_;
    double porcentaje_;
    double nota_;

public:
    /**
     * @brief Constructor para inicializar el componente con su nombre y porcentaje.
     * @param [in] nombre Nombre del trabajo (ej. Taller, Parcial).
     * @param [in] porcentaje Porcentaje que vale dentro de la nota.
     */
    Componente(std::string nombre = "", double porcentaje = 0.0);
    
    /**
     * @brief Destructor de la clase Componente.
     */
    ~Componente();

    /**
     * @brief Devuelve el nombre del componente.
     * @return El nombre del trabajo.
     */
    std::string GetNombre() const;

    /**
     * @brief Devuelve el porcentaje configurado para el componente.
     * @return El porcentaje actual.
     */
    double GetPorcentaje() const;

    /**
     * @brief Devuelve la nota que se le metió al componente.
     * @return La calificación guardada.
     */
    double GetNota() const;

    /**
     * @brief Cambia el porcentaje del componente.
     * @param [in] porcentaje Nuevo porcentaje a aplicar.
     */
    void SetPorcentaje(double porcentaje);

    /**
     * @brief Guarda la nota del componente.
     * @param [in] nota Calificación obtenida.
     */
    void SetNota(double nota);

    /**
     * @brief Saca cuánto aporta este componente a la nota final.
     * @return Nota multiplicada por su porcentaje.
     */
    double CalcularAporte() const;
};

#endif