#include <QApplication>
#include "world.h"

World * game; //object global

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    game = new World();
    game->show();

    return a.exec();
}
