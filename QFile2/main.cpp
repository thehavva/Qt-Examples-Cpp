#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

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
    QCoreApplication a(argc, argv);
    Read(":/MyFiles/ResourceFile.pro");
    return a.exec();
}
