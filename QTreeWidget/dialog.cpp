#include "dialog.h"
#include "ui_dialog.h"


#include <QTreeWidget>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabels(QStringList()<<"One"<<"Two");
    AddRoot("Remziye","YILMAZ");
    AddRoot("Yusuf","YILMAZ");
}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::AddRoot(QString name, QString Description){
    QTreeWidgetItem *itm= new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,name);
    itm->setText(1,Description);
    ui->treeWidget->addTopLevelItem(itm);
     AddChild(itm,"Havva","YILMAZ");
     AddChild(itm,"Ebubekir","YILMAZ");
}
void Dialog::AddChild(QTreeWidgetItem *parent,QString name, QString Description){
    QTreeWidgetItem *itm= new QTreeWidgetItem();
    itm->setText(0,name);
    itm->setText(1,Description);
    parent->addChild(itm);
}

void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0,Qt::yellow);
    ui->treeWidget->currentItem()->setBackgroundColor(1,Qt::green);
}

