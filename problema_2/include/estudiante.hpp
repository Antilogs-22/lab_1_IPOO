/**
 * @file estudiante.hpp
 * @brief Maneja los datos del estudiante y sus notas en los componentes.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>
#include "componente.hpp"
#include "escala.hpp"

/**
 * @brief Agrupa la info del alumno y sus cuatro notas del curso.
 */
class Estudiante
{
private:
    std::string codigo_;
    std::string nombre_;
    Escala escala_;
    Componente componentes_[4];

public:
    /**
     * @brief Constructor por defecto que arma los 4 componentes iniciales.
     */
    Estudiante();

    /**
     * @brief Destructor de la clase Estudiante.
     */
    ~Estudiante();

    /**
     * @brief Guarda el código del estudiante verificando que tenga 12 caracteres.
     * @pre El código debe medir exactamente 12 caracteres.
     * @param [in] codigo Código del alumno.
     * @return true si se guardó bien, false si falló la validación.
     */
    bool SetCodigo(const std::string& codigo);

    /**
     * @brief Devuelve el código del estudiante.
     * @return El código actual.
     */
    std::string GetCodigo() const;

    /**
     * @brief Guarda el nombre del estudiante.
     * @pre El nombre no puede estar vacío.
     * @param [in] nombre Nombre completo.
     * @return true si se guardó bien, false si venía vacío.
     */
    bool SetNombre(const std::string& nombre);

    /**
     * @brief Devuelve el nombre del estudiante.
     * @return El nombre guardado.
     */
    std::string GetNombre() const;

    /**
     * @brief Guarda una nota en el componente que le toque.
     * @pre El índice va de 0 a 3 y la nota debe respetar la escala.
     * @param [in] indice Posición del componente (0 a 3).
     * @param [in] nota Valor de la nota.
     * @return true si la guardó, false si la nota no sirve o el índice está malo.
     */
    bool RegistrarNota(int indice, double nota);

    /**
     * @brief Saca la nota final sumando los aportes de todos los componentes.
     * @return La definitiva del alumno.
     */
    double CalcularNotaFinal() const;

    /**
     * @brief Da el nombre del componente según su posición.
     * @param [in] indice Posición (0 a 3).
     * @return El nombre del trabajo o vacío si no existe.
     */
    std::string GetNombreComponente(int indice) const;

    /**
     * @brief Da la nota que tiene un componente.
     * @param [in] indice Posición (0 a 3).
     * @return La nota de ese componente o 0.0 si está malo el índice.
     */
    double GetNotaComponente(int indice) const;

    /**
     * @brief Cambia los límites de la escala de notas.
     * @param [in] min Nuevo mínimo.
     * @param [in] max Nuevo máximo.
     */
    void SetEscala(double min, double max);

    /**
     * @brief Cambia los porcentajes de los cuatro trabajos.
     * @param [in] p0 Porcentaje del taller.
     * @param [in] p1 Porcentaje de la exposición.
     * @param [in] p2 Porcentaje del parcial.
     * @param [in] p3 Porcentaje del proyecto.
     */
    void SetPorcentajes(double p0, double p1, double p2, double p3);
    
    /**
     * @brief Da acceso a la escala para modificarla.
     * @return Referencia a la escala.
     */
    Escala& GetEscala();

    /**
     * @brief Da acceso a la escala solo para leerla.
     * @return Referencia constante a la escala.
     */
    const Escala& GetEscala() const;
};

#endif