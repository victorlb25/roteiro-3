#include "Conta.h"

Conta::Conta():nomeCliente("Victor"), salarioMensal(30000), numeroConta("1111-1"), saldo(3000), limite(50000)
{

}


Conta::Conta(std::string nome, double salario, std::string conta, double sald, double lim){

    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = conta;
    saldo = sald;
    limite = lim;

}


std::string Conta::getNomeCliente()
{
    return nomeCliente;
}
void Conta::setNomeCliente(std::string nome)
{
       nomeCliente = nome;
}
double Conta::getSalarioMensal()
{
    return salarioMensal;
}
void Conta::setSalarioMensal(double salario)
{
    salarioMensal = salario;
}
std::string Conta::getNumeroConta()
{
    return numeroConta;
}
void Conta::setNumeroConta(std::string conta)
{
    numeroConta = conta;
}
double Conta::getSaldo()
{
    return saldo;
}
void Conta::setSaldo(double sald)
{
    saldo = sald;
}
double Conta::getLimite()
{
    return limite;
}
void Conta::setLimite(double lim)
{
    limite = lim;
}
void Conta::sacar(double valor)
{
    saldo = saldo - valor;
}
void Conta::depositar(double valor)
{
    saldo = saldo + valor;
}
void Conta::definirLimite()
{
    limite = 2 * salarioMensal;
}
