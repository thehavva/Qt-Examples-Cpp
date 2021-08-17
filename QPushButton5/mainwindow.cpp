#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QGridLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    button1=new QPushButton(this);
    button2=new QPushButton(this);
    button1->setText("OK");
    button2->setText("cancel");
    QHBoxLayout *layout=new QHBoxLayout;
    QGridLayout *layout2=new QGridLayout;
    layout->addWidget(button1);
    layout2->addWidget(button2,3,4);
    setLayout(layout);
    setLayout(layout2);
    connect(button1,SIGNAL(clicked()),this,SLOT(onbutton1clicked()));
    connect(button2,SIGNAL(clicked()),this,SLOT(onbutton2clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onbutton1clicked()
{
    QMessageBox::information(this,"my box","You clicked <h2><i>OK button</i>");
}

void MainWindow::onbutton2clicked()
{
    QMessageBox::information(this,"my box","You clicked <h2><i>CANCEL button</i>");
}

