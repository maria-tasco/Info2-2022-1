#ifndef NIVEL2_H
#define NIVEL2_H

#include <QObject>
#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>

using namespace std;

class Nivel2 : public QObject
{
    Q_OBJECT
private:
    float px, py;
    float dx, dy;
public:
    explicit Nivel2(QObject *parent = nullptr);

signals:

};

#endif // NIVEL2_H
