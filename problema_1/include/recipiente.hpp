/**
 * @file Recipiente.hpp
 * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
 * @author Nombre Estudiante 2 (correo2@correounivalle.edu.co)
 * @author Nombre Estudiante 3 (correo3@correounivalle.edu.co)
 * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
 * @brief Definicion de la clase Recipiente para el calculo de volumenes cilindricos.
 * @version 1.0
 * @date 2026-10-08
 * @license GPL-3.0
 */

#ifndef RECIPIENTE_HPP
#define RECIPIENTE_HPP

class Recipiente
{
public:
    // ctor por defecto
    Recipiente();

    // ctor parametrizado
    Recipiente(double radio, double alturaMaxima);

    // dtor
    ~Recipiente();

    // Consultas (no modifican estado)
    double getRadio() const;
    double getAlturaMaxima() const;
    double calcularVolumenTotalM3() const;
    double calcularVolumenLecheM3(double h) const;
    double convertirALitros(double m3) const;

    // Comandos (modifican estado)
    bool setRadio(double radio);
    bool setAlturaMaxima(double alturaMaxima);

private:
    double radio_r_;
    double altura_maxima_;
};

#endif // RECIPIENTE_HPP