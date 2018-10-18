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
Polimorfismo em linguagens orientadas a objeto, é a capacidade de objetos
se comportarem de forma diferenciada em face de suas características ou do
ambiente ao qual estejam submetidos, mesmo quando executando ação que detenha,
semanticamente, a mesma designação.

O polimorfismo em C++ se apresenta sob diversas formas diferentes, desde as mais
simples, como funções com mesmo nome e lista de parâmetros diferentes, até as mais
complexas como funções virtuais, cujas formas de execução são dependentes da classe a
qual o objeto pertence e são identificadas em tempo de execução.
*/
