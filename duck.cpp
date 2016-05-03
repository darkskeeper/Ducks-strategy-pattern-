#include "duck.h"

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    quackBehavior = qb;
}

void Duck::swim()
{
    cout << "All ducks swin" << endl;
}

Duck::Duck()
{

}
