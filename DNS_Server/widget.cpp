#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mServer = new myServer(this);
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



void Widget::on_btnEnviar_clicked()
{
    mServer->send(ui->txfMensaje->text());
}



void Widget::on_btnSalir_clicked()
{
    close();
}
