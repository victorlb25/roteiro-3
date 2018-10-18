#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado(double V_Semanais, double percent_Comissao);
        double calcularSalario(double salarioBase);

        double vendasSemanais;
        double percentualComissao;


};

#endif // COMISSIONADO_H
