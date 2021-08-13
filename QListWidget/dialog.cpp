#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
   // ui->listWidget->addItem("Havva");
  //  ui->listWidget->addItem("Yılmaz");
    for(int i=0; i<10; i++){
        ui->listWidget->addItem(QString::number(i)+".item here");
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setText("Carpe Diem");
    QListWidgetItem *itm=ui->listWidget->currentItem();
    itm->setText("Vincenzo Gassanio");
    itm->setTextColor(Qt::yellow);
    itm->setBackgroundColor(Qt::red);
}

