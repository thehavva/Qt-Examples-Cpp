#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QGridLayout>
#include <QWidget>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w=new QWidget;
    w->resize(500,300);
    w->setWindowTitle("My Widget");
    w->setWindowIcon(QIcon(":/Images/label.jpg"));
    QLabel *label=new QLabel("<h2><i>Our boss</i>"" is <font color=red>HAVVA YILMAZ!</font></h2>"); //from HTML syntax example
    QGridLayout *layout=new QGridLayout;
    w->setLayout(layout);
    layout->addWidget(label,0,0);
    w->show();
    return a.exec();
}
