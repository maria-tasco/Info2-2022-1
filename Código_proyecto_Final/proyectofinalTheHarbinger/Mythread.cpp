#include "Mythread.h"


Mythread::Mythread(int miliseconds, QObject *parent)
{
 this->miliseconds = miliseconds;
}

void Mythread::run()
{
    while (true){
        msleep(miliseconds);
        emit timeOut();
    }
}
