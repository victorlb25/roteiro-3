#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include <iostream>
#include <string>

#define salarioBase 1000.0

int i = 0;

SistemaGerenciaFolha::SistemaGerenciaFolha()
{

}
void SistemaGerenciaFolha::setFuncionarios(Funcionario *func)
{
        funcionarios[i] = func;
        i++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{

    double valorTotal = 0;

    for(int i = 0; i < 3; i++){
        std::cout << "func " << i << " ->"<< " salario " << funcionarios[i]->calcularSalario(salarioBase) << std::endl;
        valorTotal = valorTotal + funcionarios[i]->calcularSalario(salarioBase);
    }

    return valorTotal;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario()
{
    std::string n, n2;
    double s;

    std::cout << "\nDigite o Nome do Funcionario: ";
    std::cin >> n;

   for(int i = 0; i < 3; i++){
       n2 = funcionarios[i]->getNome();
        if(n == n2){
            s = funcionarios[i]->calcularSalario(salarioBase);
        }
    }

    return s;
}
