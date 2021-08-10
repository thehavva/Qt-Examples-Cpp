#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Title",ui->pushButton_2->text());
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"Title",ui->pushButton->text());
}

