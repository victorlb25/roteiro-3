#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"


class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(int var, double taxa);
        double render();
        virtual ~Poupanca();
        int getVariacao();
        void setVariacao(int var);
        double getTaxaRendimento();
        void setTaxaRendimento(double taxa);

    protected:

    int variacao;
    double taxaRendimento;
};

#endif // POUPANCA_H
