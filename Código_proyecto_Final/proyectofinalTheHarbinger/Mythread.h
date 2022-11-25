#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTimer>

class Mythread : public QThread
{ Q_OBJECT
public:
    Mythread(int miliseconds, QObject *parent = nullptr);
private:
    int miliseconds;
protected:
    void run();
signals:
    void timeOut();
};

#endif // MYTHREAD_H
