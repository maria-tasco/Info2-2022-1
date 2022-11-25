#ifndef MISSILE_H
#define MISSILE_H

#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include <QList>
#include "adversary.h"


class Missile : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Missile();
public slots:
    void move();
};

#endif // MISSILE_H
