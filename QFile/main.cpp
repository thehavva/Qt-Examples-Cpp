 #include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QString>
#include <QTextStream>
void Write(QString Filename){
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug()<<"Could not open!";
        return;
    }
    QTextStream out(&mFile);
    out<<"hello world";
    mFile.flush();
    mFile.close();
}
void Read(QString Filename){

    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"Could not open!";
        return;
    }
    QTextStream in(&mFile);
    QString mText=in.readAll();
    qDebug()<<mText;
    mFile.close();
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString mFilename="C:/Qt/QFile";
    Write(mFilename);
    Read(mFilename);
    w.show();
    return a.exec();
}
