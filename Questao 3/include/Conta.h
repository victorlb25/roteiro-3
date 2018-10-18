#ifndef CONTA_H
#define CONTA_H
#include <string>
#include "IConta.h"


class Conta : public IConta
{
    protected:
       std::string nomeCliente;
       double salarioMensal;
       std::string numeroConta;
       double saldo;
       double limite;

    public:
        Conta();
        Conta(std::string nome, double salario,std::string conta, double sald, double lim);
       std::string getNomeCliente();
       void setNomeCliente(std::string nome);
       double getSalarioMensal();
       void setSalarioMensal(double salario);
       std::string getNumeroConta();
       void setNumeroConta(std::string conta);
       double getSaldo();
       void setSaldo(double sald);
       double getLimite();
       void setLimite(double lim);
       virtual void sacar(double valor);
       virtual void depositar(double valor);
       void definirLimite();


};

#endif // CONTA_H
