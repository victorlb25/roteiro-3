#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(): Conta()
{

}

void ContaEspecial::definirLimite()
{
    limite = 3 * salarioMensal;
}
