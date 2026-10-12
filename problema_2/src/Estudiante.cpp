#include "Estudiante.hpp"

Estudiante::Estudiante() : nota_exp_(0.0), nota_proy_(0.0), nota_tal_(0.0), nota_par_(0.0), nombre_(""), codigo_("")
{

}

Estudiante::~Estudiante()
{
}

double Estudiante::porcentaje_proy_=0.30;
double Estudiante::porcentaje_exp_=0.20;
double Estudiante::porcentaje_tal_=0.30;
double Estudiante::porcentaje_par_=0.20;
double Estudiante::nota_max_=5.0;
double Estudiante::nota_min_=0.0; 

double Estudiante::ConsultarNotaExp()const
{
  return nota_exp_;
}

bool Estudiante::SetNotaExp(double nota)
{
    if (nota < nota_min_ || nota > nota_max_)
    {
        return false;
    }
    else
    {

        Estudiante::nota_exp_ = nota;
        return true; 

    }
}

double Estudiante::ConsultarNotaTal()const
{
    return nota_tal_;
}

bool Estudiante::SetNotaTal(double nota)
{
    if (nota < nota_min_ || nota > nota_max_)
    {
        return false;

    }
    else 
    {
        nota_tal_ = nota;
        return true;    

    }
}

double Estudiante::ConsultarNotaProy()const
{
    return nota_proy_;
}

bool Estudiante::SetNotaProy(double nota)
{
    if (nota < nota_min_ || nota > nota_max_)
    {
        return false;

    }
    else 
    {
        nota_proy_ = nota;
        return true;    

    }
}
double Estudiante::ConsultarNotaPar()const
{
    return nota_par_;
}

bool Estudiante::SetNotaPar(double nota)
{
    if (nota < nota_min_ || nota > nota_max_)
    {
        return false;

    }
    else 
    {
        nota_par_ = nota;
        return true;    

    }
}


std::string Estudiante::GetCodigo()const
{
    return codigo_;
}
bool Estudiante::SetCodigo(std::string& codigo)
{

    if (codigo.length()!= 12)
    {
        return false;

    }
    else 
    {
        codigo_ = codigo;
        return true;    

    }



}
bool Estudiante::SetPorcentajeProy(double porcentaje)
{
    if (porcentaje < 0)
    {
     return false;
    }
    else
    { 

        if( porcentaje >= 1)
        {
            porcentaje_proy_ = porcentaje / 100;
            return true;
        }
        else if (porcentaje < 1)
        {
            porcentaje_proy_ = porcentaje;
            return true;

        }
    }
}

double Estudiante::GetPorcentajeProy()const
{
    return porcentaje_proy_;
}


bool Estudiante::SetPorcentajeExp(double porcentaje)
{
    if (porcentaje < 0)
    {
     return false;
    }
    else
    { 

        if( porcentaje >= 1)
        {
            porcentaje_exp_ = porcentaje / 100;
            return true;
        }
        else if (porcentaje < 1)
        {
            porcentaje_exp_ = porcentaje;
            return true;

        }
    }

}
double Estudiante::GetPorcentajeExp()const
{
    return porcentaje_exp_;
}

bool Estudiante::SetPorcentajeTal(double porcentaje)
{

    if (porcentaje < 0)
    {
     return false;
    }
    else
    { 

        if( porcentaje >= 1)
        {
            porcentaje_tal_ = porcentaje / 100;
            return true;
        }
        else if (porcentaje < 1)
        {
            porcentaje_tal_ = porcentaje;
            return true;

        }
    }

}
double Estudiante::GetPorcentajeTal()const
{
    return porcentaje_tal_;
}
bool Estudiante::SetPorcentajePar(double porcentaje)
{

    if (porcentaje < 0)
    {
     return false;
    }
    else
    { 

        if( porcentaje >= 1)
        {
            porcentaje_par_ = porcentaje / 100;
            return true;
        }
        else if (porcentaje < 1)
        {
            porcentaje_par_ = porcentaje;
            return true;

        }
    }


}
double Estudiante::GetPorcentajePar()const 
{
    return porcentaje_par_;
}
bool Estudiante::SetNotaMin(double min)
{
    nota_min_ = min;
    return true;
}

bool Estudiante::SetNotaMax(double max)
{
    nota_max_ = max;
    return true;
}

double Estudiante::GetNotaMin() 
{
    return nota_min_;
}

double Estudiante::GetNotaMax() 
{
    return nota_max_;
}
