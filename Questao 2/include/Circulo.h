#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"


#include <math.h>

class Circulo : public FiguraGeometrica
{
    public:

        Circulo(std::string n, double r);
        virtual double CalcularArea();
        virtual ~Circulo();

    protected:
        double raio;

};

#endif // CIRCULO_H




