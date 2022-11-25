#ifndef PARED_H
#define PARED_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class pared: public QGraphicsItem
{
private:
    int x;
    int y;
    int w;
    int h;
public:
    pared();
    pared(int x, int y, int w, int h);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
};

#endif // PARED_H
