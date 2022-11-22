#ifndef BLOQUE_H
#define BLOQUE_H

#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>

using namespace std;

class Bloque : public QGraphicsItem
{
private:
    float px, py;
    float dx, dy;
public:
    Bloque();
    Bloque(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
};

#endif // BLOQUE_H
