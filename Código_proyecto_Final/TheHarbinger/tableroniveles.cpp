#include "tableroniveles.h"
#include "ui_tableroniveles.h"

TableroNiveles::TableroNiveles(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TableroNiveles)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,630,630);
    ui->graphicsView->setScene(scene);

    //m1=nullptr;

    connect(ui->pushButtonStart, &QPushButton::clicked,
            this, &TableroNiveles::on_pushButtonStart_clicked);
}
void TableroNiveles::on_pushButtonStart_clicked()
{

    E_izq = new Enemigo;
    scene->addItem(E_izq);

    mensajero1 = new Mensajero;
    scene->addItem(mensajero1);

    crearMapa();

    time = new QTimer;
    time->start(100);

    connect(time, &QTimer::timeout,
            scene, &QGraphicsScene::advance);

//    auto p = E_izq->disparar();
//    if(p!=nullptr){
//        scene->addItem(p);
//        connect(p,&Proyectil::finProyectil,
//                this,&TableroNiveles::eliminarProyectil);
//    }

    ui->pushButtonStart->hide();
}

void TableroNiveles::eliminarProyectil()
{
    auto p = E_izq->eliminarProyectil();
    scene->removeItem(p);
}

TableroNiveles::~TableroNiveles()
{
    delete ui;
}

void TableroNiveles::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_W)
     {
       if(!EvaluarColisionPared())
          mensajero1->MoveUp();
       else
           mensajero1->MoveDown();
     }else if(event->key()==Qt::Key_S)
     {
        if(!EvaluarColisionPared())
           mensajero1->MoveDown();
        else
            mensajero1->MoveUp();
     }else if(event->key()==Qt::Key_D)
     {
          if(!EvaluarColisionPared())
             mensajero1->MoveRigth();
          else
            mensajero1->MoveLeft();

     }else if(event->key()==Qt::Key_A)
    {
        if(!EvaluarColisionPared())
          mensajero1->MoveLeft();
        else
          mensajero1->MoveRigth();
    }
}

bool TableroNiveles::EvaluarColisionPared()
{
    QList<pared*>::Iterator it;
    for(it=paredes.begin(); it!=paredes.end();it++)
    {
       if((*it)->collidesWithItem(mensajero1))
           return true;
    }
    return false;
}

void TableroNiveles::crearMapa()
{
//    /*una función que se encargue de leer y llenar la matriz
//    con los datos*/
//    for(int i=0; i<20; i++){
//        for(int j=0; j<20; j++){
//            if(i%2==1 && j%2==1){
//                mapa[i][j]=1; //muro
//            }else{
//                mapa[i][j]=2; //Moneda
//            }
//        }
//    }

//    /*Algoritmo que gráfica la logica
//    una función que gráfica*/
//    for(int i=0; i<20; i++){
//        for(int j=0; j<20; j++){
//            if(mapa[i][j] ==1 ){
//                /*quiere decir que ahí va un muro así que debo crealo
//                ´y multiplico por 30 la posicion que estoy trabajando*/
//                Bloque *m = new Bloque(i*60,j*60);
//                /*Al vector de muros le agrego los que voy creando*/
//                bloques.push_back(m);
//                /*con memoria dinamica puedo crear muros más rápido de
//                esta manera: muros.push_back(new Muro(i*30,j*30)); new Muro
//                me retorna ya directamente el puntero*/
//                /*Agregar a la escena ese muro, el último muro agregado*/
//                scene->addItem(bloques.last());
//            }/*else if(mapa[i][j] ==2){
//                moneditas.push_back(new Monedas(i*30,j*30));
//                scene->addItem(moneditas.last());
//            }*/
//        }
//    }
    paredes.push_back(new pared(0,0,600,20));
    scene->addItem(paredes.back());
    paredes.push_back(new pared(0,485,600,20));
    scene->addItem(paredes.back());
    paredes.push_back(new pared(0,0,20,485));
    scene->addItem(paredes.back());
    paredes.push_back(new pared(600,0,20,505));
    scene->addItem(paredes.back());
}



