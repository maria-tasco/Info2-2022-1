#include "bloque.h"

Bloque::Bloque() : px(0), py(0)
{
    dx=60;
    dy=30;
}

Bloque::Bloque(float px, float py)
{
    dx=60;
    dy=30;
    setPos(px,py);
}
QRectF Bloque::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Bloque::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    QPixmap personajePrincipal(":/BN1/ImgProyectoFinal/BloqueDestructibleMadera.png");
    painter->drawPixmap(0,0,dx,dy,personajePrincipal);
}
