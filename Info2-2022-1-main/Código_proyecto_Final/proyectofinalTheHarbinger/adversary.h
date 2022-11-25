#ifndef ADVERSARY_H
#define ADVERSARY_H
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include  <stdlib.h>
#define DTY 0.8
#define DTX 0.1
class Adversary : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
private:
    float vx, vy;
    float ax, ay;
    float w;
public:
    Adversary();
public slots:
    void move();
};


#endif // ADVERSARY_H
