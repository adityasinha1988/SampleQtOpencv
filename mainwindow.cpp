#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::help()
{
   QMessageBox::information(this,"Hi","this");
}

void MainWindow::on_pushButton_clicked()
{
    Mat image;
    image = imread(argv[1], CV_LOAD_IMAGE_COLOR);
    ui-->setPixmap(QPixmap::fromImage(image));
    ui->label->adjustSize();
}
