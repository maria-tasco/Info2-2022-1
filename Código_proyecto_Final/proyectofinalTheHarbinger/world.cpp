#include "world.h"

World::World(QWidget *parent)
{
    // create the scene
        scene = new QGraphicsScene();
        scene->setSceneRect(0,0,800,600);

    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    // create the player
    harbinger1 = new Harbinger();
    harbinger1->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels
    harbinger1->setPos(400,500); // TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    harbinger1->setFlag(QGraphicsItem::ItemIsFocusable);
    harbinger1->setFocus();
    // add the player to the scene
    scene->addItem(harbinger1);

    //create the score
    score = new Score();
    scene->addItem(score);
    //create the score
    lives = new Life();
    lives->setPos(lives->x(),lives->y()+25);
    scene->addItem(lives);

    // spawn enemies
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),harbinger1,SLOT(spawn()));
    timer->start(2000);

    show();
}
