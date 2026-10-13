/**
 * @file escala.hpp
 * @brief Controla el rango mínimo y máximo de las notas.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef ESCALA_HPP
#define ESCALA_HPP

/**
 * @brief Define los límites para validar las notas que ingresa el usuario.
 * @invariant minimo_ < maximo_
 */
class Escala
{
private:
    double minimo_;
    double maximo_;

public:
    /**
     * @brief Constructor para definir los límites de las notas.
     * @param [in] minimo Nota mínima permitida.
     * @param [in] maximo Nota máxima permitida.
     */
    Escala(double minimo = 0.0, double maximo = 5.0);

    /**
     * @brief Destructor de la clase Escala.
     */
    ~Escala();

    /**
     * @brief Da la nota mínima de la escala.
     * @return El límite inferior.
     */
    double GetMinimo() const;

    /**
     * @brief Da la nota máxima de la escala.
     * @return El límite superior.
     */
    double GetMaximo() const;

    /**
     * @brief Revisa si una nota está dentro del rango permitido.
     * @param [in] nota La nota que se quiere chequear.
     * @return true si es válida, false si se pasa del rango.
     */
    bool is_valida(double nota) const;
};

#endif