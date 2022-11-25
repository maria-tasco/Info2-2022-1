#include "tablero.h"
#include "ui_tablero.h"

tablero::tablero(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tablero)
{
    ui->setupUi(this);
}

tablero::~tablero()
{
    delete ui;
}

