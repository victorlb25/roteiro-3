#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"


class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double salar, int lim);
        double definirLimite();
        virtual ~ContaCorrente();
        double getSalario();
        void setSalario(double salar);
        int getLimite();
        void setLimite(int lim);

    protected:

    double salario;
    int limite;

};

#endif // CONTACORRENTE_H
