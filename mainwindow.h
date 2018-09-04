#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

using namespace std;
typedef   QString (*LambdaTypeDef)  ( );


class UserData : public QObjectUserData {
public:
    void setData(QString data) {
        _data = data;
    }

    QString getData() {
        return _data;
    }


    LambdaTypeDef _f;
    void SetLambda(LambdaTypeDef f)
    {
      _f = f;
    }

    LambdaTypeDef GetLambda()
    {
        return _f;
        //_f();
    }

private:
    QString _data;

};


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    UserData GetCustomUserData(int index = 0);
};

#endif // MAINWINDOW_H
