#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"


class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo(std::string n, double b, double h);
        virtual double CalcularArea();
        virtual ~Retangulo();

    protected:
        double base;
        double altura;

};



#endif // RETANGULO_H
