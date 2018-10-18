#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"


class Assalariado : public Funcionario
{
    public:
        Assalariado();
        double calcularSalario(double salarioBase);

        double salario;
};

#endif // ASSALARIADO_H
