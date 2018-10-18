#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{

    FiguraGeometrica *figuras[3];

    figuras[0] = new Triangulo("Triangulo", 3, 3);
    figuras[1] = new Retangulo("Retangulo", 2, 5);
    figuras[2] = new Circulo("Circulo", 2.5);


    for(int i = 0; i < 3; i++){
        cout <<"Figura :" << figuras[i]->getNome() << endl;
        cout << "Area :" << figuras[i]->CalcularArea() << endl;

    }


    return 0;
}
/*
    cout << "Figura :" << figuras[0]->getNome() << endl;
    cout << "Area :"   << figuras[0]->CalcularArea() << endl;

    cout << "Figura :" << figuras[1]->getNome() << endl;
    cout << "Area :"   << figuras[1]->CalcularArea() << endl;

    cout << "Figura :" << figuras[2]->getNome() << endl;
    cout << "Area :"   << figuras[2]->CalcularArea() << endl;
    */


