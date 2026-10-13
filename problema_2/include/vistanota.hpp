/**
 * @file vistanota.hpp
 * @brief Define la clase VistaNota para manejar la interfaz de usuario en consola[cite: 25].
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 2.0
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef VISTANOTA_HPP
#define VISTANOTA_HPP

#include "estudiante.hpp"

/**
 * @brief Gestiona los menús, entradas por consola y despliegue de resultados[cite: 25].
 */
class VistaNota
{
private:
    void mostrarMenuPrincipal() const;
    void registrarNotas(Estudiante& estudiante);
    void cambiarEscala(Estudiante& estudiante);
    void cambiarPorcentajes(Estudiante& estudiante);

public:
    /**
     * @brief Constructor por defecto de la vista.
     */
    VistaNota();

    /**
     * @brief Destructor de la clase VistaNota.
     */
    ~VistaNota();

    /**
     * @brief Ejecuta el bucle principal de la interfaz[cite: 25].
     */
    void ejecutar();
};

#endif