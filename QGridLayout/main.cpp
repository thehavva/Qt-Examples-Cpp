#include "mainwindow.h"

#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window=new QWidget;
    window->setWindowTitle("My Application");

    QGridLayout *glayout=new QGridLayout;

    QLabel *label1=new QLabel("Name:");
    QLineEdit *txtname1=new QLineEdit;

    QLabel *label2=new QLabel("Surname:");
    QLineEdit *txtname2=new QLineEdit;

    glayout->addWidget(label1,0,0);
    glayout->addWidget(txtname1,0,2);

    glayout->addWidget(label2,1,0);
    glayout->addWidget(txtname2,1,2);

    QPushButton *button=new QPushButton("OK");
    glayout->addWidget(button,2,0,2,4);
    window->setLayout(glayout);
    window->show();
    return a.exec();
}
