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
#include <string>
class Estudiante 
{

    /** metodos publicos */

    public:
        
        /**contructor y destructor de la clase Estudiante */

        Estudiante();
        ~Estudiante();




        /** Metodos publicos correspondientes a :

            1. consultar la nota de cada trabajo
            2. ingresar la nota correspondiente a cada trabajo
            3. ingresar el codigo identificador del estudiante 
            4. ingresar el nombre del estudiante
            5. calcular la nota final del estudiante 

        */

        double ConsultarNotaExp()const;
        bool SetNotaExp(double nota);

        double ConsultarNotaProy()const;
        bool SetNotaProy(double nota);

        double ConsultarNotaTal()const;
        bool SetNotaTal(double nota);
        
        double ConsultarNotaPar()const;
        bool SetNotaPal(double nota);

        bool SetCodigo(const std::string& codigo);
        bool GetCodigo(const std::string& codigo);

        void SetNombre (const std::string& nombre);
        bool GetCodigo(const std::string& codigo);

        double CalcularNotaFinal() const;

        bool SetPorcentajeProy(double porcentaje);
        double GetPorcentajeProy()const;


        bool SetPorcentajeExp(double porcentaje);
        double GetPorcentajeExp()const;

        bool SetPorcentajeTal(double porcentaje);
        double GetPorcentajeTal()const;

        bool SetPorcentajePar(double porcentaje);
        double GetPorcentajePar()const;
        bool SetNotaMax(double max);
        double GetNotaMax()const;
        bool SetNotaMin(double min);
        double GetNotaMin()const; 
    /**Atributos y metodos privados */

    private:

                
        /** Variables estaticas corespondientes a los porcentajes que representa 
        cada nota sobre la final con tal de que no se instancien en
        memoria cada vez que se cree un nuevo objeto */

        static double porcentaje_proy;
        static double porcentaje_exp;
        static double porcentaje_tal;
        static double porcentaje_par;
        static double nota_min;
        static double nota_max;

        double nota_exp_;
        double nota_proy_;
        double nota_tal_;
        double nota_par_;
        std::string nombre_;
        std::string codigo_;

};
#endif






