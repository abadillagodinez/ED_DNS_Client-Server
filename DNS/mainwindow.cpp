#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpSocket>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listAver->setVisible(false);
    setFixedSize(400, 295);
    mSocket = new QTcpSocket(this);

    //conexion con el servidor al leer
    connect(mSocket, &QTcpSocket::readyRead, [&]()
    {
        QTextStream T(mSocket);
        ui->listAver->setText(T.readAll());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAbrir_clicked()
{
    consultar(ui->txfURL->text());
    QMessageBox::information(this, "Consultado", "Se consultó al servidor ya puede solicitar apertura.");
}

void MainWindow::on_btnAbrir_2_clicked()
{
    if(ui->listAver->text() == "1")
    {
        Viewer *view = new Viewer();
        view->setURL(ui->txfURL->text().toStdString());
        view->visible();
        view->setVisible(true);
    }
    else if(ui->listAver->text() == "")
        QMessageBox::information(this, "Error.", "Debe consultar si la página se encuentra en el servidor.");
    else if(ui->listAver->text() == "0")
        QMessageBox::information(this, "Error.", "Consultado, pero no se encuentra.");
}

void MainWindow::on_btnConectar_clicked()
{
    mSocket->connectToHost(ui->txfServidor->text(), ui->sbxPuerto->value());
    QMessageBox::information(this, "Cliente", "Conectado.");
}

 void MainWindow::consultar(const QString &dominio)
{
    if(mSocket)
    {
        QTextStream T(mSocket);
        T << dominio;
        mSocket->flush();
    }
}

