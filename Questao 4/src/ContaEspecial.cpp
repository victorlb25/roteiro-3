#include "ContaEspecial.h"

ContaEspecial::ContaEspecial() : ContaCorrente(2000, 3000)
{
    nomeCliente = "jo�o";
}

ContaEspecial::~ContaEspecial()
{

}

double ContaEspecial::definirLimite()
{
    limite = 4 * salario;
    return limite;
}
