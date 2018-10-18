#include "Conta.h"

Conta::Conta():nomeCliente("Victor"), numero(787878), saldo(2000)
{

}

Conta::Conta(std::string nom, int num, double sal)
{
    nomeCliente = nom;
    numero = num;
    saldo = sal;
}

Conta::~Conta()
{

}

void Conta::setNomeCliente(std::string nom)
{
    nomeCliente = nom;
}
std::string Conta::getNomeCliente()
{
    return nomeCliente;
}
void Conta::setNumero(int num)
{
    numero = num;
}
int Conta::getNumero()
{
    return numero;
}
void Conta::setSaldo(double sal)
{
    saldo = sal;
}
double Conta::getSaldo()
{
    return saldo;
}
void Conta::sacar(double valor)
{
    if(valor > saldo){
        cout << "Saldo indisponivel" << endl;
    }else{

    saldo = saldo - valor;
    }
}
void Conta::depositar(double valor)
{
    saldo = saldo + valor;
}
