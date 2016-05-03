#include "modelduck.h"

ModelDuck::ModelDuck() : Duck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new Quack();
}

void ModelDuck::display()
{
    cout << "I am a model duck" << endl;
}
