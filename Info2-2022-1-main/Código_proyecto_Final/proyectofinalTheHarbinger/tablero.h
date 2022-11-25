#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tablero; }
QT_END_NAMESPACE

class tablero : public QMainWindow
{
    Q_OBJECT

public:
    tablero(QWidget *parent = nullptr);
    ~tablero();

private:
    Ui::tablero *ui;
};
#endif // TABLERO_H
