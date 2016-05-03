#ifndef DUCK_H
#define DUCK_H
#include "flybehavior.h"
#include "quackbehavior.h"
#include "flynoway.h"
#include "flywithwings.h"
#include "quack.h"
#include "squeak.h"
#include "mutequack.h"
#include "flyrocketpowered.h"

class Duck
{
public:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
    virtual void display() = 0;
    void performFly();
    void performQuack();
    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);
    void swim();
    Duck();
};

#endif // DUCK_H
