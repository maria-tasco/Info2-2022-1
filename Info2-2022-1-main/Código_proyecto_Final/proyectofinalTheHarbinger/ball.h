#ifndef BALL_H
#define BALL_H
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include  <stdlib.h>
#include <QVector>
#include <QtMath>
#include <QDebug>
#define XSIZE 800.0
#define YSIZE 600

class Ball: public QObject,public QGraphicsRectItem
{ Q_OBJECT
private:
    float vx, vy;
    float ax, ay;
    float px, py;
    float w;
    int m_index;
public:
    Ball();
public slots:
    void move();

};

#endif // BALL_H
