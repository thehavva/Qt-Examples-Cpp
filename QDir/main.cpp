#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   // QDir mDir("QDir");
   // qDebug()<<mDir.exists();
    QDir mDir;
    foreach(QFileInfo mItem, mDir.drives()){
        qDebug()<< mItem.absoluteFilePath();
    }
    return a.exec();
}
