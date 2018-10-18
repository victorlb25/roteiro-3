#include <iostream>
#include "Funcionario.h"
#include "Horista.h"
#include "Assalariado.h"
#include "SistemaGerenciaFolha.h"
#include "Comissionado.h"

using namespace std;

#define salarioBase 1000.0

int main()
{
    cout << "SISTEMA DE GERENCIAMENTO DE FOLHA" << endl << endl;

    SistemaGerenciaFolha f;
    Funcionario *func;

    cout << "SALARIO BASE PARA TODOS: R$ 1000" << endl << endl;

    cout << "Assalariado:" << endl << endl;

    func = new Assalariado();
    func->setNome("Victor");
    func->setMatricula(150);
    f.setFuncionarios(func);

    cout << "Nome: " << func->getNome() << endl;
    cout << "Matricula: " << func->getMatricula() << endl;
    cout << "Salario: R$ " << func->calcularSalario(salarioBase)<< endl << endl;

    cout << "Comissionado:" << endl << endl;

    func = new Comissionado(3000, 10);   //passando vendas semanais e percentual da comissao;
    func->setNome("pedro");
    func->setMatricula(500);
    f.setFuncionarios(func);

    cout << "Nome: " << func->getNome() << endl;
    cout << "Matricula: " << func->getMatricula() << endl;
    cout << "Comissao definida em 10% em cima de R$ 2000" << endl;
    cout << "Salario: R$ " << func->calcularSalario(salarioBase)<<endl << endl;

    cout << "Horista:" << endl << endl;

    func = new Horista(45); //passando horas totais trabalhadas na semana
    func->setNome("joão");
    func->setMatricula(250);
    f.setFuncionarios(func);

    cout << "Nome: " << func->getNome() << endl;
    cout << "Matricula: " << func->getMatricula() << endl;
    cout << "Horas trabalhadas definidas como 45h" << endl;

    cout << "Salario: R$ " << func->calcularSalario(salarioBase) << endl << endl;


    cout << "Calcula valor total da folha:" << endl << endl;
    cout << "Total da folha de pagamento: R$ " << f.calculaValorTotalFolha()<< endl << endl;

    cout << "Consulta valor de salario do funcionario:" << endl << endl;
    f.consultaSalarioFuncionario();
    cout << "Salario desse funcionario eh : " << func->calcularSalario(salarioBase) << endl;

    return 0;
}
