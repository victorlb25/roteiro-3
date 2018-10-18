#include "Circulo.h"

Circulo::Circulo(std::string n, double r)
{
    nome = n;
    raio = r;
}
double Circulo::CalcularArea(){
    return raio*raio*3.1415;
}

Circulo::~Circulo()
{

}
