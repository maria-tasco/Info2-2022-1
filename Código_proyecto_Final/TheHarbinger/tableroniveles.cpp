#include "tableroniveles.h"
#include "ui_tableroniveles.h"

TableroNiveles::TableroNiveles(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TableroNiveles)
{
    ui->setupUi(this);
}

TableroNiveles::~TableroNiveles()
{
    delete ui;
}

