#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    Poupanca p1 = Poupanca();
    ContaCorrente c1 = ContaCorrente();
    ContaEspecial e1 = ContaEspecial();


    cout << "Poupanca:" << endl << endl;
    cout << "Nome:" << p1.getNomeCliente() << endl;
    cout << "Numero da conta:" << p1.getNumero() << endl;
    cout << "Saldo anterior:" << p1.getSaldo() << endl;
    cout << "Taxa de Rendimento:" << p1.getTaxaRendimento() << endl;

    p1.render();
    cout << "Saldo atual: " << p1.getSaldo() << endl << endl;



    cout << "Conta Corrente:" << endl << endl;
    cout << "Nome:" << c1.getNomeCliente() << endl;
    cout << "Numero da conta:" << c1.getNumero() << endl;
    cout << "Saldo:" << c1.getSalario() << endl;
    cout << "Limite:" << c1.definirLimite() << endl << endl;


    cout << "Conta Especial:" <<endl << endl;
    cout << "Nome:" << e1.getNomeCliente() << endl;
    cout << "Numero da conta:" << e1.getNumero() << endl;
    cout << "Saldo:" << e1.getSalario() << endl;
    cout << "Limite:" << e1.definirLimite() << endl;


    return 0;
}
