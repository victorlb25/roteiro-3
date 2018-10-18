#include "Poupanca.h"

Poupanca::Poupanca(): Conta("caros", 34321, 2000 )
{
    variacao = 51;
    taxaRendimento = 0.2;
}

Poupanca::Poupanca(int var, double taxa)
{
    variacao = var;
    taxaRendimento = taxa;
}
Poupanca::~Poupanca()
{

}

double Poupanca::render()
{
    if(variacao == 51){

        saldo = saldo + (saldo *taxaRendimento);

    }
    if(variacao == 1){
            saldo = saldo + (saldo * 0.5);
        }
        return saldo;
}

int Poupanca::getVariacao()
{
    return variacao;
}
void Poupanca::setVariacao(int var)
{
    variacao = var;
}
double Poupanca::getTaxaRendimento()
{
   return taxaRendimento;
}
void Poupanca::setTaxaRendimento(double taxa)
{
    taxaRendimento = taxa;
}
