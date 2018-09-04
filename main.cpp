#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

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
        CustomUserData * data = new CustomUserData();

        data->setData(QString("this is data from lambda callback loadWindowCallback: %1").arg(inputNumber));
        data->SetLambda(lambdaJustWeCan);
        w->setUserData(0, data);
        w->show();
    };

    loadWindowCallback(6);
    return a.exec();
}
