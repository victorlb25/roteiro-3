#include "Retangulo.h"

Retangulo::Retangulo(std::string n, double b, double h)
{
    nome = n;
    base = b;
    altura = h;
}
double Retangulo::CalcularArea(){
    return (base*altura);
}

Retangulo::~Retangulo()
{

}
