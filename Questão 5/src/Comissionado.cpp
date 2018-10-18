#include "Comissionado.h"

Comissionado::Comissionado(double V_Semanais, double percent_Comissao)
{
    vendasSemanais = V_Semanais;
    percentualComissao = percent_Comissao;
}

double Comissionado::calcularSalario(double salarioBase)
{
    return salarioBase + ((vendasSemanais*percentualComissao)/100);
}
