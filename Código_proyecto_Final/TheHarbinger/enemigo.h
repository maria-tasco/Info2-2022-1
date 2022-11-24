#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>
#include "proyectil.h"
#include <QVector>
#include<QTimer>
#define DTE 0.2
using namespace std;

class Enemigo: public QObject, public QGraphicsItem
{
    Q_OBJECT
private:
    float px, py;
    float vx, vy;
    float ax, ay;
    float dx, dy;
    int velocidad=5;
    QVector<Proyectil *> Proyectiles;
    QTimer *timeDownUp;
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

public slots:
        void On_move(void);
};

#endif // ENEMIGO_H
