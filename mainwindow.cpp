#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QWidget::setGeometry(QRect(value, 110, 651, 951));
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    QWidget::setGeometry(QRect(100, value, 651, 951));
}
