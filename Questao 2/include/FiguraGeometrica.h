#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>


class FiguraGeometrica
{
      public:
        FiguraGeometrica();
        virtual double CalcularArea() = 0;
        std::string getNome();
        void setNome(std::string n);
        virtual ~FiguraGeometrica();

    protected:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
