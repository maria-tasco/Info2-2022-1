#ifndef HARBINGER_H
#define HARBINGER_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "missile.h"

class Harbinger: public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // HARBINGER_H
