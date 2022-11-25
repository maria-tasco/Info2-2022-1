#ifndef MYBALL_H
#define MYBALL_H
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include  <stdlib.h>
#include <QGraphicsRotation>

class MyBall : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
private:
    float vx, vy;
    float ax, ay;
    float w;
public:
    MyBall();
public slots:
    void move();
};

#endif // MYBALL_H
