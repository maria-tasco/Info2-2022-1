#include "ball.h"

Ball::Ball()
    : px(10)
{
    setPos(0,0);

    setRect(0,0,100,100);

    // connect
    QTimer * timerB = new QTimer();
    connect(timerB,SIGNAL(timeout()),this,SLOT(move()));

    timerB->start(5);
}
QVector<QPointF> Ball::calculatePath() const
{
    QVector<QPointF> path;
    double x=10;
    for(int i=0; i<=(XSIZE-10)/0.1; i+=1){
        qDebug() << i;
        const double h = XSIZE/2;
        const double k = YSIZE;
        const double p = 30.0;
        const double y = -(qPow(x-h,2)/260)+k;
        qDebug() << x << " " << y;
        path << QPointF(x,y);
        x+=0.1;
    }
    return path;
}
void Ball::move()
{
//   mPath = calculatePath();
//   for(int i=0; i<=(XSIZE-10)/0.1; i+=1){
//    setPos(mPath.at(i).x(),mPath.at(i).y());
//    }

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

