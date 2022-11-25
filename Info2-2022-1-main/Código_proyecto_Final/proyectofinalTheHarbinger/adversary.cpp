#include "adversary.h"
#include "world.h"

extern World * game;
Adversary::Adversary()
    :vx(0), vy(10),
    ax(0), ay(9.8), w(2)
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
    setPos(x()+w*DTX,y()+vy*DTY-0.5*ay*DTY*DTY);

    // destroy enemy when it goes out of the screen
    if (pos().y() > 600){
        //decrease the health
        game->lives->decrease();

        scene()->removeItem(this);
        delete this;
    }
}

