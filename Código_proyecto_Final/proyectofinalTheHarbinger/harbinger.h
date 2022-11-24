#ifndef HARBINGER_H
#define HARBINGER_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>
#include "missile.h"
#include "adversary.h"

class Harbinger: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};

#endif // HARBINGER_H
