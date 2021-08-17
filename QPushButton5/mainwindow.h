#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

class QPushButton;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void onbutton1clicked();
    void onbutton2clicked();
private:
    Ui::MainWindow *ui;
    QPushButton *button1;
    QPushButton *button2;
};
#endif // MAINWINDOW_H
