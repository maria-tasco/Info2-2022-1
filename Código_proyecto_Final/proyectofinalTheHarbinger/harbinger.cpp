#include "harbinger.h"

void Harbinger::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
            setPos(x()-10,y());
        }
        else if (event->key() == Qt::Key_Right){
            setPos(x()+10,y());
        }
        else if (event->key() == Qt::Key_Up){
            setPos(x(),y()-10);
        }
        else if (event->key() == Qt::Key_Down){
            setPos(x(),y()+10);
        }else if (event->key() == Qt::Key_Space){
        // create a bullet
        Missile * missile = new Missile();
        missile->setPos(x(),y());
        scene()->addItem(missile);
    }
}
