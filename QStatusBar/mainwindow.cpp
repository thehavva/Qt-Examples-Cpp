#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtGui>
#include <QtCore>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statlabel=new QLabel(this);
    statprogres=new QProgressBar(this);
    ui->statusbar->addPermanentWidget((statlabel));
    ui->statusbar->addPermanentWidget(statprogres);
    statprogres->setTextVisible(false);
    statlabel->setText(("Hi"));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionDo_something_triggered()
{
    ui->statusbar->showMessage("HAVVA YILMAZ",2000);
    statprogres->setValue(95);

}

