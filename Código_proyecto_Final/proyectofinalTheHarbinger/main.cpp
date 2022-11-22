#include <QApplication>
#include "harbinger.h"
#include <QGraphicsScene>
#include <QGraphicsView>

/*
Tutorial Topics:
-events (keyPressEvent() and QKeyEvent)
-event propogation system
-QDebug
*/

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item to add to the scene
    Harbinger * harbinger1 = new Harbinger();
    harbinger1->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

    // add the item to the scene
    scene->addItem(harbinger1);

    // make rect focusable
    harbinger1->setFlag(QGraphicsItem::ItemIsFocusable);
    harbinger1->setFocus();

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);

    // show the view
    view->show();

    return a.exec();
}
