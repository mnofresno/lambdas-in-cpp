#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

UserData MainWindow::GetCustomUserData(int index)
{
    auto datos = this->userData(index);
    auto castedData = dynamic_cast<UserData*>(datos);
    return *castedData;
}