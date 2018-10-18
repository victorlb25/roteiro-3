#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"



class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        double definirLimite();
        virtual ~ContaEspecial();


};

#endif // CONTAESPECIAL_H
