#include "Horista.h"

Horista::Horista(double H_trabalhadas)
{
    horasTrabalhadas = H_trabalhadas;
}
double Horista::calcularSalario(double salarioBase)
{
    double salario = 0;

    if(horasTrabalhadas > 40){

        salario = (salarioBase*1.5);
    }else{
        salario = salarioBase;
    }
    return salario;

}
