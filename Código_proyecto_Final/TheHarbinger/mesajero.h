#ifndef MESAJERO_H
#define MESAJERO_H

#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>
#define DT 0.8
using namespace std;

class Mesajero : public QGraphicsItem
{
private:
    int vida;
    string nombre;
    float px, py;
    float vx, vy;
    float ax, ay;
    float dx, dy;
    int velocidad=5;
public:
    Mesajero();
    Mesajero(float px, float py, string nombre);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);

    void advance (int phase);
    void saltar(void);

    void MoveUp();
    void MoveDown();
    void MoveRigth();
    void MoveLeft();

    float getVx() const;
    void setVx(float newVx);
    float getVy() const;
    void setVy(float newVy);
};

#endif // MESAJERO_H
