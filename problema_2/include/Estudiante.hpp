/**
  2  * @file Estudiante.hpp
  3  * @author Darlyn Valeria Jurado Burbano (darlyn.jurado@correounivalle.edu.co)
  4  * @author Santiago Andres Gomez Galvis (santiago.andres.gomez@correounivalle.edu.co)
  6  * @author Marieth Leguizamo Fajardo (marieth.leguizamo@correounivalle.edu.co)
  7  * @brief 
  8  * @version 1.0
  9  * @date 2026-10-08
 10  * @license GPL-3.0
 11  */
#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

class Estudiante 
{

    /** metodos publicos y variables estaticas */

    public:
        
        /**contructor y destructor de la clase Estudiante */

        Estudiante();
        ~Estudiante();

        /** Constantes estaticas corespondientes a los porcentajes que representa 
        cada nota sobre la final con tal de que no se instancien en
        memoria cada vez que se cree un nuevo objeto */

        static const double PORCENTAJE_PROY;
        static const double PORCENTAJE_EXP;
        static const double PORCENTAJE_TAL;
        static const double PORCENTAJE_PAR;
        
        /** Metodos publicos correspondientes a :

            1. consultar la nota de cada trabajo
            2. ingresar la nota correspondiente a cada trabajo
            3. ingresar el codigo identificador del estudiante 
            4. ingresar el nombre del estudiante
            5. calcular la nota final del estudiante 

        */

        double ConsultarNota (std::string trabajo)const;
        bool SetNota (std::string trabajo, double nota);
        bool SetCodigo (std::string codigo);
        void SetNombre (std::string nombre);
        double CalcularNotaFinal() const;

    /**Atributos y metodos privados */

    private:

        float nota_proy_;
        float nota_exp_;
        float nota_tal_;
        float nota_par_;
        std::string nombre_;
        std::string codigo_;

};
#endif






