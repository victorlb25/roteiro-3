#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(): Conta("Victor", 111111,1000)
{
    salario = 4000;
    limite = 8000;
}

ContaCorrente::ContaCorrente(double salar, int lim)
{
    salario = salar;
    limite = lim;
}
ContaCorrente::~ContaCorrente()
{

}

void ContaCorrente::setSalario(double salar)
{
    salario = salar;
}
double ContaCorrente::getSalario()
{
    return salario;
}
int ContaCorrente::getLimite()
{
    return limite;
}
void ContaCorrente::setLimite(int lim)
{
    limite = lim;
}

 double ContaCorrente::definirLimite()
 {
    limite = 2 * salario;
        return limite;
 }
