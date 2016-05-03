#ifndef SQUEAK_H
#define SQUEAK_H
#include "quackbehavior.h"


class Squeak : public QuackBehavior
{
public:
    Squeak() : QuackBehavior() {}
    void quack();
};

#endif // SQUEAK_H
