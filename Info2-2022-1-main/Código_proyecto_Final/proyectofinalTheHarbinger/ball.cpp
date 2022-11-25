#include "ball.h"

Ball::Ball()
{
    setPos(0,0);

    setRect(0,0,100,100);

    // connect
    QTimer * timerB = new QTimer();
    connect(timerB,SIGNAL(timeout()),this,SLOT(move()));

    timerB->start(50);
}

void Ball::move()
{
//    for(int x=0; x<=XSIZE; x+=0.1){
//        const double h = XSIZE/2;
//        const double k = YSIZE;
//        const double p = 30.0;
//        const double y = -qPow(x-h,2)/(4*p)+k;

//        setPos(x,y);
//    }
    //setPos(x(),y()+10);
}

