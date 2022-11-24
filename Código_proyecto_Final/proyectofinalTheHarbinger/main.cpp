#include <QApplication>
#include "world.h"

/*
Tutorial Topics:
-parents
-QGraphicsTextItem, setPlainText(), setFont(),setDefaultTextColor()
*/

World * game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    game = new World();
    game->show();

    return a.exec();
}
