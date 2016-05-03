#include <QCoreApplication>
#include "mallardduck.h"
#include "modelduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    Duck *model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();
    return app.exec();
}
