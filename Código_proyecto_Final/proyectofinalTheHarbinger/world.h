#ifndef WORLD_H
#define WORLD_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "harbinger.h"
#include "adversary.h"

class World: public QGraphicsView
{
public:
    World(QWidget * parent=0);
    QGraphicsScene * scene;
    Harbinger * harbinger1;
};

#endif // WORLD_H
