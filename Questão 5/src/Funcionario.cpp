#include "Funcionario.h"
#include <iostream>
#include <string>

Funcionario::Funcionario()
{

}
double Funcionario::calcularSalario(double SalarioBase)
{
}
void Funcionario::setNome(std::string n)
{
    nome = n;
}
void Funcionario::setMatricula(int mat)
{
    matricula = mat;
}
std::string Funcionario::getNome()
{
    return nome;
}
int Funcionario::getMatricula()
{
    return matricula;
}
