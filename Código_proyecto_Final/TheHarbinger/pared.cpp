#include "pared.h"

pared::pared()
{

}

pared::pared(int x, int y, int w, int h)
{
    this->x=x;
    this->y=y;
    this->w=w;
    this->h=h;
}
QRectF pared::boundingRect() const
{
    return QRectF(x,y,w,h);
}

void pared::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
