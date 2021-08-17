#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QAbstractButton>
#include <QWidget>
#include <QGridLayout>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w=new QWidget;
    w->resize(200,200);
    w->setWindowTitle("My Widget");
    QGridLayout *layout=new QGridLayout;
    QPushButton *button1=new QPushButton;
    QPushButton *button2=new QPushButton();
    button1->setIcon(QIcon(":/Images/OK.jpg"));
    button2->setIcon(QIcon(":/Images/cancel.jpg"));
    button1->setIconSize(button1->size());
    button2->setIconSize(button2->size());
    QObject::connect(button1,SIGNAL(clicked()),&a,SLOT(quit()));
    QObject::connect(button2,SIGNAL(clicked()),&a,SLOT(quit()));
    layout->addWidget(button1,0,0);
    layout->addWidget(button2,1,0);
    w->setLayout(layout);

    return a.exec();
}
