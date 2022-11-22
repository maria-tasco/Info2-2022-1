#include "mensajero.h"

Mensajero::Mensajero()
    :px(70), py(400),
     vx(0), vy(0),
     ax(0), ay(0),
     dx(50), dy(50)
{
    nombre = "nn";
    vida = 100;
}

Mensajero::Mensajero(float px, float py, string nombre)
{
    this->nombre = nombre;
    vida=100;
}

QRectF Mensajero::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Mensajero::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap personajePrincipal(":/M/ImgProyectoFinal/mensajeroPrueba.png");
    painter->drawPixmap(0,0,dx,dy,personajePrincipal);
}

void Mensajero::advance(int phase)
{
    vx = vx + ax*DT;
    vy = vy + ay*DT;

    px = px + vx*DT +0.5*ax*DT*DT;
    py = py + vy*DT +0.5*ay*DT*DT;

    setPos(px,py);
}

void Mensajero::saltar()
{
    px = px +velocidad*0.707*DT;
    py = py + velocidad*0.707*DT -4.9*DT*DT-20;

    setPos(px,py);
}
void Mensajero::MoveUp()
{
    py=py-velocidad;
    setPos(px,py);
}

void Mensajero::MoveDown()
{
    py=py+velocidad;
    setPos(px,py);
}

void Mensajero::MoveRigth()
{
    px=px+velocidad;
    setPos(px,py);
}

void Mensajero::MoveLeft()
{
    px=px-velocidad;
    setPos(px,py);
}

float Mensajero::getVx() const
{
    return vx;
}

void Mensajero::setVx(float newVx)
{
    vx = newVx;
}

float Mensajero::getVy() const
{
    return vy;
}

void Mensajero::setVy(float newVy)
{
    vy = newVy;
}

