#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <iostream>
#include <functional>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto *w = new MainWindow();

    LambdaTypeDef lambdaJustWeCan = []() -> QString
    {
        return "This is data from lambdaJustWeCan";
    };

    auto loadWindowCallback = [&](int inputNumber = 0)
    {
        UserData * data = new UserData();

        data->setData(QString("this is happy data from lambda callback loadWindowCallback: %1").arg(inputNumber));
        data->SetLambda(lambdaJustWeCan);
        w->setUserData(0, data);
        w->show();
    };

    loadWindowCallback(6);
    return a.exec();
}
