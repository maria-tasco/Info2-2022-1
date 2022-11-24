#include "adversary.h"

Adversary::Adversary()
{
    //set random position
    int random_position = rand() % 700;
    setPos(random_position,0);

    setRect(0,0,100,100);

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Adversary::move()
{
    // move adversary down and up
        setPos(x(),y()-10);
        if (pos().y() + rect().height() < 0){
            scene()->removeItem(this);
            delete this;
        }
}

