#ifndef ADVERSARY_H
#define ADVERSARY_H
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include  <stdlib.h>

class Adversary : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Adversary();
public slots:
    void move();
};


#endif // ADVERSARY_H
