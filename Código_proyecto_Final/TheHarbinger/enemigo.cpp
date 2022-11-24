#include "enemigo.h"

Enemigo::Enemigo()
    :px(0), py(0),
     vx(0), vy(0),
     ax(0), ay(0),
     dx(80), dy(80)
{
    timeDownUp = new QTimer();
    timeDownUp->start(2000);

    connect(timeDownUp, &QTimer::timeout, this, &Enemigo::On_move);
}

Enemigo::Enemigo(float px, float py)
    :px(px), py(py)
{

}

QRectF Enemigo::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Enemigo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap enemigo_izq(":/Enemigo/ImgProyectoFinal/enemigo.png");
    painter->drawPixmap(0,0,dx,dy,enemigo_izq);
}

void Enemigo::advance(int phase)
{
    vx = vx + ax*DTE;
    vy = vy + ay*DTE;

    px = px + vx*DTE +0.5*ax*DTE*DTE;
    py = py + vy*DTE +0.5*ay*DTE*DTE;

    setPos(px,py);
}
void Enemigo::On_move()
{
    // move enemy down
    setPos(x(),y()+5);
    if (pos().y()  < 0){

    }
}


Proyectil* Enemigo::disparar()
{
    float _vx, _vy;

    if(vx==0 && vy==0){
        _vx=30;
        _vy=0;
    }else if(vy==0){
        _vx=vx+10;
    }else if(vx==0){
        _vy=vy+10;
    }
    if(Proyectiles.size()<3){
        Proyectiles.push_back(new Proyectil(px+20,py+20,_vx,_vy));
        return Proyectiles.last();
    }

    return nullptr;
}

Proyectil* Enemigo::eliminarProyectil()
{
    Proyectil *p = Proyectiles.first();
    Proyectiles.remove(0);
    return p;
}
float Enemigo::getVx() const
{
    return vx;
}

void Enemigo::setVx(float newVx)
{
    vx = newVx;
}

float Enemigo::getVy() const
{
    return vy;
}

void Enemigo::setVy(float newVy)
{
    vy = newVy;
}

