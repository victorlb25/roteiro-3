#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo(std::string n, double b, double h);
        virtual double CalcularArea();
        virtual ~Triangulo();

    protected:
        double base;
        double altura;


};

#endif // TRIANGULO_H
