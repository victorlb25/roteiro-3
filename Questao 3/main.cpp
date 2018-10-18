#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{

    Conta c1 = Conta();

    ContaEspecial c2 = ContaEspecial();



    c1.sacar(5000);

   cout << "Saldo da Conta apos saque  :" << c1.getSaldo() << endl;

   c1.depositar(2000);

   cout << " saldo  da Conta apos deposito :" << c1.getSaldo() << endl;

   c1.definirLimite();

   cout << "Limite da Conta :" << c1.getLimite() << endl << endl;


   c2.sacar(1500);

   cout << "Saldo da Conta Especial apos saque :" << c2.getSaldo() << endl;

   c2.depositar(1000);

   cout << " Saldo da Conta Especial apos deposito :" << c2.getSaldo() << endl;

   c2.definirLimite();

   cout << "Limite da Conta Especial :" << c2.getLimite() << endl;



    return 0;
}
