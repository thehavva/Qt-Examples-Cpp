#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

 /*   ui->comboBox->addItem("hi");
    ui->comboBox->addItem("hello");
    ui->comboBox->addItem("world");*/

    for(int i=0; i<5; i++){
        ui->comboBox->addItem(QString::number(i) + ".item");
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",ui->comboBox->currentText());
}

