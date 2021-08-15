#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QtCore>
#include <QtGui>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
   QMessageBox::information(this,"Open File","Opened file succesfully.");
}

