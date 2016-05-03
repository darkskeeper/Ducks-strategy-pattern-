#include "mallardduck.h"

MallardDuck::MallardDuck() : Duck()
{
    this->quackBehavior = new Quack();
    this->flyBehavior = new FlyWithWings();
}
