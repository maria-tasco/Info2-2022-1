#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>
#include "proyectil.h"
#include <QVector>
#define DT 0.2
using namespace std;

class Enemigo: public QGraphicsItem
{
private:
    float px, py;
    float vx, vy;
    float ax, ay;
    float dx, dy;
    int velocidad=5;
    QVector<Proyectil *> Proyectiles;
public:
    Enemigo();
    Enemigo(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);

    void advance (int phase);
    Proyectil* disparar(void);
    Proyectil* eliminarProyectil(void);

    float getVx() const;
    void setVx(float newVx);
    float getVy() const;
    void setVy(float newVy);
};

#endif // ENEMIGO_H
