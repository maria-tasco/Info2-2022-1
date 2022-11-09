#ifndef TABLERONIVELES_H
#define TABLERONIVELES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TableroNiveles; }
QT_END_NAMESPACE

class TableroNiveles : public QMainWindow
{
    Q_OBJECT

public:
    TableroNiveles(QWidget *parent = nullptr);
    ~TableroNiveles();

private:
    Ui::TableroNiveles *ui;
};
#endif // TABLERONIVELES_H
