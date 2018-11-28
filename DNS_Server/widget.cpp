#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(408,168);
    mServer = new myServer(this);

    mSocketToServer = new QTcpSocket(this);

    //conexion con servidor
    connect(mSocketToServer, &QTcpSocket::readyRead, [&]()
    {
        QTextStream T(mSocketToServer);
        mServer->recieveFromServer(T.readAll().toStdString());
    });

    mServer->setSocketToServer(mSocketToServer);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnIniciar_clicked()
{
    if(!mServer->listen(QHostAddress::Any, ui->sbxPuerto->value()))
        QMessageBox::critical(this, "Error", mServer->errorString());
    else
        QMessageBox::information(this, "Servidor", "Iniciado.");
}


void Widget::on_btnSalir_clicked()
{
    close();
}

void Widget::on_btnConectar_clicked()
{
    mSocketToServer->connectToHost(ui->txfServidor->text(), ui->sbxPuerto_2->value());
    QMessageBox::information(this, "Cliente", "Conectado.");
}
