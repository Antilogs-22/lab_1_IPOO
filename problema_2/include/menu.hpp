/**
 * @file menu.hpp
 * @brief Controla los menús y la interacción por consola con el usuario.
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @version 1.3
 * @date 2026-10-13
 * @license GPL-3.0
 */

#ifndef MENU_HPP
#define MENU_HPP

#include "estudiante.hpp"
#include <vector>
#include <string>

/**
 * @brief Maneja la lista de estudiantes y las opciones que ve el usuario en pantalla.
 */
class Menu
{
private:
    std::vector<Estudiante> estudiantes_;

    /**
     * @brief Imprime las opciones principales en la consola.
     */
    void MostrarOpciones() const;

    /**
     * @brief Muestra las opciones para interactuar con un estudiante en específico.
     * @param [in,out] estudiante_actual Alumno que se está usando en el momento.
     */
    void MenuEstudiante(Estudiante& estudiante_actual);

    /**
     * @brief Muestra el menú para escoger a qué trabajo se le va a meter nota.
     * @param [in,out] estudiante_actual Alumno al que se le va a registrar la nota.
     */
    void MenuNota(Estudiante& estudiante_actual);

    /**
     * @brief Pide los datos básicos y crea un nuevo estudiante en el vector.
     */
    void AgregarEstudiante();

    /**
     * @brief Cambia los porcentajes de los trabajos para todos los estudiantes.
     */
    void CambiarPorcentajes();

    /**
     * @brief Cambia la escala de calificación de todo el curso.
     */
    void CambiarEscalaCalificacion();

    /**
     * @brief Busca un estudiante dentro del vector usando el código.
     * @param [in] codigo El código de 12 caracteres que se busca.
     * @return Puntero al estudiante o NULL si no lo encuentra.
     */
    Estudiante* BuscarCodigo(const std::string& codigo);

public:
    /**
     * @brief Constructor por defecto del menú.
     */
    Menu();

    /**
     * @brief Destructor de la clase Menu.
     */
    ~Menu();

    /**
     * @brief Arranca el ciclo principal para que el programa empiece a correr.
     */
    void Ejecutar();
};

#endif