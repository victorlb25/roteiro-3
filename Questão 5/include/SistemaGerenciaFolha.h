#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"


class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        void setFuncionarios(Funcionario *func);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

        Funcionario *funcionarios[10];


};

#endif // SISTEMAGERENCIAFOLHA_H
