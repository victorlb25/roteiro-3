#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>


class Funcionario
{
    public:
        Funcionario();
        virtual double calcularSalario(double SalarioBase);
        void setNome(std::string n);
        void setMatricula(int mat);
        std::string getNome();
        int getMatricula();

        protected:
        std::string nome;
        int matricula;


};

#endif // FUNCIONARIO_H
