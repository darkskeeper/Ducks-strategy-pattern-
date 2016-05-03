#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include "duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck();
    void display()
    {
        cout << "I'm a real Mallard duck" << endl;
    }
};

#endif // MALLARDDUCK_H
