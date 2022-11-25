#include "ball.h"

Ball::Ball()
    : px(10)
{
    setPos(0,0);

    setRect(0,0,100,100);

    // connect
    QTimer * timerB = new QTimer();
    connect(timerB,SIGNAL(timeout()),this,SLOT(move()));

    timerB->start(2);
}

void Ball::move()
{
    const double h = XSIZE/2;
    const double k = YSIZE;

    if(px<XSIZE){
        px+=0.1;
    }else{
        px=10;
    }

    py = -(qPow(px-h,2)/260)+k;

    setPos(px,py);
}

