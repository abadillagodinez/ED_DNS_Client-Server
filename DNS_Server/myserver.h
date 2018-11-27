#ifndef MYSERVER_H
#define MYSERVER_H
#include "splaytree.h"
#include <fstream>
#include <QTcpServer>

class myServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit myServer(QObject *parent = 0);
    void send(const QString &ms);
    void recieve(const QString &ms);
private:
    QTcpSocket *mSocket; //Lista pendiente de sockets
    SplayTree *splay;
    void leerDominios();

};

#endif // MYSERVER_H
