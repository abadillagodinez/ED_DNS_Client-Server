#ifndef MYSERVER_H
#define MYSERVER_H
#include "splaytree.h"
#include <fstream>
#include <QTcpServer>
#define PORT 5055

class myServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit myServer(QObject *parent = 0);
    void send(const QString &ms);
    void recieve(const QString &ms);
    void recieveFromServer(const string &ms);
    void conectar(const QString &direccion, int puerto);

private:
    QTcpSocket *mSocket; //socket del cliente
    QTcpSocket *mSocketToServer;
    SplayTree *splay;
    void leerDominios();

};

#endif // MYSERVER_H
