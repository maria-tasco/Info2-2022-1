#ifndef HARBINGER_H
#define HARBINGER_H

#include <QGraphicsRectItem>
#include <QKeyEvent>

class Harbinger: public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // HARBINGER_H
