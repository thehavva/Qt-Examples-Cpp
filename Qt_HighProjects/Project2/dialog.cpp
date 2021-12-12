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


void Dialog::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this,"Answer Box",ui->radioButton->text() + " is false");
    }
    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this,"Answer Box",ui->radioButton_2->text() + " is TRUE");
    }
    if(ui->radioButton_3->isChecked()){
        QMessageBox::information(this,"Answer Box",ui->radioButton_3->text() + " is false");
    }

}

