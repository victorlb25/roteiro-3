#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

    using namespace std;

class Conta
{
    public:
        Conta();
        Conta(std::string nom, int num, double sal);
        void setNomeCliente(std::string nom);
        std::string getNomeCliente();
        void setNumero(int num);
        int getNumero();
        void setSaldo(double sal);
        double getSaldo();
        void sacar(double valor);
        void depositar(double valor);

        virtual ~Conta();

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;


};

#endif // CONTA_H
