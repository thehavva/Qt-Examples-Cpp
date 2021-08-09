#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("My Application");
    QPushButton *button1 =new QPushButton("one");
    QPushButton *button2 =new QPushButton("two");
    QPushButton *button3 =new QPushButton("three");

  //  QHBoxLayout *hlayout=new QHBoxLayout;
    QVBoxLayout *vlayout=new QVBoxLayout;

    /*
    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);
    window->setLayout((hlayout));
     */

    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);
    window->setLayout((vlayout));

    window->show();
    return a.exec();
}
