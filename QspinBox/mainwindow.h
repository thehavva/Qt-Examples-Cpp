#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSpinBox>
#include <QWidget>
#include  <QLabel>
#include <QGridLayout>
#include  <QSlider>
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
    void onclicked();
private:
    Ui::MainWindow *ui;
    QPushButton *button;
    QGridLayout *layout;
    QSpinBox *box;
    QWidget *window;
    QLabel *label;
    QSlider *slider;
};
#endif // MAINWINDOW_H
