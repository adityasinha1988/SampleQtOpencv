#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QtGui>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

using namespace cv;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void help();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
