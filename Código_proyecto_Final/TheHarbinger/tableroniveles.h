#ifndef TABLERONIVELES_H
#define TABLERONIVELES_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QVector>
#include "bloque.h"
#include "pared.h"
#include <QList>
#include "enemigo.h"
#include "proyectil.h"
#include "mensajero.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TableroNiveles; }
QT_END_NAMESPACE

class TableroNiveles : public QMainWindow
{
    Q_OBJECT

public:
    TableroNiveles(QWidget *parent = nullptr);
    ~TableroNiveles();

    void keyPressEvent(QKeyEvent *event);
    bool EvaluarColisionPared();
    void crearMapa(void);
private slots:

    void on_pushButtonStart_clicked();
public slots:
    void eliminarProyectil(void);
private:
    Ui::TableroNiveles *ui;
    int mapa[20][20];
    QGraphicsScene *scene;
    QGraphicsScene *sceneN2;
    QTimer *time;
    QVector<Bloque *> bloques;
    Enemigo *E_izq;
    QList<pared*>paredes;
    Mensajero *mensajero1;
};
#endif // TABLERONIVELES_H
