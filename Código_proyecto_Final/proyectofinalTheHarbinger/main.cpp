#include <QApplication>
#include "harbinger.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>

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
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    harbinger1->setPos(view->width()/2,view->height() - harbinger1->rect().height());

    // spawn enemies
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),harbinger1,SLOT(spawn()));
    timer->start(2000);
    return a.exec();
}
