#ifndef WORLD_H
#define WORLD_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include "harbinger.h"
#include "adversary.h"
#include "life.h"
#include "ball.h"
#include "score.h"

#define XPOS
#define YPOS
#define XSIZE
#define Y SIZE
#define MILLISECONDS 2
class World: public QGraphicsView
{ Q_OBJECT
public:
    World(QWidget * parent=0);
    QGraphicsScene * scene;
    Harbinger * harbinger1;
    Score *score;
    Life *lives;
    Ball *TrueBall;
public slots:
    void update();

};

#endif // WORLD_H
