#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog : public Animal
{
public:

    virtual void callOut() override;

};

#endif // DOG_H