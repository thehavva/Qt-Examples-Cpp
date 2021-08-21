#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window=new QWidget;
    window->setWindowTitle("MY APP");
    window->resize(300,100);
    label=new QLabel;
    label->setText("What is your age?");
    button=new QPushButton("OK");
    layout=new QGridLayout(this);
    box=new QSpinBox(this);
    box->setRange(0,150);
    box->resize(20,20);
    slider=new QSlider(Qt::Horizontal);
    slider->setRange(0,150);

    layout->addWidget(label,0,0);
    layout->addWidget(box,1,0);
    layout->addWidget(button,1,1);
    layout->addWidget(slider,2,0);
    window->setLayout(layout);
    connect(button,SIGNAL(clicked()),this,SLOT(onclicked()));
    connect(slider,SIGNAL(valueChanged(int)),box,SLOT(setValue(int)));
    window->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onclicked()
{

    QMessageBox::information(this,"my box","<font color=brown>You clicked OK button!</font></h2>");

}

