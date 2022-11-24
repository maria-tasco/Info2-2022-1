#include "missile.h"

Missile::Missile()
{
    setRect(0,0,10,50);

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Missile::move()
{
    // move Missile up
        setPos(x(),y()-10);
        if (pos().y() + rect().height() < 0){
            scene()->removeItem(this);
            delete this;
        }
    // if Missile collides with adversary, destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Adversary)){
            // remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            // delete them both
            delete colliding_items[i];
            delete this;
            return;
        }
    }

}
