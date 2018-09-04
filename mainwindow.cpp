#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QDesktopWidget>
#include <QShowEvent>

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

void MainWindow::showEvent(QShowEvent * e)
{
    QMainWindow::showEvent(e);
    this->setGeometry(QStyle::alignedRect(
       Qt::LeftToRight,
       Qt::AlignCenter,
       size(),
       qApp->desktop()->availableGeometry()
    ));
}

void MainWindow::on_pushButton_clicked()
{
    QString text = GetCustomUserData().getData();
    QMessageBox::information(this, "Title", "Data: " + text);
}

void MainWindow::on_pushButton_2_clicked()
{
    LambdaTypeDef returnTextCallback = GetCustomUserData().GetLambda();
    QMessageBox::information(this, "Title", "Data: " + returnTextCallback());
}

CustomUserData MainWindow::GetCustomUserData(int index)
{
    auto datos = this->userData(index);
    auto castedData = dynamic_cast<CustomUserData*>(datos);
    return *castedData;
}
