#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

using namespace std;

int main()
{
    Animal *animais[2];

    animais[0] = new Gato();
    animais[1] = new Cachorro();

    for(int i=0;i < 2; i++){
        animais[i]->falar();
    }

    return 0;
}


/*
Polimorfismo em linguagens orientadas a objeto, � a capacidade de objetos
se comportarem de forma diferenciada em face de suas caracter�sticas ou do
ambiente ao qual estejam submetidos, mesmo quando executando a��o que detenha,
semanticamente, a mesma designa��o.

O polimorfismo em C++ se apresenta sob diversas formas diferentes, desde as mais
simples, como fun��es com mesmo nome e lista de par�metros diferentes, at� as mais
complexas como fun��es virtuais, cujas formas de execu��o s�o dependentes da classe a
qual o objeto pertence e s�o identificadas em tempo de execu��o.
*/
