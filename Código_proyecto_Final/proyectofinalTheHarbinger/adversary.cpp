#include "adversary.h"
#include "world.h"

extern World * game;
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
    // move adversary down
    setPos(x(),y()+10);

    // destroy enemy when it goes out of the screen
    if (pos().y() > 600){
        //decrease the health
        game->lives->decrease();

        scene()->removeItem(this);
        delete this;
    }
}

