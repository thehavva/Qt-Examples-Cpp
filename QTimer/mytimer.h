#ifndef MYTIMER_H
#define MYTIMER_H

#include <QtCore>

class MyTimer:public QObject
{
    Q_OBJECT //using signal slots mechanism
public:
    MyTimer();
    QTimer *timer;
public slots:
    void Myslot();
};

#endif // MYTIMER_H
