#ifndef BALL_H
#define BALL_H
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include  <stdlib.h>
#include <QVector>
#include <QtMath>

#define XSIZE 800
#define YSIZE 600

class Ball: public QObject,public QGraphicsRectItem
{ Q_OBJECT
private:
    float vx, vy;
    float ax, ay;
    float w;
    QVector<QPointF> m_path;
public:
    Ball();
public slots:
    void move();

};

#endif // BALL_H
