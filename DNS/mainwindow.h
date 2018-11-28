#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWebEngineView>
#include <iostream>
#include <QMainWindow>
#include <QMessageBox>
#include "viewer.h"
#include <QTcpSocket>

using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void consultar(const QString &ms);

private slots:
    void on_btnAbrir_clicked();

    void on_btnConectar_clicked();

    void on_btnAbrir_2_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *mSocket;
    QString respuesta = "";


    
};

#endif // MAINWINDOW_H
