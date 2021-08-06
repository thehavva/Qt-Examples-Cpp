#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString str="Hello World Application";
    qDebug()<<"Hello World Application ";
    qDebug()<<str;
    return a.exec();
}
