#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista(double H_trabalhadas);
        double calcularSalario(double salarioBase);

        double horasTrabalhadas;


};

#endif // HORISTA_H
