#ifndef CACHORRO_H
#define CACHORRO_H
#include "Animal.h"


class Cachorro : public Animal
{
    public:
        Cachorro();
        void falar();
        virtual ~Cachorro();
};

#endif // CACHORRO_H
