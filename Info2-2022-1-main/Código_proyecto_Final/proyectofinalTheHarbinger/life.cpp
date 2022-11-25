#include "life.h"

Life::Life(QGraphicsItem *parent)
{
    life = 3;

    setPlainText(QString("Health: ") + QString::number(life)); // Health: 3
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",16));
}

void Life::decrease()
{
    life--;
    setPlainText(QString("Health: ") + QString::number(life));
}

int Life::getLife()
{
 return life;
}
